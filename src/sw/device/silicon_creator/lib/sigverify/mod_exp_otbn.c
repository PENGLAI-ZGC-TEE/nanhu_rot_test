// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/silicon_creator/lib/sigverify/mod_exp_otbn.h"

#include "sw/device/lib/base/macros.h"
#include "sw/device/lib/base/memory.h"
#include "sw/device/silicon_creator/lib/base/sec_mmio.h"
#include "sw/device/silicon_creator/lib/drivers/otbn.h"
#include "sw/device/silicon_creator/lib/error.h"
#include "sw/device/silicon_creator/lib/sigverify/rsa_key.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

#include "sw/device/lib/runtime/log.h"


OTBN_DECLARE_APP_SYMBOLS(
    run_rsa_verify_3072_rr_modexp);  // The OTBN RSA-3072 app.
OTBN_DECLARE_SYMBOL_ADDR(run_rsa_verify_3072_rr_modexp,
                         out_buf);  // Output buffer (message).
OTBN_DECLARE_SYMBOL_ADDR(run_rsa_verify_3072_rr_modexp,
                         in_mod);  // The RSA modulus (n).
OTBN_DECLARE_SYMBOL_ADDR(run_rsa_verify_3072_rr_modexp,
                         in_buf);  // The signature (s).
OTBN_DECLARE_SYMBOL_ADDR(run_rsa_verify_3072_rr_modexp,
                         m0inv);  // The Montgomery constant m0_inv.

// static const otbn_app_t kOtbnAppRsa =
//     OTBN_APP_T_INIT(run_rsa_verify_3072_rr_modexp);
// static const otbn_addr_t kOtbnVarRsaOutBuf = 
//     OTBN_ADDR_T_INIT(sm2_ecdsa, out_buf);
// static const otbn_addr_t kOtbnVarRsaInMod = 
//     OTBN_ADDR_T_INIT(sm2_ecdsa, in_mod);
// static const otbn_addr_t kOtbnVarRsaInBuf = 
//     OTBN_ADDR_T_INIT(sm2_ecdsa, in_buf);
// static const otbn_addr_t kOtbnVarRsaM0Inv = 
//     OTBN_ADDR_T_INIT(sm2_ecdsa, m0inv);


// otbn_app_t结构体的定义。
otbn_app_t kOtbnAppRsa;

// 运行时调用的初始化函数。
void initialize_otbn_app_rsa(void) {
    kOtbnAppRsa.imem_start = OTBN_SYMBOL_PTR(run_rsa_verify_3072_rr_modexp, _imem_start);
    kOtbnAppRsa.imem_end = OTBN_SYMBOL_PTR(run_rsa_verify_3072_rr_modexp, _imem_end);
    kOtbnAppRsa.dmem_data_start = OTBN_SYMBOL_PTR(run_rsa_verify_3072_rr_modexp, _dmem_data_start);
    kOtbnAppRsa.dmem_data_end = OTBN_SYMBOL_PTR(run_rsa_verify_3072_rr_modexp, _dmem_data_end);
    kOtbnAppRsa.dmem_data_start_addr = OTBN_ADDR_T_INIT(run_rsa_verify_3072_rr_modexp, _dmem_data_start);
}

// 声明全局指针
 const uint32_t *kOtbnVarRsaOutBuf;
 const uint32_t *kOtbnVarRsaInMod;
 const uint32_t *kOtbnVarRsaInBuf;
 const uint32_t *kOtbnVarRsaM0Inv;

// 在初始化函数中设置指针
void initialize_otbn_pointers() {
    kOtbnVarRsaOutBuf = OTBN_SYMBOL_ADDR(run_rsa_verify_3072_rr_modexp, out_buf);
    kOtbnVarRsaInMod = OTBN_SYMBOL_ADDR(run_rsa_verify_3072_rr_modexp, in_mod);
    kOtbnVarRsaInBuf = OTBN_SYMBOL_ADDR(run_rsa_verify_3072_rr_modexp, in_buf);
    kOtbnVarRsaM0Inv = OTBN_SYMBOL_ADDR(run_rsa_verify_3072_rr_modexp, m0inv);
}

