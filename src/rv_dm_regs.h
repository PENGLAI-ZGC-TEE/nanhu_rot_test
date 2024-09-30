// Generated register defines for rv_dm

// Copyright information found in source file:
// Copyright lowRISC contributors (OpenTitan project).

// Licensing information found in source file:
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef _RV_DM_REG_DEFS_
#define _RV_DM_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
// Number of hardware threads in the system.
#define RV_DM_PARAM_NR_HARTS 1

// Number of alerts
#define RV_DM_PARAM_NUM_ALERTS 1

// Register width
#define RV_DM_PARAM_REG_WIDTH 32

// Alert Test Register
#define RV_DM_ALERT_TEST_REG_OFFSET 0x0
#define RV_DM_ALERT_TEST_REG_RESVAL 0x0u
#define RV_DM_ALERT_TEST_FATAL_FAULT_BIT 0

// Lock bit for !!LATE_DEBUG_ENABLE register.
#define RV_DM_LATE_DEBUG_ENABLE_REGWEN_REG_OFFSET 0x4
#define RV_DM_LATE_DEBUG_ENABLE_REGWEN_REG_RESVAL 0x1u
#define RV_DM_LATE_DEBUG_ENABLE_REGWEN_LATE_DEBUG_ENABLE_REGWEN_BIT 0

// Debug enable register.
#define RV_DM_LATE_DEBUG_ENABLE_REG_OFFSET 0x8
#define RV_DM_LATE_DEBUG_ENABLE_REG_RESVAL 0x69696969u

// Written by a hart whenever it enters debug mode.
#define RV_DM_HALTED_REG_OFFSET 0x100
#define RV_DM_HALTED_REG_RESVAL 0x0u
#define RV_DM_HALTED_HALTED_BIT 0

// Written by a hart to acknowledge a command.
#define RV_DM_GOING_REG_OFFSET 0x108
#define RV_DM_GOING_REG_RESVAL 0x0u
#define RV_DM_GOING_GOING_BIT 0

// Written by a hart to acknowledge a resume request.
#define RV_DM_RESUMING_REG_OFFSET 0x110
#define RV_DM_RESUMING_REG_RESVAL 0x0u
#define RV_DM_RESUMING_RESUMING_BIT 0

// An exception was triggered while the core was in debug mode.
#define RV_DM_EXCEPTION_REG_OFFSET 0x118
#define RV_DM_EXCEPTION_REG_RESVAL 0x0u
#define RV_DM_EXCEPTION_EXCEPTION_BIT 0

// A jump instruction the hart executes to begin a command.
#define RV_DM_WHERETO_REG_OFFSET 0x300
#define RV_DM_WHERETO_REG_RESVAL 0x0u

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_ABSTRACTCMD_FIELD_WIDTH 32
#define RV_DM_ABSTRACTCMD_MULTIREG_COUNT 10

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_0_REG_OFFSET 0x338
#define RV_DM_ABSTRACTCMD_0_REG_RESVAL 0x0u

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_1_REG_OFFSET 0x33c
#define RV_DM_ABSTRACTCMD_1_REG_RESVAL 0x0u

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_2_REG_OFFSET 0x340
#define RV_DM_ABSTRACTCMD_2_REG_RESVAL 0x0u

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_3_REG_OFFSET 0x344
#define RV_DM_ABSTRACTCMD_3_REG_RESVAL 0x0u

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_4_REG_OFFSET 0x348
#define RV_DM_ABSTRACTCMD_4_REG_RESVAL 0x0u

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_5_REG_OFFSET 0x34c
#define RV_DM_ABSTRACTCMD_5_REG_RESVAL 0x0u

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_6_REG_OFFSET 0x350
#define RV_DM_ABSTRACTCMD_6_REG_RESVAL 0x0u

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_7_REG_OFFSET 0x354
#define RV_DM_ABSTRACTCMD_7_REG_RESVAL 0x0u

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_8_REG_OFFSET 0x358
#define RV_DM_ABSTRACTCMD_8_REG_RESVAL 0x0u

// A ROM containing instructions for implementing abstract commands.
#define RV_DM_ABSTRACTCMD_9_REG_OFFSET 0x35c
#define RV_DM_ABSTRACTCMD_9_REG_RESVAL 0x0u

