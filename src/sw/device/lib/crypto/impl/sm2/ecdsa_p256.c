// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/lib/crypto/impl/sm2/ecdsa_p256.h"

#include "sw/device/lib/base/hardened.h"
#include "sw/device/lib/base/hardened_memory.h"
#include "sw/device/lib/crypto/drivers/otbn.h"
#include "sw/device/lib/runtime/log.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

// Module ID for status codes.
#define MODULE_ID MAKE_MODULE_ID('p', '2', 's')

OTBN_DECLARE_APP_SYMBOLS(sm2_ecdsa);        // The OTBN ECDSA/P-256 app.
OTBN_DECLARE_SYMBOL_ADDR(sm2_ecdsa, mode);  // ECDSA mode (sign or verify).
OTBN_DECLARE_SYMBOL_ADDR(sm2_ecdsa, msg);   // Message digest.
OTBN_DECLARE_SYMBOL_ADDR(sm2_ecdsa, r);     // The signature scalar R.
OTBN_DECLARE_SYMBOL_ADDR(sm2_ecdsa, s);     // The signature scalar S.
OTBN_DECLARE_SYMBOL_ADDR(sm2_ecdsa, x);     // The public key x-coordinate.
OTBN_DECLARE_SYMBOL_ADDR(sm2_ecdsa, y);     // The public key y-coordinate.
OTBN_DECLARE_SYMBOL_ADDR(sm2_ecdsa,
                         d0);  // The private key scalar d (share 0).
OTBN_DECLARE_SYMBOL_ADDR(sm2_ecdsa,
                         d1);  // The private key scalar d (share 1).
OTBN_DECLARE_SYMBOL_ADDR(sm2_ecdsa, x_r);  // Verification result.

//static const otbn_app_t kOtbnAppEcdsa = OTBN_APP_T_INIT(sm2_ecdsa);
//static const otbn_addr_t kOtbnVarEcdsaMode = OTBN_ADDR_T_INIT(sm2_ecdsa, mode);
//static const otbn_addr_t kOtbnVarEcdsaMsg = OTBN_ADDR_T_INIT(sm2_ecdsa, msg);
//static const otbn_addr_t kOtbnVarEcdsaR = OTBN_ADDR_T_INIT(sm2_ecdsa, r);
//static const otbn_addr_t kOtbnVarEcdsaS = OTBN_ADDR_T_INIT(sm2_ecdsa, s);
//static const otbn_addr_t kOtbnVarEcdsaX = OTBN_ADDR_T_INIT(sm2_ecdsa, x);
//static const otbn_addr_t kOtbnVarEcdsaY = OTBN_ADDR_T_INIT(sm2_ecdsa, y);
//static const otbn_addr_t kOtbnVarEcdsaD0 = OTBN_ADDR_T_INIT(sm2_ecdsa, d0);
//static const otbn_addr_t kOtbnVarEcdsaD1 = OTBN_ADDR_T_INIT(sm2_ecdsa, d1);
//static const otbn_addr_t kOtbnVarEcdsaXr = OTBN_ADDR_T_INIT(sm2_ecdsa, x_r);

enum {
  /*
   * Mode is represented by a single word.
   */
  kOtbnEcdsaModeWords = 1,
  /*
   * Mode to generate a new random keypair.
   *
   * Value taken from `sm2_ecdsa.s`.
   */
  kOtbnEcdsaModeKeygen = 0x3d4,
  /*
   * Mode to generate a signature.
   *
   * Value taken from `sm2_ecdsa.s`.
   */
  kOtbnEcdsaModeSign = 0x15b,
  /*
   * Mode to verify a signature.
   *
   * Value taken from `sm2_ecdsa.s`.
   */
  kOtbnEcdsaModeVerify = 0x727,
};

otbn_app_t kOtbnAppEcdsa;

void initialize_otbn_app_ecdsa(void) {
  kOtbnAppEcdsa.imem_start = OTBN_SYMBOL_PTR(sm2_ecdsa, _imem_start);
  kOtbnAppEcdsa.imem_end = OTBN_SYMBOL_PTR(sm2_ecdsa, _imem_end);
  kOtbnAppEcdsa.dmem_data_start = OTBN_SYMBOL_PTR(sm2_ecdsa, _dmem_data_start);
  kOtbnAppEcdsa.dmem_data_end = OTBN_SYMBOL_PTR(sm2_ecdsa, _dmem_data_end);
  kOtbnAppEcdsa.dmem_data_start_addr = OTBN_ADDR_T_INIT(sm2_ecdsa, _dmem_data_start);
}

