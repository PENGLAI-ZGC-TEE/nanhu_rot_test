// Generated register defines for sm3

#ifndef _SM3_REG_DEFS_
#define _SM3_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
// Number registers for output data
#define SM3_PARAM_RESULT_DATA 8

// Register width
#define SM3_PARAM_REG_WIDTH 32

// Control
#define SM3_CTRL_SIGNALS_REG_OFFSET 0x0
#define SM3_CTRL_SIGNALS_REG_RESVAL 0x0u
#define SM3_CTRL_SIGNALS_MSG_INPT_LST_BIT 0
#define SM3_CTRL_SIGNALS_MSG_INPT_VLD_BYTE_0_BIT 1
#define SM3_CTRL_SIGNALS_MSG_INPT_VLD_BYTE_1_BIT 2
#define SM3_CTRL_SIGNALS_MSG_INPT_VLD_BYTE_2_BIT 3
#define SM3_CTRL_SIGNALS_MSG_INPT_VLD_BYTE_3_BIT 4

// The sm3 states
#define SM3_STATE_SIGNALS_REG_OFFSET 0x4
#define SM3_STATE_SIGNALS_REG_RESVAL 0x0u
#define SM3_STATE_SIGNALS_CMPRSS_OTPT_VLD_BIT 0
#define SM3_STATE_SIGNALS_MSG_INPT_RDY_BIT 1

// input message.
#define SM3_MESSAGE_IN_REG_OFFSET 0x8
#define SM3_MESSAGE_IN_REG_RESVAL 0x0u

// result output (common parameters)
#define SM3_RESULT_OUT_RESULT_OUT_FIELD_WIDTH 32
#define SM3_RESULT_OUT_MULTIREG_COUNT 8

// result output
#define SM3_RESULT_OUT_0_REG_OFFSET 0xc
#define SM3_RESULT_OUT_0_REG_RESVAL 0x0u

// result output
#define SM3_RESULT_OUT_1_REG_OFFSET 0x10
#define SM3_RESULT_OUT_1_REG_RESVAL 0x0u

// result output
#define SM3_RESULT_OUT_2_REG_OFFSET 0x14
#define SM3_RESULT_OUT_2_REG_RESVAL 0x0u

// result output
#define SM3_RESULT_OUT_3_REG_OFFSET 0x18
#define SM3_RESULT_OUT_3_REG_RESVAL 0x0u

// result output
#define SM3_RESULT_OUT_4_REG_OFFSET 0x1c
#define SM3_RESULT_OUT_4_REG_RESVAL 0x0u

// result output
#define SM3_RESULT_OUT_5_REG_OFFSET 0x20
#define SM3_RESULT_OUT_5_REG_RESVAL 0x0u

// result output
#define SM3_RESULT_OUT_6_REG_OFFSET 0x24
#define SM3_RESULT_OUT_6_REG_RESVAL 0x0u

// result output
#define SM3_RESULT_OUT_7_REG_OFFSET 0x28
#define SM3_RESULT_OUT_7_REG_RESVAL 0x0u

#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _SM3_REG_DEFS_
// End generated register defines for sm3