// A buffer for the debugger to write small debug mode programs.
#define RV_DM_PROGRAM_BUFFER_PROGRAM_BUFFER_FIELD_WIDTH 32
#define RV_DM_PROGRAM_BUFFER_MULTIREG_COUNT 8

// A buffer for the debugger to write small debug mode programs.
#define RV_DM_PROGRAM_BUFFER_0_REG_OFFSET 0x360
#define RV_DM_PROGRAM_BUFFER_0_REG_RESVAL 0x0u

// A buffer for the debugger to write small debug mode programs.
#define RV_DM_PROGRAM_BUFFER_1_REG_OFFSET 0x364
#define RV_DM_PROGRAM_BUFFER_1_REG_RESVAL 0x0u

// A buffer for the debugger to write small debug mode programs.
#define RV_DM_PROGRAM_BUFFER_2_REG_OFFSET 0x368
#define RV_DM_PROGRAM_BUFFER_2_REG_RESVAL 0x0u

// A buffer for the debugger to write small debug mode programs.
#define RV_DM_PROGRAM_BUFFER_3_REG_OFFSET 0x36c
#define RV_DM_PROGRAM_BUFFER_3_REG_RESVAL 0x0u

// A buffer for the debugger to write small debug mode programs.
#define RV_DM_PROGRAM_BUFFER_4_REG_OFFSET 0x370
#define RV_DM_PROGRAM_BUFFER_4_REG_RESVAL 0x0u

// A buffer for the debugger to write small debug mode programs.
#define RV_DM_PROGRAM_BUFFER_5_REG_OFFSET 0x374
#define RV_DM_PROGRAM_BUFFER_5_REG_RESVAL 0x0u

// A buffer for the debugger to write small debug mode programs.
#define RV_DM_PROGRAM_BUFFER_6_REG_OFFSET 0x378
#define RV_DM_PROGRAM_BUFFER_6_REG_RESVAL 0x0u

// A buffer for the debugger to write small debug mode programs.
#define RV_DM_PROGRAM_BUFFER_7_REG_OFFSET 0x37c
#define RV_DM_PROGRAM_BUFFER_7_REG_RESVAL 0x0u

// Message Registers for passing arguments and/or return values for abstract
// commands.
#define RV_DM_DATAADDR_DATAADDR_FIELD_WIDTH 32
#define RV_DM_DATAADDR_MULTIREG_COUNT 2

// Message Registers for passing arguments and/or return values for abstract
// commands.
#define RV_DM_DATAADDR_0_REG_OFFSET 0x380
#define RV_DM_DATAADDR_0_REG_RESVAL 0x0u