const uint32_t* kOtbnVarEcdsaMode;
const uint32_t* kOtbnVarEcdsaMsg;
const uint32_t* kOtbnVarEcdsaR;
const uint32_t* kOtbnVarEcdsaS;
const uint32_t* kOtbnVarEcdsaX;
const uint32_t* kOtbnVarEcdsaY;
const uint32_t* kOtbnVarEcdsaD0;
const uint32_t* kOtbnVarEcdsaD1;
const uint32_t* kOtbnVarEcdsaXr;

void initialize_otbn_pointers_ecdsa(){
  kOtbnVarEcdsaMode = OTBN_SYMBOL_ADDR(sm2_ecdsa, mode);
  kOtbnVarEcdsaMsg = OTBN_SYMBOL_ADDR(sm2_ecdsa, msg);
  kOtbnVarEcdsaR = OTBN_SYMBOL_ADDR(sm2_ecdsa, r);
  kOtbnVarEcdsaS = OTBN_SYMBOL_ADDR(sm2_ecdsa, s);
  kOtbnVarEcdsaX = OTBN_SYMBOL_ADDR(sm2_ecdsa, x);
  kOtbnVarEcdsaY = OTBN_SYMBOL_ADDR(sm2_ecdsa, y);
  kOtbnVarEcdsaD0 = OTBN_SYMBOL_ADDR(sm2_ecdsa, d0);
  kOtbnVarEcdsaD1 = OTBN_SYMBOL_ADDR(sm2_ecdsa, d1);
  kOtbnVarEcdsaXr = OTBN_SYMBOL_ADDR(sm2_ecdsa, x_r);
}


status_t ecdsa_p256_keygen_start(void) {
  // Load the ECDSA/P-256 app. Fails if OTBN is non-idle.
  LOG_INFO("ecdsa_keygen_start");
    initialize_otbn_app_ecdsa();
  initialize_otbn_pointers_ecdsa();
  HARDENED_TRY(otbn_load_app(kOtbnAppEcdsa));
  LOG_INFO("finish");
  // Set mode so start() will jump into keygen.
  uint32_t mode = kOtbnEcdsaModeKeygen;
  HARDENED_TRY(otbn_dmem_write(kOtbnEcdsaModeWords, &mode, (uint32_t)(uintptr_t)kOtbnVarEcdsaMode));

  // Start the OTBN routine.
  return otbn_execute();
}

status_t ecdsa_p256_keygen_finalize(p256_masked_scalar_t *private_key,
                                    p256_point_t *public_key) {
  // Spin here waiting for OTBN to complete.
  HARDENED_TRY(otbn_busy_wait_for_done());
  initialize_otbn_app_ecdsa();
  initialize_otbn_pointers_ecdsa();
  // Read the masked private key from OTBN dmem.
  HARDENED_TRY(otbn_dmem_read(kP256MaskedScalarShareWords, (uint32_t)(uintptr_t)kOtbnVarEcdsaD0,
                              private_key->share0));
  HARDENED_TRY(otbn_dmem_read(kP256MaskedScalarShareWords, (uint32_t)(uintptr_t)kOtbnVarEcdsaD1,
                              private_key->share1));

  // Read the public key from OTBN dmem.
  HARDENED_TRY(otbn_dmem_read(kP256CoordWords, (uint32_t)(uintptr_t)kOtbnVarEcdsaX, public_key->x));
  HARDENED_TRY(otbn_dmem_read(kP256CoordWords, (uint32_t)(uintptr_t)kOtbnVarEcdsaY, public_key->y));

  // Wipe DMEM.
  HARDENED_TRY(otbn_dmem_sec_wipe());

  return OTCRYPTO_OK;
}

