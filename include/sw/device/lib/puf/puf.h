// Generated register defines for puf

#ifndef _PUF_REG_DEFS_
#define _PUF_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
static unsigned int a_challenge[4] ={0xabc9f99d,0x6c9f99d6,0xc9f99d6c,0x9f99d6cd};

uint8_t checkBit(unsigned int* registerAddress, unsigned int bit);

void wait_for_res_valid_BIT(void);

void PUF_ON(void);

void puf_get_res_of_a_cha(unsigned int challenge_input[],unsigned int response_output[]);

// Number registers for challenge
#define PUF_PARAM_NUMREGS_CHALLENGE 4

// Number registers for response
#define PUF_PARAM_NUMREGS_RESPONSE 8

// Register width
#define PUF_PARAM_REG_WIDTH 32

// Control
#define PUF_CTRL_SIGNALS_REG_OFFSET 0x0
#define PUF_CTRL_SIGNALS_REG_RESVAL 0x0u
#define PUF_CTRL_SIGNALS_ENABLE_PUF_BIT 0
#define PUF_CTRL_SIGNALS_MODE_PUF_BIT 1
#define PUF_CTRL_SIGNALS_READY_CHA_BIT 2

// The puf states
#define PUF_STATE_SIGNALS_REG_OFFSET 0x4
#define PUF_STATE_SIGNALS_REG_RESVAL 0x0u
#define PUF_STATE_SIGNALS_RESPONSE_VALID_BIT_BIT 0
#define PUF_STATE_SIGNALS_RESPONSE_DONE_2BIT_BIT 1

// data input (common parameters)
#define PUF_CHALLENGE_CHALLENGE_DATA_IN_FIELD_WIDTH 32
#define PUF_CHALLENGE_MULTIREG_COUNT 4

// data input
#define PUF_CHALLENGE_0_REG_OFFSET 0x8
#define PUF_CHALLENGE_0_REG_RESVAL 0x0u

// data input
#define PUF_CHALLENGE_1_REG_OFFSET 0xc
#define PUF_CHALLENGE_1_REG_RESVAL 0x0u

// data input
#define PUF_CHALLENGE_2_REG_OFFSET 0x10
#define PUF_CHALLENGE_2_REG_RESVAL 0x0u

// data input
#define PUF_CHALLENGE_3_REG_OFFSET 0x14
#define PUF_CHALLENGE_3_REG_RESVAL 0x0u

// result output (common parameters)
#define PUF_RESPONSE_RESPONSE_OUT_FIELD_WIDTH 32
#define PUF_RESPONSE_MULTIREG_COUNT 8

// result output
#define PUF_RESPONSE_0_REG_OFFSET 0x18
#define PUF_RESPONSE_0_REG_RESVAL 0x0u

// result output
#define PUF_RESPONSE_1_REG_OFFSET 0x1c
#define PUF_RESPONSE_1_REG_RESVAL 0x0u

// result output
#define PUF_RESPONSE_2_REG_OFFSET 0x20
#define PUF_RESPONSE_2_REG_RESVAL 0x0u

// result output
#define PUF_RESPONSE_3_REG_OFFSET 0x24
#define PUF_RESPONSE_3_REG_RESVAL 0x0u

// result output
#define PUF_RESPONSE_4_REG_OFFSET 0x28
#define PUF_RESPONSE_4_REG_RESVAL 0x0u

// result output
#define PUF_RESPONSE_5_REG_OFFSET 0x2c
#define PUF_RESPONSE_5_REG_RESVAL 0x0u

// result output
#define PUF_RESPONSE_6_REG_OFFSET 0x30
#define PUF_RESPONSE_6_REG_RESVAL 0x0u

// result output
#define PUF_RESPONSE_7_REG_OFFSET 0x34
#define PUF_RESPONSE_7_REG_RESVAL 0x0u

#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _PUF_REG_DEFS_
// End generated register defines for puf