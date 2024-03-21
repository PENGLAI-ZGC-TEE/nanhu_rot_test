// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/lib/crypto/impl/sm2/ecdsa_p256.h"
#include "sw/device/lib/crypto/impl/integrity.h"
#include "sw/device/lib/crypto/impl/keyblob.h"
#include "sw/device/lib/crypto/include/datatypes.h"
#include "sw/device/lib/crypto/include/sm2.h"
#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/runtime/print.h"
#include "sw/device/lib/crypto/drivers/hmac.h"
#include "sw/device/lib/testing/entropy_testutils.h"
#include "sw/device/lib/testing/test_framework/check.h"
#include "sw/device/lib/testing/test_framework/ottf_main.h"
// Message
static const char kMessage[] = "test message";
unsigned char sm2_param_a[32] = {0xFF, 0xFF, 0xFF, 0xFF, 
                                 0x00, 0x00, 0x00, 0x01,
                                 0x00, 0x00, 0x00, 0x00,
                                 0x00, 0x00, 0x00, 0x00,
                                 0x00, 0x00, 0x00, 0x00,
                                 0xFF, 0xFF, 0xFF, 0xFF, 
                                 0xFF, 0xFF, 0xFF, 0xFF, 
                                 0xFF, 0xFF, 0xFF, 0xFC};
unsigned char sm2_param_b[32] = {0x5a, 0xc6, 0x35, 0xd8,
                                 0xaa, 0x3a, 0x93, 0xe7,
                                 0xb3, 0xeb, 0xbd, 0x55,
                                 0x76, 0x98, 0x86, 0xbc,
                                 0x65, 0x1d, 0x06, 0xb0,
                                 0xcc, 0x53, 0xb0, 0xf6,
                                 0x3b, 0xce, 0x3c, 0x3e,
                                 0x27, 0xd2, 0x60, 0x4b};
unsigned char sm2_param_x_G[32] = {0x6b, 0x17, 0xd1, 0xf2,
                                   0xe1, 0x2c, 0x42, 0x47,
                                   0xf8, 0xbc, 0xe6, 0xe5,
                                   0x63, 0xa4, 0x40, 0xf2,
                                   0x77, 0x03, 0x7d, 0x81,
                                   0x2d, 0xeb, 0x33, 0xa0,
                                   0xf4, 0xa1, 0x39, 0x45,
                                   0xd8, 0x98, 0xc2, 0x96};
unsigned char sm2_param_y_G[32] = {0x4f, 0xe3, 0x42, 0xe2,
                                   0xfe, 0x1a, 0x7f, 0x9b,
                                   0x8e, 0xe7, 0xeb, 0x4a,
                                   0x7c, 0x0f, 0x9e, 0x16,
                                   0x2b, 0xce, 0x33, 0x57,
                                   0x6b, 0x31, 0x5e, 0xce,
                                   0xcb, 0xb6, 0x40, 0x68,
                                   0x37, 0xbf, 0x51, 0xf5};
unsigned char sm2_param_x_A[32];
unsigned char sm2_param_y_A[32];
unsigned char id_a[18] = {0x41, 0x4C, 0x49, 0x43, 0x45, 0x31, 0x32, 0x33, 0x40, 
                          0x59, 0x41, 0x48, 0x4F, 0x4F, 0x2E, 0x43, 0x4F, 0x4D};
char id[] = "ALICE123@YAHOO.COM";
unsigned char entla[] = {0x00, 0x90};

// static const ecc_curve_t kCurveP256 = {
//     .curve_type = kEccCurveTypeNistP256,
//     .domain_parameter =
//         (ecc_domain_t){
//             .p = (crypto_const_uint8_buf_t){.data = NULL, .len = 0},
//             .a = (crypto_const_uint8_buf_t){.data = NULL, .len = 0},
//             .b = (crypto_const_uint8_buf_t){.data = NULL, .len = 0},
//             .q = (crypto_const_uint8_buf_t){.data = NULL, .len = 0},
//             .gx = NULL,
//             .gy = NULL,
//             .cofactor = 0u,
//             .checksum = 0u,
//         },
// };

