// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/lib/base/mmio.h"
#include "sw/device/lib/dif/dif_hmac.h"
#include "sw/device/lib/dif/dif_rv_plic.h"
// #include "sw/device/lib/runtime/irq.h"
#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/testing/hmac_testutils.h"
#include "sw/device/lib/testing/rv_plic_testutils.h"
#include "sw/device/lib/testing/test_framework/check.h"
// #include "sw/device/lib/testing/test_framework/ottf_main.h"
#include "sw/device/lib/testing/test_framework/ottf_test_config.h"


#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"
#include "sw/device/lib/testing/autogen/isr_testutils.h"

#include "extintr.h"

static plic_isr_ctx_t plic_ctx = {
    .hart_id = kTopEarlgreyPlicTargetIbex0,
};

static top_earlgrey_plic_peripheral_t peripheral_serviced;
static dif_hmac_irq_t irq_serviced;
static hmac_isr_ctx_t hmac_ctx = {
    .plic_hmac_start_irq_id = kTopEarlgreyPlicIrqIdHmacHmacDone,
    .is_only_irq = false,
};

OTTF_DEFINE_TEST_CONFIG();

static const dif_hmac_transaction_t kHmacTransactionConfig = {
    .digest_endianness = kDifHmacEndiannessLittle,
    .message_endianness = kDifHmacEndiannessLittle,
};

/**
 * External ISR.
 *
 * Handles all peripheral interrupts on Ibex. PLIC asserts an external interrupt
 * line to the CPU, which results in a call to this OTTF ISR. This ISR
 * overrides the default OTTF implementation.
 */
void ottf_external_isr(void) {
  isr_testutils_hmac_isr(plic_ctx, hmac_ctx, &peripheral_serviced,
                         &irq_serviced);
}

/**
 * Enables interrupts required by this test.
 */
static void irqs_init(void) {
  mmio_region_t base_addr =
      mmio_region_from_addr(TOP_EARLGREY_RV_PLIC_BASE_ADDR);
  CHECK_DIF_OK(dif_rv_plic_init(base_addr, plic_ctx.rv_plic));

  // Enable interrupts in HMAC IP.
  CHECK_DIF_OK(dif_hmac_irq_set_enabled(hmac_ctx.hmac, kDifHmacIrqHmacDone,
                                        kDifToggleEnabled));
  CHECK_DIF_OK(dif_hmac_irq_set_enabled(hmac_ctx.hmac, kDifHmacIrqFifoEmpty,
                                        kDifToggleEnabled));

//   // Enable interrupts in PLIC.
//   rv_plic_testutils_irq_range_enable(plic_ctx.rv_plic, plic_ctx.hart_id,
//                                      kTopEarlgreyPlicIrqIdHmacHmacDone,
//                                      kTopEarlgreyPlicIrqIdHmacFifoEmpty);

  // enable supervisor external interrupts
  asm volatile("csrs sie, %0" : : "r"((1 << 9)));
  asm volatile("csrs sstatus, 2");
  plic_intr_init();
  // Enable interrupts in Ibex.
  // zdr
//   irq_external_ctrl(true);
//   irq_global_ctrl(true);
}

bool main(void) {
  dif_hmac_t hmac;
  dif_rv_plic_t plic;
  plic_ctx.rv_plic = &plic;
  hmac_ctx.hmac = &hmac;

  mmio_region_t base_addr = mmio_region_from_addr(TOP_EARLGREY_HMAC_BASE_ADDR);
  CHECK_DIF_OK(dif_hmac_init(base_addr, &hmac));

  irqs_init();
  LOG_INFO("Init finish");


//   intr_num_enable(true, true, CONTEXT_S,0); //kTopEarlgreyPlicIrqIdHmacHmacDone
  intr_num_enable(true, true, CONTEXT_S,kTopEarlgreyPlicIrqIdHmacFifoEmpty); //kTopEarlgreyPlicIrqIdHmacFifoEmpty

  // Expect the fifo empty irq after pushing data.
  hmac_ctx.expected_irq = kTopEarlgreyPlicIrqIdHmacFifoEmpty;
  irq_serviced = UINT32_MAX;
  // Use HMAC in SHA256 mode to generate a 256bit key from `kHmacRefLongKey`.
  CHECK_DIF_OK(
      dif_hmac_mode_sha256_start(hmac_ctx.hmac, kHmacTransactionConfig));
  CHECK_STATUS_OK(hmac_testutils_push_message(
      hmac_ctx.hmac, (char *)kHmacRefLongKey, sizeof(kHmacRefLongKey)));
  CHECK_STATUS_OK(hmac_testutils_check_message_length(
      hmac_ctx.hmac, sizeof(kHmacRefLongKey) * 8));

  LOG_INFO("gen finish");
  // If the irq has't fired yet, wait for the `fifoEmpty` interrupt .
  do_wfi();
  // LOG_INFO("intr_num 1 %x",get_intr_num(CONTEXT_S));
  // while(get_intr_num(CONTEXT_S) != hmac_ctx.expected_irq) {
  //   LOG_INFO("intr_num 2 %x",get_intr_num(CONTEXT_S));
  //   do_wfi();
  // }
//   if (irq_serviced != hmac_ctx.expected_irq) {
//     wait_for_interrupt();
//     LOG_INFO("irq_serviced 1 %x",irq_serviced);
//   }
  // LOG_INFO("intr finish");
  // LOG_INFO("intr_num 2 %x",get_intr_num(CONTEXT_S));
  int a = get_intr_num(CONTEXT_S);
  LOG_INFO("intr_num 1 %x", a);
  CHECK(a == hmac_ctx.expected_irq);

  // Expect the done irq after processing data.
  intr_num_enable(true, true, CONTEXT_S,kTopEarlgreyPlicIrqIdHmacHmacDone); 
  hmac_ctx.expected_irq = kTopEarlgreyPlicIrqIdHmacHmacDone;
  irq_serviced = UINT32_MAX;

  CHECK_DIF_OK(dif_hmac_process(hmac_ctx.hmac));
  dif_hmac_digest_t key_digest;
  CHECK_STATUS_OK(hmac_testutils_finish_polled(hmac_ctx.hmac, &key_digest));
  CHECK_ARRAYS_EQ(key_digest.digest, kHmacRefExpectedLongKeyDigest.digest,
                  ARRAYSIZE(key_digest.digest));
  do_wfi();
  int b = get_intr_num(CONTEXT_S);
  LOG_INFO("intr_num 2 %x", b);
  CHECK(b == hmac_ctx.expected_irq);

  // Generate HMAC final digest, using the resulted SHA256 digest over the
  // `kHmacRefLongKey`.
  CHECK_DIF_OK(dif_hmac_mode_hmac_start(
      hmac_ctx.hmac, (uint8_t *)&key_digest.digest[0], kHmacTransactionConfig));
  CHECK_STATUS_OK(hmac_testutils_push_message(hmac_ctx.hmac, kHmacRefData,
                                              sizeof(kHmacRefData)));
  CHECK_STATUS_OK(hmac_testutils_check_message_length(
      hmac_ctx.hmac, sizeof(kHmacRefData) * 8));
  CHECK_DIF_OK(dif_hmac_process(hmac_ctx.hmac));
  LOG_INFO("Waiting for HMAC pooling to finish");
  return status_ok(hmac_testutils_finish_and_check_polled(
      hmac_ctx.hmac, &kHmacRefExpectedDigest));
}
