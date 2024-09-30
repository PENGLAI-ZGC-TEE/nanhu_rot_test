// Generated register defines for hmac

// Copyright information found in source file:
// Copyright lowRISC contributors (OpenTitan project).

// Licensing information found in source file:
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef _HMAC_REG_DEFS_
#define _HMAC_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
// Number of words for digest
#define HMAC_PARAM_NUM_DIGEST_WORDS 16

// Number of words for key
#define HMAC_PARAM_NUM_KEY_WORDS 32

// Number of alerts
#define HMAC_PARAM_NUM_ALERTS 1

// Register width
#define HMAC_PARAM_REG_WIDTH 32

// Common Interrupt Offsets
#define HMAC_INTR_COMMON_HMAC_DONE_BIT 0
#define HMAC_INTR_COMMON_FIFO_EMPTY_BIT 1
#define HMAC_INTR_COMMON_HMAC_ERR_BIT 2

// Interrupt State Register
#define HMAC_INTR_STATE_REG_OFFSET 0x0
#define HMAC_INTR_STATE_REG_RESVAL 0x0u
#define HMAC_INTR_STATE_HMAC_DONE_BIT 0
#define HMAC_INTR_STATE_FIFO_EMPTY_BIT 1
#define HMAC_INTR_STATE_HMAC_ERR_BIT 2

// Interrupt Enable Register
#define HMAC_INTR_ENABLE_REG_OFFSET 0x4
#define HMAC_INTR_ENABLE_REG_RESVAL 0x0u
#define HMAC_INTR_ENABLE_HMAC_DONE_BIT 0
#define HMAC_INTR_ENABLE_FIFO_EMPTY_BIT 1
#define HMAC_INTR_ENABLE_HMAC_ERR_BIT 2

// Interrupt Test Register
#define HMAC_INTR_TEST_REG_OFFSET 0x8
#define HMAC_INTR_TEST_REG_RESVAL 0x0u
#define HMAC_INTR_TEST_HMAC_DONE_BIT 0
#define HMAC_INTR_TEST_FIFO_EMPTY_BIT 1
#define HMAC_INTR_TEST_HMAC_ERR_BIT 2

// Alert Test Register
#define HMAC_ALERT_TEST_REG_OFFSET 0xc
#define HMAC_ALERT_TEST_REG_RESVAL 0x0u
#define HMAC_ALERT_TEST_FATAL_FAULT_BIT 0

// HMAC Configuration register.
#define HMAC_CFG_REG_OFFSET 0x10
#define HMAC_CFG_REG_RESVAL 0x4100u
#define HMAC_CFG_HMAC_EN_BIT 0
#define HMAC_CFG_SHA_EN_BIT 1
#define HMAC_CFG_ENDIAN_SWAP_BIT 2
#define HMAC_CFG_DIGEST_SWAP_BIT 3
#define HMAC_CFG_KEY_SWAP_BIT 4
#define HMAC_CFG_DIGEST_SIZE_MASK 0xfu
#define HMAC_CFG_DIGEST_SIZE_OFFSET 5
#define HMAC_CFG_DIGEST_SIZE_FIELD \
  ((bitfield_field32_t) { .mask = HMAC_CFG_DIGEST_SIZE_MASK, .index = HMAC_CFG_DIGEST_SIZE_OFFSET })
#define HMAC_CFG_DIGEST_SIZE_VALUE_SHA2_256 0x1
#define HMAC_CFG_DIGEST_SIZE_VALUE_SHA2_384 0x2
#define HMAC_CFG_DIGEST_SIZE_VALUE_SHA2_512 0x4
#define HMAC_CFG_DIGEST_SIZE_VALUE_SHA2_NONE 0x8
#define HMAC_CFG_KEY_LENGTH_MASK 0x3fu
#define HMAC_CFG_KEY_LENGTH_OFFSET 9
#define HMAC_CFG_KEY_LENGTH_FIELD \
  ((bitfield_field32_t) { .mask = HMAC_CFG_KEY_LENGTH_MASK, .index = HMAC_CFG_KEY_LENGTH_OFFSET })
#define HMAC_CFG_KEY_LENGTH_VALUE_KEY_128 0x1
#define HMAC_CFG_KEY_LENGTH_VALUE_KEY_256 0x2
#define HMAC_CFG_KEY_LENGTH_VALUE_KEY_384 0x4
#define HMAC_CFG_KEY_LENGTH_VALUE_KEY_512 0x8
#define HMAC_CFG_KEY_LENGTH_VALUE_KEY_1024 0x10
#define HMAC_CFG_KEY_LENGTH_VALUE_KEY_NONE 0x20

// HMAC command register
#define HMAC_CMD_REG_OFFSET 0x14
#define HMAC_CMD_REG_RESVAL 0x0u
#define HMAC_CMD_HASH_START_BIT 0
#define HMAC_CMD_HASH_PROCESS_BIT 1
#define HMAC_CMD_HASH_STOP_BIT 2
#define HMAC_CMD_HASH_CONTINUE_BIT 3

// HMAC Status register
#define HMAC_STATUS_REG_OFFSET 0x18
#define HMAC_STATUS_REG_RESVAL 0x3u
#define HMAC_STATUS_HMAC_IDLE_BIT 0
#define HMAC_STATUS_FIFO_EMPTY_BIT 1
#define HMAC_STATUS_FIFO_FULL_BIT 2
#define HMAC_STATUS_FIFO_DEPTH_MASK 0x3fu
#define HMAC_STATUS_FIFO_DEPTH_OFFSET 4
#define HMAC_STATUS_FIFO_DEPTH_FIELD \
  ((bitfield_field32_t) { .mask = HMAC_STATUS_FIFO_DEPTH_MASK, .index = HMAC_STATUS_FIFO_DEPTH_OFFSET })