static const crypto_const_uint8_buf_t null_crypto_const_uint8_buf = {.data = NULL, .len = 0};

static const ecc_domain_t domain_parameter = {
    .p = null_crypto_const_uint8_buf,
    .a = null_crypto_const_uint8_buf,
    .b = null_crypto_const_uint8_buf,
    .q = null_crypto_const_uint8_buf,
    .gx = NULL,
    .gy = NULL,
    .cofactor = 0u,
    .checksum = 0u,
};

static const ecc_curve_t kCurveP256 = {
    .curve_type = kEccCurveTypeNistP256,
    .domain_parameter = domain_parameter,
};

static const crypto_key_config_t kPrivateKeyConfig = {
    .version = kCryptoLibVersion1,
    .key_mode = kKeyModeEcdsa,
    .key_length = 258 / 8,
    .hw_backed = kHardenedBoolFalse,
    .diversification_hw_backed =
        (crypto_const_uint8_buf_t){.data = NULL, .len = 0},
    .security_level = kSecurityLevelLow,
};

status_t sign_then_verify_test(hardened_bool_t *verification_result) {
  // Allocate space for a masked private key.
  uint32_t keyblob[keyblob_num_words(kPrivateKeyConfig)];
  crypto_blinded_key_t private_key = {
      .config = kPrivateKeyConfig,
      .keyblob_length = sizeof(keyblob),
      .keyblob = keyblob,
  };

  // Allocate space for a public key.
  uint32_t pk_x[kP256CoordWords] = {0};
  uint32_t pk_y[kP256CoordWords] = {0};
  ecc_public_key_t public_key = {
      .x =
          {
              .key_mode = kKeyModeEcdsa,
              .key_length = sizeof(pk_x),
              .key = pk_x,
          },
      .y =
          {
              .key_mode = kKeyModeEcdsa,
              .key_length = sizeof(pk_y),
              .key = pk_y,
          },
  };
  public_key.x.checksum = integrity_unblinded_checksum(&public_key.x);
  public_key.y.checksum = integrity_unblinded_checksum(&public_key.y);

  // Generate a keypair.
  LOG_INFO("Generating keypair...");
  CHECK(otcrypto_ecdsa_keygen(&kCurveP256, &private_key, &public_key) ==
        kCryptoStatusOK);
  for (size_t i = 0; i < public_key.x.key_length; i++) {
      size_t j = i * 4;
      sm2_param_x_A[j+3] = (unsigned char)public_key.x.key[i];
      sm2_param_x_A[j+2] = (unsigned char) (public_key.x.key[i] >> 8);
      sm2_param_x_A[j+1] = (unsigned char) (public_key.x.key[i] >> 16);
      sm2_param_x_A[j] = (unsigned char) (public_key.x.key[i] >> 24);
  }
  for (size_t i = 0; i < public_key.y.key_length; i++) {
      size_t j = i * 4;
      sm2_param_y_A[j+3] = (unsigned char) (public_key.y.key[i]);
      sm2_param_y_A[j+2] = (unsigned char) (public_key.y.key[i] >> 8);
      sm2_param_y_A[j+1] = (unsigned char) (public_key.y.key[i] >> 16);
      sm2_param_y_A[j] = (unsigned char) (public_key.y.key[i] >> 24);
  }
 crypto_const_uint8_buf_t entla_buf = {
      .len = sizeof(entla) / sizeof(entla[0]),
      .data = entla,
  };
 crypto_const_uint8_buf_t ida_buf = {
      .len = sizeof(id_a) / sizeof(id_a[0]),
      .data = id_a,
  };
 crypto_const_uint8_buf_t a_buf = {
      .len = sizeof(sm2_param_a) / sizeof(sm2_param_a[0]),
      .data = sm2_param_a,
  };
 crypto_const_uint8_buf_t b_buf = {
      .len = sizeof(sm2_param_b) / sizeof(sm2_param_b[0]),
      .data = sm2_param_b,
  };
 crypto_const_uint8_buf_t xg_buf = {
      .len = sizeof(sm2_param_x_G) / sizeof(sm2_param_x_G[0]),
      .data = sm2_param_x_G,
  };
 crypto_const_uint8_buf_t yg_buf = {
      .len = sizeof(sm2_param_y_G) / sizeof(sm2_param_y_G[0]),
      .data = sm2_param_y_G,
  };
 crypto_const_uint8_buf_t xa_buf = {
      .len = sizeof(sm2_param_x_A) / sizeof(sm2_param_x_A[0]),
      .data = sm2_param_x_A,
  };
 crypto_const_uint8_buf_t ya_buf = {
      .len = sizeof(sm2_param_y_A) / sizeof(sm2_param_y_A[0]),
      .data = sm2_param_y_A,
  };
  // Package message in a cryptolib-style struct.
  crypto_const_uint8_buf_t message = {
      .len = sizeof(kMessage) - 1,
      .data = (unsigned char *)&kMessage,
  };

  hmac_digest_t M_digest;
  hmac_sha256_init();
  hmac_update(entla_buf.data, entla_buf.len);
  hmac_update(ida_buf.data, ida_buf.len);
  hmac_update(a_buf.data, a_buf.len);
  hmac_update(b_buf.data, b_buf.len);
  hmac_update(xg_buf.data, xg_buf.len);
  hmac_update(yg_buf.data, yg_buf.len);
  hmac_update(xa_buf.data, xa_buf.len);
  hmac_update(ya_buf.data, ya_buf.len);
  hmac_update(message.data, message.len);
  hmac_final(&M_digest);

  crypto_const_uint8_buf_t message_digest = {
      .len = sizeof(M_digest) - 1,
      .data = (unsigned char *)&M_digest,
  };
  // Allocate space for the signature.
  uint32_t sigR[kP256ScalarWords] = {0};
  uint32_t sigS[kP256ScalarWords] = {0};
  ecc_signature_t signature = {
      .len_r = sizeof(sigR),
      .r = sigR,
      .len_s = sizeof(sigS),
      .s = sigS,
  };

  // Generate a signature for the message.
  LOG_INFO("Signing...");
  CHECK(otcrypto_ecdsa_sign(&private_key, message_digest, &kCurveP256, &signature) ==
        kCryptoStatusOK);

  // Verify the signature.
  LOG_INFO("Verifying...");
  CHECK(otcrypto_ecdsa_verify(&public_key, message_digest, &signature, &kCurveP256,
                              verification_result) == kCryptoStatusOK);

  return OTCRYPTO_OK;
}