status_t ecdsa_p256_sign_start(const uint32_t digest[kP256ScalarWords],
                               const p256_masked_scalar_t *private_key) {
  // Load the ECDSA/P-256 app. Fails if OTBN is non-idle.
  initialize_otbn_app_ecdsa();
  initialize_otbn_pointers_ecdsa();
  HARDENED_TRY(otbn_load_app(kOtbnAppEcdsa));

  // Set mode so start() will jump into signing.
  uint32_t mode = kOtbnEcdsaModeSign;
  HARDENED_TRY(otbn_dmem_write(kOtbnEcdsaModeWords, &mode, (uint32_t)(uintptr_t)kOtbnVarEcdsaMode));

  // Set the message digest.
  HARDENED_TRY(otbn_dmem_write(kP256ScalarWords, digest, (uint32_t)(uintptr_t)kOtbnVarEcdsaMsg));

  // Set the private key shares.
  HARDENED_TRY(
      p256_masked_scalar_write(private_key, (uint32_t)(uintptr_t)kOtbnVarEcdsaD0, (uint32_t)(uintptr_t)kOtbnVarEcdsaD1));

  // Start the OTBN routine.
  return otbn_execute();
}

status_t ecdsa_p256_sign_finalize(ecdsa_p256_signature_t *result) {
  // Spin here waiting for OTBN to complete.
  HARDENED_TRY(otbn_busy_wait_for_done());
  initialize_otbn_app_ecdsa();
  initialize_otbn_pointers_ecdsa();
  // Read signature R out of OTBN dmem.
  HARDENED_TRY(otbn_dmem_read(kP256ScalarWords, (uint32_t)(uintptr_t)kOtbnVarEcdsaR, result->r));

  // Read signature S out of OTBN dmem.
  HARDENED_TRY(otbn_dmem_read(kP256ScalarWords, (uint32_t)(uintptr_t)kOtbnVarEcdsaS, result->s));

  // Wipe DMEM.
  HARDENED_TRY(otbn_dmem_sec_wipe());

  return OTCRYPTO_OK;
}

status_t ecdsa_p256_verify_start(const ecdsa_p256_signature_t *signature,
                                 const uint32_t digest[kP256ScalarWords],
                                 const p256_point_t *public_key) {
  initialize_otbn_app_ecdsa();
  initialize_otbn_pointers_ecdsa();
  // Load the ECDSA/P-256 app and set up data pointers
  HARDENED_TRY(otbn_load_app(kOtbnAppEcdsa));

  // Set mode so start() will jump into verifying.
  uint32_t mode = kOtbnEcdsaModeVerify;
  HARDENED_TRY(otbn_dmem_write(kOtbnEcdsaModeWords, &mode, (uint32_t)(uintptr_t)kOtbnVarEcdsaMode));

  // Set the message digest.
  HARDENED_TRY(otbn_dmem_write(kP256ScalarWords, digest, (uint32_t)(uintptr_t)kOtbnVarEcdsaMsg));

  // Set the signature R.
  HARDENED_TRY(otbn_dmem_write(kP256ScalarWords, signature->r, (uint32_t)(uintptr_t)kOtbnVarEcdsaR));

  // Set the signature S.
  HARDENED_TRY(otbn_dmem_write(kP256ScalarWords, signature->s, (uint32_t)(uintptr_t)kOtbnVarEcdsaS));

  // Set the public key x coordinate.
  HARDENED_TRY(otbn_dmem_write(kP256CoordWords, public_key->x, (uint32_t)(uintptr_t)kOtbnVarEcdsaX));

  // Set the public key y coordinate.
  HARDENED_TRY(otbn_dmem_write(kP256CoordWords, public_key->y, (uint32_t)(uintptr_t)kOtbnVarEcdsaY));

  // Start the OTBN routine.
  return otbn_execute();
}

status_t ecdsa_p256_verify_finalize(const ecdsa_p256_signature_t *signature,
                                    hardened_bool_t *result) {
  
  // Spin here waiting for OTBN to complete.
  HARDENED_TRY(otbn_busy_wait_for_done());
  initialize_otbn_app_ecdsa();
  initialize_otbn_pointers_ecdsa();
  // Read x_r (recovered R) out of OTBN dmem.
  uint32_t x_r[kP256ScalarWords];
  HARDENED_TRY(otbn_dmem_read(kP256ScalarWords, (uint32_t)(uintptr_t)kOtbnVarEcdsaXr, x_r));

  *result = hardened_memeq(x_r, signature->r, kP256ScalarWords);

  // Wipe DMEM.
  HARDENED_TRY(otbn_dmem_sec_wipe());

  return OTCRYPTO_OK;
}