/**
 * Copies a 3072-bit number from the CPU memory to OTBN data memory.
 *
 * @param src Source of the data to copy.
 * @param dst Address of the destination in OTBN's data memory.
 * @return The result of the operation.
 */
static rom_error_t write_rsa_3072_int_to_otbn(const sigverify_rsa_buffer_t *src,
                                              otbn_addr_t dst) {
  return otbn_dmem_write(kSigVerifyRsaNumWords, src->data, dst);
}

/**
 * Copies a 3072-bit number from OTBN data memory to CPU memory.
 *
 * @param src The address in OTBN data memory to copy from.
 * @param dst The destination of the copied data in main memory (preallocated).
 * @return The result of the operation.
 */
static rom_error_t read_rsa_3072_int_from_otbn(const otbn_addr_t src,
                                               sigverify_rsa_buffer_t *dst) {
  return otbn_dmem_read(kSigVerifyRsaNumWords, src, dst->data);
}

rom_error_t run_otbn_rsa_3072_modexp(
    const sigverify_rsa_key_t *public_key,
    const sigverify_rsa_buffer_t *signature,
    sigverify_rsa_buffer_t *recovered_message) {
  initialize_otbn_app_rsa();
  initialize_otbn_pointers();
  // Load the RSA app.
  HARDENED_RETURN_IF_ERROR(otbn_load_app(kOtbnAppRsa));
  // LOG_INFO("otbn load");
  // Set the modulus (n).

  HARDENED_RETURN_IF_ERROR(
      write_rsa_3072_int_to_otbn(&public_key->n, (uint32_t)(uintptr_t)kOtbnVarRsaInMod));
  // Set the signature.
  HARDENED_RETURN_IF_ERROR(
      write_rsa_3072_int_to_otbn(signature, (uint32_t)(uintptr_t)kOtbnVarRsaInBuf));

  // Set the precomputed constant m0_inv.
  HARDENED_RETURN_IF_ERROR(otbn_dmem_write(
      kOtbnWideWordNumWords, public_key->n0_inv, (uint32_t)(uintptr_t)kOtbnVarRsaM0Inv));

  // Start the OTBN routine.
  HARDENED_RETURN_IF_ERROR(otbn_execute());

  SEC_MMIO_WRITE_INCREMENT(kOtbnSecMmioExecute);
  // Check that the instruction count falls within the expected range. If the
  // instruction count falls outside this range, it indicates that there was a
  // fault injection attack of some kind during OTBN execution.
  uint32_t count = otbn_instruction_count_get();
  if (launder32(count) < kModExpOtbnInsnCountMin ||
      launder32(count) > kModExpOtbnInsnCountMax) {
    return kErrorOtbnBadInsnCount;
  }
  HARDENED_CHECK_GE(count, kModExpOtbnInsnCountMin);
  HARDENED_CHECK_LE(count, kModExpOtbnInsnCountMax);

  // Read recovered message out of OTBN dmem.
  return read_rsa_3072_int_from_otbn((uint32_t)(uintptr_t)kOtbnVarRsaOutBuf, recovered_message);
}

rom_error_t sigverify_mod_exp_otbn(const sigverify_rsa_key_t *key,
                                   const sigverify_rsa_buffer_t *sig,
                                   sigverify_rsa_buffer_t *result) {
  // Reject the signature if it is too large (n <= sig): RFC 8017, section
  // 5.2.2, step 1.
  if (memrcmp(key->n.data, sig->data, kSigVerifyRsaNumBytes) <= 0) {
    return kErrorSigverifyLargeRsaSignature;
  }

  // Run OTBN application.
  return run_otbn_rsa_3072_modexp(key, sig, result);
}