OTTF_DEFINE_TEST_CONFIG();

bool main(void) {
    LOG_INFO("Test");
    // edn entropy csrng init
     void *entropy_conf_addr = (void*)0x3b160024;
     void *entropy_en_addr = (void*)0x3b160020;
     void *csrng_ctrl_addr = (void*)0x3b150014;
     void *end0_ctrl_addr = (void*)0x3b190014;
     void *puf_enable_addr = (void*)0x3b1c0000;
     *(uint32_t*)entropy_conf_addr = 0x00909099;
     asm volatile("" ::: "memory");
     *(uint32_t*)entropy_en_addr = 0x00000006;
     asm volatile("" ::: "memory");
     *(uint32_t*)csrng_ctrl_addr = 0x00000666;
     asm volatile("" ::: "memory");
     *(uint32_t*)end0_ctrl_addr = 0x00009966;
     asm volatile("" ::: "memory");
     *(uint32_t*)puf_enable_addr = 0x00000001;
     asm volatile("" ::: "memory");

     
  CHECK_STATUS_OK(entropy_testutils_auto_mode_init());

  hardened_bool_t verificationResult;
  status_t err = sign_then_verify_test(&verificationResult);
  if (!status_ok(err)) {
    // If there was an error, print the OTBN error bits and instruction count.
    LOG_INFO("OTBN error bits: 0x%08x", otbn_err_bits_get());
    LOG_INFO("OTBN instruction count: 0x%08x", otbn_instruction_count_get());
    // Print the error.
    CHECK_STATUS_OK(err);
    return false;
  }

  // Signature verification is expected to succeed.
  if (verificationResult != kHardenedBoolTrue) {
    LOG_ERROR("Signature failed to pass verification!");
    return false;
  }
LOG_INFO("Done");
  return 0;
}