// HMAC Error Code
#define HMAC_ERR_CODE_REG_OFFSET 0x1c
#define HMAC_ERR_CODE_REG_RESVAL 0x0u

// Clear internal secret registers.
#define HMAC_WIPE_SECRET_REG_OFFSET 0x20
#define HMAC_WIPE_SECRET_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_KEY_FIELD_WIDTH 32
#define HMAC_KEY_MULTIREG_COUNT 32

// HMAC Secret Key
#define HMAC_KEY_0_REG_OFFSET 0x24
#define HMAC_KEY_0_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_1_REG_OFFSET 0x28
#define HMAC_KEY_1_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_2_REG_OFFSET 0x2c
#define HMAC_KEY_2_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_3_REG_OFFSET 0x30
#define HMAC_KEY_3_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_4_REG_OFFSET 0x34
#define HMAC_KEY_4_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_5_REG_OFFSET 0x38
#define HMAC_KEY_5_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_6_REG_OFFSET 0x3c
#define HMAC_KEY_6_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_7_REG_OFFSET 0x40
#define HMAC_KEY_7_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_8_REG_OFFSET 0x44
#define HMAC_KEY_8_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_9_REG_OFFSET 0x48
#define HMAC_KEY_9_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_10_REG_OFFSET 0x4c
#define HMAC_KEY_10_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_11_REG_OFFSET 0x50
#define HMAC_KEY_11_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_12_REG_OFFSET 0x54
#define HMAC_KEY_12_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_13_REG_OFFSET 0x58
#define HMAC_KEY_13_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_14_REG_OFFSET 0x5c
#define HMAC_KEY_14_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_15_REG_OFFSET 0x60
#define HMAC_KEY_15_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_16_REG_OFFSET 0x64
#define HMAC_KEY_16_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_17_REG_OFFSET 0x68
#define HMAC_KEY_17_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_18_REG_OFFSET 0x6c
#define HMAC_KEY_18_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_19_REG_OFFSET 0x70
#define HMAC_KEY_19_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_20_REG_OFFSET 0x74
#define HMAC_KEY_20_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_21_REG_OFFSET 0x78
#define HMAC_KEY_21_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_22_REG_OFFSET 0x7c
#define HMAC_KEY_22_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_23_REG_OFFSET 0x80
#define HMAC_KEY_23_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_24_REG_OFFSET 0x84
#define HMAC_KEY_24_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_25_REG_OFFSET 0x88
#define HMAC_KEY_25_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_26_REG_OFFSET 0x8c
#define HMAC_KEY_26_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_27_REG_OFFSET 0x90
#define HMAC_KEY_27_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_28_REG_OFFSET 0x94
#define HMAC_KEY_28_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_29_REG_OFFSET 0x98
#define HMAC_KEY_29_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_30_REG_OFFSET 0x9c
#define HMAC_KEY_30_REG_RESVAL 0x0u

// HMAC Secret Key
#define HMAC_KEY_31_REG_OFFSET 0xa0
#define HMAC_KEY_31_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_DIGEST_FIELD_WIDTH 32
#define HMAC_DIGEST_MULTIREG_COUNT 16

// Digest output.
#define HMAC_DIGEST_0_REG_OFFSET 0xa4
#define HMAC_DIGEST_0_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_1_REG_OFFSET 0xa8
#define HMAC_DIGEST_1_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_2_REG_OFFSET 0xac
#define HMAC_DIGEST_2_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_3_REG_OFFSET 0xb0
#define HMAC_DIGEST_3_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_4_REG_OFFSET 0xb4
#define HMAC_DIGEST_4_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_5_REG_OFFSET 0xb8
#define HMAC_DIGEST_5_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_6_REG_OFFSET 0xbc
#define HMAC_DIGEST_6_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_7_REG_OFFSET 0xc0
#define HMAC_DIGEST_7_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_8_REG_OFFSET 0xc4
#define HMAC_DIGEST_8_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_9_REG_OFFSET 0xc8
#define HMAC_DIGEST_9_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_10_REG_OFFSET 0xcc
#define HMAC_DIGEST_10_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_11_REG_OFFSET 0xd0
#define HMAC_DIGEST_11_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_12_REG_OFFSET 0xd4
#define HMAC_DIGEST_12_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_13_REG_OFFSET 0xd8
#define HMAC_DIGEST_13_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_14_REG_OFFSET 0xdc
#define HMAC_DIGEST_14_REG_RESVAL 0x0u

// Digest output.
#define HMAC_DIGEST_15_REG_OFFSET 0xe0
#define HMAC_DIGEST_15_REG_RESVAL 0x0u

// Received Message Length calculated by the HMAC in bits [31:0]
#define HMAC_MSG_LENGTH_LOWER_REG_OFFSET 0xe4
#define HMAC_MSG_LENGTH_LOWER_REG_RESVAL 0x0u

// Received Message Length calculated by the HMAC in bits [63:32]
#define HMAC_MSG_LENGTH_UPPER_REG_OFFSET 0xe8
#define HMAC_MSG_LENGTH_UPPER_REG_RESVAL 0x0u

// Memory area: Message FIFO. Any write to this window will be appended to
// the FIFO.
#define HMAC_MSG_FIFO_REG_OFFSET 0x1000
#define HMAC_MSG_FIFO_SIZE_WORDS 1024
#define HMAC_MSG_FIFO_SIZE_BYTES 4096
#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _HMAC_REG_DEFS_
// End generated register defines for hmac