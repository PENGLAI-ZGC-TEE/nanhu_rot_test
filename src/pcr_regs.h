// Generated register defines for pcr

#ifndef _PCR_REG_DEFS_
#define _PCR_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
// Register width
#define PCR_PARAM_REG_WIDTH 32

// PCR Control Register
#define PCR_CTRL_REG_OFFSET 0x0
#define PCR_CTRL_REG_RESVAL 0x0u
#define PCR_CTRL_SELECT_MASK 0x1fu
#define PCR_CTRL_SELECT_OFFSET 0
#define PCR_CTRL_SELECT_FIELD \
  ((bitfield_field32_t) { .mask = PCR_CTRL_SELECT_MASK, .index = PCR_CTRL_SELECT_OFFSET })
#define PCR_CTRL_WR_EN_BIT 5
#define PCR_CTRL_RD_EN_BIT 6

// PCR Write Register (common parameters)
#define PCR_PCR_WR_DATA_FIELD_WIDTH 32
#define PCR_PCR_WR_MULTIREG_COUNT 8

// PCR Write Register
#define PCR_PCR_WR_0_REG_OFFSET 0x4
#define PCR_PCR_WR_0_REG_RESVAL 0x0u

// PCR Write Register
#define PCR_PCR_WR_1_REG_OFFSET 0x8
#define PCR_PCR_WR_1_REG_RESVAL 0x0u

// PCR Write Register
#define PCR_PCR_WR_2_REG_OFFSET 0xc
#define PCR_PCR_WR_2_REG_RESVAL 0x0u

// PCR Write Register
#define PCR_PCR_WR_3_REG_OFFSET 0x10
#define PCR_PCR_WR_3_REG_RESVAL 0x0u

// PCR Write Register
#define PCR_PCR_WR_4_REG_OFFSET 0x14
#define PCR_PCR_WR_4_REG_RESVAL 0x0u

// PCR Write Register
#define PCR_PCR_WR_5_REG_OFFSET 0x18
#define PCR_PCR_WR_5_REG_RESVAL 0x0u

// PCR Write Register
#define PCR_PCR_WR_6_REG_OFFSET 0x1c
#define PCR_PCR_WR_6_REG_RESVAL 0x0u

// PCR Write Register
#define PCR_PCR_WR_7_REG_OFFSET 0x20
#define PCR_PCR_WR_7_REG_RESVAL 0x0u

// PCR Read Register (common parameters)
#define PCR_PCR_RD_DATA_FIELD_WIDTH 32
#define PCR_PCR_RD_MULTIREG_COUNT 8

// PCR Read Register
#define PCR_PCR_RD_0_REG_OFFSET 0x24
#define PCR_PCR_RD_0_REG_RESVAL 0x0u

// PCR Read Register
#define PCR_PCR_RD_1_REG_OFFSET 0x28
#define PCR_PCR_RD_1_REG_RESVAL 0x0u

// PCR Read Register
#define PCR_PCR_RD_2_REG_OFFSET 0x2c
#define PCR_PCR_RD_2_REG_RESVAL 0x0u

// PCR Read Register
#define PCR_PCR_RD_3_REG_OFFSET 0x30
#define PCR_PCR_RD_3_REG_RESVAL 0x0u

// PCR Read Register
#define PCR_PCR_RD_4_REG_OFFSET 0x34
#define PCR_PCR_RD_4_REG_RESVAL 0x0u

// PCR Read Register
#define PCR_PCR_RD_5_REG_OFFSET 0x38
#define PCR_PCR_RD_5_REG_RESVAL 0x0u

// PCR Read Register
#define PCR_PCR_RD_6_REG_OFFSET 0x3c
#define PCR_PCR_RD_6_REG_RESVAL 0x0u

// PCR Read Register
#define PCR_PCR_RD_7_REG_OFFSET 0x40
#define PCR_PCR_RD_7_REG_RESVAL 0x0u

#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _PCR_REG_DEFS_
// End generated register defines for pcr