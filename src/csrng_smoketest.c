// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/lib/base/macros.h"
#include "sw/device/lib/base/mmio.h"
#include "sw/device/lib/dif/dif_csrng.h"
#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/testing/csrng_testutils.h"
#include "sw/device/lib/testing/test_framework/check.h"
#include "sw/device/lib/testing/test_framework/ottf_main.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

OTTF_DEFINE_TEST_CONFIG();

enum {
  kExpectedOutputLen = 16,
};

/**
 * Run CTR DRBG Known-Answer-Tests (KATs).
 *
 * This is a simplified version of csrng_kat_test. It skips CSRNG internal
 * state checks to optimize runtime.
 */
status_t test_ctr_drbg_ctr0_smoke(const dif_csrng_t *csrng) {
  CHECK_DIF_OK(dif_csrng_uninstantiate(csrng));
  LOG_INFO("1");

  const dif_csrng_seed_material_t kEntropyInput = {
      .seed_material = {0x73bec010, 0x9262474c, 0x16a30f76, 0x531b51de,
                        0x2ee494e5, 0xdfec9db3, 0xcb7a879d, 0x5600419c,
                        0xca79b0b0, 0xdda33b5c, 0xa468649e, 0xdf5d73fa},
      .seed_material_len = 12,
  };
  TRY(csrng_testutils_cmd_ready_wait(csrng));
  LOG_INFO("2");
  CHECK_DIF_OK(dif_csrng_instantiate(csrng, kDifCsrngEntropySrcToggleDisable,
                                     &kEntropyInput));

  uint32_t got[kExpectedOutputLen];
  TRY(csrng_testutils_cmd_generate_run(csrng, got, kExpectedOutputLen));
  LOG_INFO("3");
  TRY(csrng_testutils_cmd_generate_run(csrng, got, kExpectedOutputLen));
  LOG_INFO("4");

  const uint32_t kExpectedOutput[kExpectedOutputLen] = {
      0xe48bb8cb, 0x1012c84c, 0x5af8a7f1, 0xd1c07cd9, 0xdf82ab22, 0x771c619b,
      0xd40fccb1, 0x87189e99, 0x510494b3, 0x64f7ac0c, 0x2581f391, 0x80b1dc2f,
      0x793e01c5, 0x87b107ae, 0xdb17514c, 0xa43c41b7,
  };
  CHECK_ARRAYS_EQ(got, kExpectedOutput, kExpectedOutputLen,
                  "Generate command KAT output mismatch");
  return OK_STATUS();
}

bool main(void) {
  // edn entropy csrng init
     void *entropy_conf_addr = (void*)0x3b160024;
     void *entropy_en_addr = (void*)0x3b160020;
     void *csrng_ctrl_addr = (void*)0x3b150014;
     void *end0_ctrl_addr = (void*)0x3b190014;
     void *puf_enable_addr = (void*)0x3b1c0000;
     void *puf_mode_addr = (void*)0x3b1c0004;
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
     *(uint32_t*)puf_mode_addr = 0x00000001;
     asm volatile("" ::: "memory");
  dif_csrng_t csrng;
  mmio_region_t base_addr = mmio_region_from_addr(TOP_EARLGREY_CSRNG_BASE_ADDR);
  CHECK_DIF_OK(dif_csrng_init(base_addr, &csrng));
  CHECK_DIF_OK(dif_csrng_configure(&csrng));
  CHECK_STATUS_OK(test_ctr_drbg_ctr0_smoke(&csrng));
  LOG_INFO("CSRNG DONE");
  return 0;
}
