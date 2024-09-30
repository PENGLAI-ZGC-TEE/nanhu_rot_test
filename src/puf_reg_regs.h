// Generated register defines for puf_reg

#ifndef _PUF_REG_REG_DEFS_
#define _PUF_REG_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
// Register width
#define PUF_REG_PARAM_REG_WIDTH 32

// puf_reg Control Register
#define PUF_REG_CTRL_REG_OFFSET 0x0
#define PUF_REG_CTRL_REG_RESVAL 0x0u
#define PUF_REG_CTRL_SELECT_MASK 0x1fu
#define PUF_REG_CTRL_SELECT_OFFSET 0
#define PUF_REG_CTRL_SELECT_FIELD \
  ((bitfield_field32_t) { .mask = PUF_REG_CTRL_SELECT_MASK, .index = PUF_REG_CTRL_SELECT_OFFSET })
#define PUF_REG_CTRL_WR_EN_BIT 5
#define PUF_REG_CTRL_RD_EN_BIT 6

// puf_reg Write Register (common parameters)
#define PUF_REG_PUF_REG_WR_DATA_FIELD_WIDTH 32
#define PUF_REG_PUF_REG_WR_MULTIREG_COUNT 8

// puf_reg Write Register
#define PUF_REG_PUF_REG_WR_0_REG_OFFSET 0x4
#define PUF_REG_PUF_REG_WR_0_REG_RESVAL 0x0u

// puf_reg Write Register
#define PUF_REG_PUF_REG_WR_1_REG_OFFSET 0x8
#define PUF_REG_PUF_REG_WR_1_REG_RESVAL 0x0u

// puf_reg Write Register
#define PUF_REG_PUF_REG_WR_2_REG_OFFSET 0xc
#define PUF_REG_PUF_REG_WR_2_REG_RESVAL 0x0u

// puf_reg Write Register
#define PUF_REG_PUF_REG_WR_3_REG_OFFSET 0x10
#define PUF_REG_PUF_REG_WR_3_REG_RESVAL 0x0u

// puf_reg Write Register
#define PUF_REG_PUF_REG_WR_4_REG_OFFSET 0x14
#define PUF_REG_PUF_REG_WR_4_REG_RESVAL 0x0u

// puf_reg Write Register
#define PUF_REG_PUF_REG_WR_5_REG_OFFSET 0x18
#define PUF_REG_PUF_REG_WR_5_REG_RESVAL 0x0u

// puf_reg Write Register
#define PUF_REG_PUF_REG_WR_6_REG_OFFSET 0x1c
#define PUF_REG_PUF_REG_WR_6_REG_RESVAL 0x0u

// puf_reg Write Register
#define PUF_REG_PUF_REG_WR_7_REG_OFFSET 0x20
#define PUF_REG_PUF_REG_WR_7_REG_RESVAL 0x0u

// puf_reg Read Register (common parameters)
#define PUF_REG_PUF_REG_RD_DATA_FIELD_WIDTH 32
#define PUF_REG_PUF_REG_RD_MULTIREG_COUNT 8

// puf_reg Read Register
#define PUF_REG_PUF_REG_RD_0_REG_OFFSET 0x24
#define PUF_REG_PUF_REG_RD_0_REG_RESVAL 0x0u

// puf_reg Read Register
#define PUF_REG_PUF_REG_RD_1_REG_OFFSET 0x28
#define PUF_REG_PUF_REG_RD_1_REG_RESVAL 0x0u

// puf_reg Read Register
#define PUF_REG_PUF_REG_RD_2_REG_OFFSET 0x2c
#define PUF_REG_PUF_REG_RD_2_REG_RESVAL 0x0u

// puf_reg Read Register
#define PUF_REG_PUF_REG_RD_3_REG_OFFSET 0x30
#define PUF_REG_PUF_REG_RD_3_REG_RESVAL 0x0u

// puf_reg Read Register
#define PUF_REG_PUF_REG_RD_4_REG_OFFSET 0x34
#define PUF_REG_PUF_REG_RD_4_REG_RESVAL 0x0u

// puf_reg Read Register
#define PUF_REG_PUF_REG_RD_5_REG_OFFSET 0x38
#define PUF_REG_PUF_REG_RD_5_REG_RESVAL 0x0u

// puf_reg Read Register
#define PUF_REG_PUF_REG_RD_6_REG_OFFSET 0x3c
#define PUF_REG_PUF_REG_RD_6_REG_RESVAL 0x0u

// puf_reg Read Register
#define PUF_REG_PUF_REG_RD_7_REG_OFFSET 0x40
#define PUF_REG_PUF_REG_RD_7_REG_RESVAL 0x0u

#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _PUF_REG_REG_DEFS_
// End generated register defines for puf_reg