// Message Registers for passing arguments and/or return values for abstract
// commands.
#define RV_DM_DATAADDR_1_REG_OFFSET 0x384
#define RV_DM_DATAADDR_1_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_FLAGS_FIELD_WIDTH 32
#define RV_DM_FLAGS_MULTIREG_COUNT 256

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_0_REG_OFFSET 0x400
#define RV_DM_FLAGS_0_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_1_REG_OFFSET 0x404
#define RV_DM_FLAGS_1_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_2_REG_OFFSET 0x408
#define RV_DM_FLAGS_2_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_3_REG_OFFSET 0x40c
#define RV_DM_FLAGS_3_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_4_REG_OFFSET 0x410
#define RV_DM_FLAGS_4_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_5_REG_OFFSET 0x414
#define RV_DM_FLAGS_5_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_6_REG_OFFSET 0x418
#define RV_DM_FLAGS_6_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_7_REG_OFFSET 0x41c
#define RV_DM_FLAGS_7_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_8_REG_OFFSET 0x420
#define RV_DM_FLAGS_8_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_9_REG_OFFSET 0x424
#define RV_DM_FLAGS_9_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_10_REG_OFFSET 0x428
#define RV_DM_FLAGS_10_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_11_REG_OFFSET 0x42c
#define RV_DM_FLAGS_11_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_12_REG_OFFSET 0x430
#define RV_DM_FLAGS_12_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_13_REG_OFFSET 0x434
#define RV_DM_FLAGS_13_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_14_REG_OFFSET 0x438
#define RV_DM_FLAGS_14_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_15_REG_OFFSET 0x43c
#define RV_DM_FLAGS_15_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_16_REG_OFFSET 0x440
#define RV_DM_FLAGS_16_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_17_REG_OFFSET 0x444
#define RV_DM_FLAGS_17_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_18_REG_OFFSET 0x448
#define RV_DM_FLAGS_18_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_19_REG_OFFSET 0x44c
#define RV_DM_FLAGS_19_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_20_REG_OFFSET 0x450
#define RV_DM_FLAGS_20_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_21_REG_OFFSET 0x454
#define RV_DM_FLAGS_21_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_22_REG_OFFSET 0x458
#define RV_DM_FLAGS_22_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_23_REG_OFFSET 0x45c
#define RV_DM_FLAGS_23_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_24_REG_OFFSET 0x460
#define RV_DM_FLAGS_24_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_25_REG_OFFSET 0x464
#define RV_DM_FLAGS_25_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_26_REG_OFFSET 0x468
#define RV_DM_FLAGS_26_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_27_REG_OFFSET 0x46c
#define RV_DM_FLAGS_27_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_28_REG_OFFSET 0x470
#define RV_DM_FLAGS_28_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_29_REG_OFFSET 0x474
#define RV_DM_FLAGS_29_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_30_REG_OFFSET 0x478
#define RV_DM_FLAGS_30_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_31_REG_OFFSET 0x47c
#define RV_DM_FLAGS_31_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_32_REG_OFFSET 0x480
#define RV_DM_FLAGS_32_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_33_REG_OFFSET 0x484
#define RV_DM_FLAGS_33_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_34_REG_OFFSET 0x488
#define RV_DM_FLAGS_34_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_35_REG_OFFSET 0x48c
#define RV_DM_FLAGS_35_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_36_REG_OFFSET 0x490
#define RV_DM_FLAGS_36_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_37_REG_OFFSET 0x494
#define RV_DM_FLAGS_37_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_38_REG_OFFSET 0x498
#define RV_DM_FLAGS_38_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_39_REG_OFFSET 0x49c
#define RV_DM_FLAGS_39_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_40_REG_OFFSET 0x4a0
#define RV_DM_FLAGS_40_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_41_REG_OFFSET 0x4a4
#define RV_DM_FLAGS_41_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_42_REG_OFFSET 0x4a8
#define RV_DM_FLAGS_42_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_43_REG_OFFSET 0x4ac
#define RV_DM_FLAGS_43_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_44_REG_OFFSET 0x4b0
#define RV_DM_FLAGS_44_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_45_REG_OFFSET 0x4b4
#define RV_DM_FLAGS_45_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_46_REG_OFFSET 0x4b8
#define RV_DM_FLAGS_46_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_47_REG_OFFSET 0x4bc
#define RV_DM_FLAGS_47_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_48_REG_OFFSET 0x4c0
#define RV_DM_FLAGS_48_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_49_REG_OFFSET 0x4c4
#define RV_DM_FLAGS_49_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_50_REG_OFFSET 0x4c8
#define RV_DM_FLAGS_50_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_51_REG_OFFSET 0x4cc
#define RV_DM_FLAGS_51_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_52_REG_OFFSET 0x4d0
#define RV_DM_FLAGS_52_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_53_REG_OFFSET 0x4d4
#define RV_DM_FLAGS_53_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_54_REG_OFFSET 0x4d8
#define RV_DM_FLAGS_54_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_55_REG_OFFSET 0x4dc
#define RV_DM_FLAGS_55_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_56_REG_OFFSET 0x4e0
#define RV_DM_FLAGS_56_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_57_REG_OFFSET 0x4e4
#define RV_DM_FLAGS_57_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_58_REG_OFFSET 0x4e8
#define RV_DM_FLAGS_58_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_59_REG_OFFSET 0x4ec
#define RV_DM_FLAGS_59_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_60_REG_OFFSET 0x4f0
#define RV_DM_FLAGS_60_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_61_REG_OFFSET 0x4f4
#define RV_DM_FLAGS_61_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_62_REG_OFFSET 0x4f8
#define RV_DM_FLAGS_62_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_63_REG_OFFSET 0x4fc
#define RV_DM_FLAGS_63_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_64_REG_OFFSET 0x500
#define RV_DM_FLAGS_64_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_65_REG_OFFSET 0x504
#define RV_DM_FLAGS_65_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_66_REG_OFFSET 0x508
#define RV_DM_FLAGS_66_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_67_REG_OFFSET 0x50c
#define RV_DM_FLAGS_67_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_68_REG_OFFSET 0x510
#define RV_DM_FLAGS_68_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_69_REG_OFFSET 0x514
#define RV_DM_FLAGS_69_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_70_REG_OFFSET 0x518
#define RV_DM_FLAGS_70_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_71_REG_OFFSET 0x51c
#define RV_DM_FLAGS_71_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_72_REG_OFFSET 0x520
#define RV_DM_FLAGS_72_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_73_REG_OFFSET 0x524
#define RV_DM_FLAGS_73_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_74_REG_OFFSET 0x528
#define RV_DM_FLAGS_74_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_75_REG_OFFSET 0x52c
#define RV_DM_FLAGS_75_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_76_REG_OFFSET 0x530
#define RV_DM_FLAGS_76_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_77_REG_OFFSET 0x534
#define RV_DM_FLAGS_77_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_78_REG_OFFSET 0x538
#define RV_DM_FLAGS_78_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_79_REG_OFFSET 0x53c
#define RV_DM_FLAGS_79_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_80_REG_OFFSET 0x540
#define RV_DM_FLAGS_80_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_81_REG_OFFSET 0x544
#define RV_DM_FLAGS_81_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_82_REG_OFFSET 0x548
#define RV_DM_FLAGS_82_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_83_REG_OFFSET 0x54c
#define RV_DM_FLAGS_83_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_84_REG_OFFSET 0x550
#define RV_DM_FLAGS_84_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_85_REG_OFFSET 0x554
#define RV_DM_FLAGS_85_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_86_REG_OFFSET 0x558
#define RV_DM_FLAGS_86_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_87_REG_OFFSET 0x55c
#define RV_DM_FLAGS_87_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_88_REG_OFFSET 0x560
#define RV_DM_FLAGS_88_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_89_REG_OFFSET 0x564
#define RV_DM_FLAGS_89_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_90_REG_OFFSET 0x568
#define RV_DM_FLAGS_90_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_91_REG_OFFSET 0x56c
#define RV_DM_FLAGS_91_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_92_REG_OFFSET 0x570
#define RV_DM_FLAGS_92_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_93_REG_OFFSET 0x574
#define RV_DM_FLAGS_93_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_94_REG_OFFSET 0x578
#define RV_DM_FLAGS_94_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_95_REG_OFFSET 0x57c
#define RV_DM_FLAGS_95_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_96_REG_OFFSET 0x580
#define RV_DM_FLAGS_96_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_97_REG_OFFSET 0x584
#define RV_DM_FLAGS_97_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_98_REG_OFFSET 0x588
#define RV_DM_FLAGS_98_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_99_REG_OFFSET 0x58c
#define RV_DM_FLAGS_99_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_100_REG_OFFSET 0x590
#define RV_DM_FLAGS_100_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_101_REG_OFFSET 0x594
#define RV_DM_FLAGS_101_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_102_REG_OFFSET 0x598
#define RV_DM_FLAGS_102_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_103_REG_OFFSET 0x59c
#define RV_DM_FLAGS_103_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_104_REG_OFFSET 0x5a0
#define RV_DM_FLAGS_104_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_105_REG_OFFSET 0x5a4
#define RV_DM_FLAGS_105_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_106_REG_OFFSET 0x5a8
#define RV_DM_FLAGS_106_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_107_REG_OFFSET 0x5ac
#define RV_DM_FLAGS_107_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_108_REG_OFFSET 0x5b0
#define RV_DM_FLAGS_108_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_109_REG_OFFSET 0x5b4
#define RV_DM_FLAGS_109_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_110_REG_OFFSET 0x5b8
#define RV_DM_FLAGS_110_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_111_REG_OFFSET 0x5bc
#define RV_DM_FLAGS_111_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_112_REG_OFFSET 0x5c0
#define RV_DM_FLAGS_112_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_113_REG_OFFSET 0x5c4
#define RV_DM_FLAGS_113_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_114_REG_OFFSET 0x5c8
#define RV_DM_FLAGS_114_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_115_REG_OFFSET 0x5cc
#define RV_DM_FLAGS_115_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_116_REG_OFFSET 0x5d0
#define RV_DM_FLAGS_116_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_117_REG_OFFSET 0x5d4
#define RV_DM_FLAGS_117_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_118_REG_OFFSET 0x5d8
#define RV_DM_FLAGS_118_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_119_REG_OFFSET 0x5dc
#define RV_DM_FLAGS_119_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_120_REG_OFFSET 0x5e0
#define RV_DM_FLAGS_120_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_121_REG_OFFSET 0x5e4
#define RV_DM_FLAGS_121_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_122_REG_OFFSET 0x5e8
#define RV_DM_FLAGS_122_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_123_REG_OFFSET 0x5ec
#define RV_DM_FLAGS_123_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_124_REG_OFFSET 0x5f0
#define RV_DM_FLAGS_124_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_125_REG_OFFSET 0x5f4
#define RV_DM_FLAGS_125_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_126_REG_OFFSET 0x5f8
#define RV_DM_FLAGS_126_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_127_REG_OFFSET 0x5fc
#define RV_DM_FLAGS_127_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_128_REG_OFFSET 0x600
#define RV_DM_FLAGS_128_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_129_REG_OFFSET 0x604
#define RV_DM_FLAGS_129_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_130_REG_OFFSET 0x608
#define RV_DM_FLAGS_130_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_131_REG_OFFSET 0x60c
#define RV_DM_FLAGS_131_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_132_REG_OFFSET 0x610
#define RV_DM_FLAGS_132_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_133_REG_OFFSET 0x614
#define RV_DM_FLAGS_133_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_134_REG_OFFSET 0x618
#define RV_DM_FLAGS_134_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_135_REG_OFFSET 0x61c
#define RV_DM_FLAGS_135_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_136_REG_OFFSET 0x620
#define RV_DM_FLAGS_136_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_137_REG_OFFSET 0x624
#define RV_DM_FLAGS_137_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_138_REG_OFFSET 0x628
#define RV_DM_FLAGS_138_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_139_REG_OFFSET 0x62c
#define RV_DM_FLAGS_139_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_140_REG_OFFSET 0x630
#define RV_DM_FLAGS_140_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_141_REG_OFFSET 0x634
#define RV_DM_FLAGS_141_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_142_REG_OFFSET 0x638
#define RV_DM_FLAGS_142_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_143_REG_OFFSET 0x63c
#define RV_DM_FLAGS_143_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_144_REG_OFFSET 0x640
#define RV_DM_FLAGS_144_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_145_REG_OFFSET 0x644
#define RV_DM_FLAGS_145_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_146_REG_OFFSET 0x648
#define RV_DM_FLAGS_146_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_147_REG_OFFSET 0x64c
#define RV_DM_FLAGS_147_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_148_REG_OFFSET 0x650
#define RV_DM_FLAGS_148_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_149_REG_OFFSET 0x654
#define RV_DM_FLAGS_149_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_150_REG_OFFSET 0x658
#define RV_DM_FLAGS_150_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_151_REG_OFFSET 0x65c
#define RV_DM_FLAGS_151_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_152_REG_OFFSET 0x660
#define RV_DM_FLAGS_152_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_153_REG_OFFSET 0x664
#define RV_DM_FLAGS_153_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_154_REG_OFFSET 0x668
#define RV_DM_FLAGS_154_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_155_REG_OFFSET 0x66c
#define RV_DM_FLAGS_155_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_156_REG_OFFSET 0x670
#define RV_DM_FLAGS_156_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_157_REG_OFFSET 0x674
#define RV_DM_FLAGS_157_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_158_REG_OFFSET 0x678
#define RV_DM_FLAGS_158_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_159_REG_OFFSET 0x67c
#define RV_DM_FLAGS_159_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_160_REG_OFFSET 0x680
#define RV_DM_FLAGS_160_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_161_REG_OFFSET 0x684
#define RV_DM_FLAGS_161_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_162_REG_OFFSET 0x688
#define RV_DM_FLAGS_162_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_163_REG_OFFSET 0x68c
#define RV_DM_FLAGS_163_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_164_REG_OFFSET 0x690
#define RV_DM_FLAGS_164_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_165_REG_OFFSET 0x694
#define RV_DM_FLAGS_165_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_166_REG_OFFSET 0x698
#define RV_DM_FLAGS_166_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_167_REG_OFFSET 0x69c
#define RV_DM_FLAGS_167_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_168_REG_OFFSET 0x6a0
#define RV_DM_FLAGS_168_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_169_REG_OFFSET 0x6a4
#define RV_DM_FLAGS_169_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_170_REG_OFFSET 0x6a8
#define RV_DM_FLAGS_170_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_171_REG_OFFSET 0x6ac
#define RV_DM_FLAGS_171_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_172_REG_OFFSET 0x6b0
#define RV_DM_FLAGS_172_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_173_REG_OFFSET 0x6b4
#define RV_DM_FLAGS_173_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_174_REG_OFFSET 0x6b8
#define RV_DM_FLAGS_174_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_175_REG_OFFSET 0x6bc
#define RV_DM_FLAGS_175_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_176_REG_OFFSET 0x6c0
#define RV_DM_FLAGS_176_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_177_REG_OFFSET 0x6c4
#define RV_DM_FLAGS_177_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_178_REG_OFFSET 0x6c8
#define RV_DM_FLAGS_178_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_179_REG_OFFSET 0x6cc
#define RV_DM_FLAGS_179_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_180_REG_OFFSET 0x6d0
#define RV_DM_FLAGS_180_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_181_REG_OFFSET 0x6d4
#define RV_DM_FLAGS_181_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_182_REG_OFFSET 0x6d8
#define RV_DM_FLAGS_182_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_183_REG_OFFSET 0x6dc
#define RV_DM_FLAGS_183_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_184_REG_OFFSET 0x6e0
#define RV_DM_FLAGS_184_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_185_REG_OFFSET 0x6e4
#define RV_DM_FLAGS_185_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_186_REG_OFFSET 0x6e8
#define RV_DM_FLAGS_186_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_187_REG_OFFSET 0x6ec
#define RV_DM_FLAGS_187_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_188_REG_OFFSET 0x6f0
#define RV_DM_FLAGS_188_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_189_REG_OFFSET 0x6f4
#define RV_DM_FLAGS_189_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_190_REG_OFFSET 0x6f8
#define RV_DM_FLAGS_190_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_191_REG_OFFSET 0x6fc
#define RV_DM_FLAGS_191_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_192_REG_OFFSET 0x700
#define RV_DM_FLAGS_192_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_193_REG_OFFSET 0x704
#define RV_DM_FLAGS_193_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_194_REG_OFFSET 0x708
#define RV_DM_FLAGS_194_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_195_REG_OFFSET 0x70c
#define RV_DM_FLAGS_195_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_196_REG_OFFSET 0x710
#define RV_DM_FLAGS_196_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_197_REG_OFFSET 0x714
#define RV_DM_FLAGS_197_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_198_REG_OFFSET 0x718
#define RV_DM_FLAGS_198_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_199_REG_OFFSET 0x71c
#define RV_DM_FLAGS_199_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_200_REG_OFFSET 0x720
#define RV_DM_FLAGS_200_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_201_REG_OFFSET 0x724
#define RV_DM_FLAGS_201_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_202_REG_OFFSET 0x728
#define RV_DM_FLAGS_202_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_203_REG_OFFSET 0x72c
#define RV_DM_FLAGS_203_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_204_REG_OFFSET 0x730
#define RV_DM_FLAGS_204_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_205_REG_OFFSET 0x734
#define RV_DM_FLAGS_205_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_206_REG_OFFSET 0x738
#define RV_DM_FLAGS_206_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_207_REG_OFFSET 0x73c
#define RV_DM_FLAGS_207_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_208_REG_OFFSET 0x740
#define RV_DM_FLAGS_208_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_209_REG_OFFSET 0x744
#define RV_DM_FLAGS_209_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_210_REG_OFFSET 0x748
#define RV_DM_FLAGS_210_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_211_REG_OFFSET 0x74c
#define RV_DM_FLAGS_211_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_212_REG_OFFSET 0x750
#define RV_DM_FLAGS_212_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_213_REG_OFFSET 0x754
#define RV_DM_FLAGS_213_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_214_REG_OFFSET 0x758
#define RV_DM_FLAGS_214_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_215_REG_OFFSET 0x75c
#define RV_DM_FLAGS_215_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_216_REG_OFFSET 0x760
#define RV_DM_FLAGS_216_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_217_REG_OFFSET 0x764
#define RV_DM_FLAGS_217_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_218_REG_OFFSET 0x768
#define RV_DM_FLAGS_218_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_219_REG_OFFSET 0x76c
#define RV_DM_FLAGS_219_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_220_REG_OFFSET 0x770
#define RV_DM_FLAGS_220_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_221_REG_OFFSET 0x774
#define RV_DM_FLAGS_221_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_222_REG_OFFSET 0x778
#define RV_DM_FLAGS_222_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_223_REG_OFFSET 0x77c
#define RV_DM_FLAGS_223_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_224_REG_OFFSET 0x780
#define RV_DM_FLAGS_224_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_225_REG_OFFSET 0x784
#define RV_DM_FLAGS_225_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_226_REG_OFFSET 0x788
#define RV_DM_FLAGS_226_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_227_REG_OFFSET 0x78c
#define RV_DM_FLAGS_227_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_228_REG_OFFSET 0x790
#define RV_DM_FLAGS_228_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_229_REG_OFFSET 0x794
#define RV_DM_FLAGS_229_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_230_REG_OFFSET 0x798
#define RV_DM_FLAGS_230_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_231_REG_OFFSET 0x79c
#define RV_DM_FLAGS_231_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_232_REG_OFFSET 0x7a0
#define RV_DM_FLAGS_232_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_233_REG_OFFSET 0x7a4
#define RV_DM_FLAGS_233_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_234_REG_OFFSET 0x7a8
#define RV_DM_FLAGS_234_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_235_REG_OFFSET 0x7ac
#define RV_DM_FLAGS_235_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_236_REG_OFFSET 0x7b0
#define RV_DM_FLAGS_236_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_237_REG_OFFSET 0x7b4
#define RV_DM_FLAGS_237_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_238_REG_OFFSET 0x7b8
#define RV_DM_FLAGS_238_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_239_REG_OFFSET 0x7bc
#define RV_DM_FLAGS_239_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_240_REG_OFFSET 0x7c0
#define RV_DM_FLAGS_240_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_241_REG_OFFSET 0x7c4
#define RV_DM_FLAGS_241_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_242_REG_OFFSET 0x7c8
#define RV_DM_FLAGS_242_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_243_REG_OFFSET 0x7cc
#define RV_DM_FLAGS_243_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_244_REG_OFFSET 0x7d0
#define RV_DM_FLAGS_244_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_245_REG_OFFSET 0x7d4
#define RV_DM_FLAGS_245_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_246_REG_OFFSET 0x7d8
#define RV_DM_FLAGS_246_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_247_REG_OFFSET 0x7dc
#define RV_DM_FLAGS_247_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_248_REG_OFFSET 0x7e0
#define RV_DM_FLAGS_248_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_249_REG_OFFSET 0x7e4
#define RV_DM_FLAGS_249_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_250_REG_OFFSET 0x7e8
#define RV_DM_FLAGS_250_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_251_REG_OFFSET 0x7ec
#define RV_DM_FLAGS_251_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_252_REG_OFFSET 0x7f0
#define RV_DM_FLAGS_252_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_253_REG_OFFSET 0x7f4
#define RV_DM_FLAGS_253_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_254_REG_OFFSET 0x7f8
#define RV_DM_FLAGS_254_REG_RESVAL 0x0u

// Flags indicating what a hart in debug mode should do.
#define RV_DM_FLAGS_255_REG_OFFSET 0x7fc
#define RV_DM_FLAGS_255_REG_RESVAL 0x0u

// Memory area: Access window into the debug ROM.
#define RV_DM_ROM_REG_OFFSET 0x800
#define RV_DM_ROM_SIZE_WORDS 512
#define RV_DM_ROM_SIZE_BYTES 2048
#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _RV_DM_REG_DEFS_
// End generated register defines for rv_dm