// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/lib/base/mmio.h"
#include "sw/device/lib/dif/dif_rom_ctrl.h"
#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/testing/test_framework/check.h"
#include "sw/device/lib/testing/test_framework/ottf_main.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

static dif_rom_ctrl_t rom_ctrl;

OTTF_DEFINE_TEST_CONFIG();

bool main(void) {
  dif_rom_ctrl_digest_t computed_digest;
  dif_rom_ctrl_digest_t expected_digest;

  // initialize rom_ctrl
  mmio_region_t rom_ctrl_reg =
      mmio_region_from_addr(TOP_EARLGREY_ROM_CTRL_REGS_BASE_ADDR);
  CHECK_DIF_OK(dif_rom_ctrl_init(rom_ctrl_reg, &rom_ctrl));

  // get computed and expected digests and check that they match
  CHECK_DIF_OK(dif_rom_ctrl_get_digest(&rom_ctrl, &computed_digest));
  while (computed_digest.digest[0] == 0)
  {
    LOG_INFO("Waiting computing...\n");
    CHECK_DIF_OK(dif_rom_ctrl_get_digest(&rom_ctrl, &computed_digest));
  }
  
  CHECK_DIF_OK(dif_rom_ctrl_get_expected_digest(&rom_ctrl, &expected_digest));

  LOG_INFO("256-bit Computed Digest in custom order: %08x%08x%08x%08x%08x%08x%08x%08x\n",
    computed_digest.digest[6],
    computed_digest.digest[7],
    computed_digest.digest[4],
    computed_digest.digest[5],
    computed_digest.digest[2],
    computed_digest.digest[3],
    computed_digest.digest[0],
    computed_digest.digest[1]
  );

  LOG_INFO("256-bit Excepted Digest in custom order: %08x%08x%08x%08x%08x%08x%08x%08x\n",
    expected_digest.digest[6],
    expected_digest.digest[7],
    expected_digest.digest[4],
    expected_digest.digest[5],
    expected_digest.digest[2],
    expected_digest.digest[3],
    expected_digest.digest[0],
    expected_digest.digest[1]
  );
  CHECK_ARRAYS_EQ(computed_digest.digest, expected_digest.digest,
                  ROM_CTRL_DIGEST_MULTIREG_COUNT,
                  "Mismatch between computed and expected digest.");

  return 0;
}
