// Generated register defines for rv_plic

// Copyright information found in source file:
// Copyright lowRISC contributors.

// Licensing information found in source file:
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef _RV_PLIC_REG_DEFS_
#define _RV_PLIC_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
// Number of interrupt sources
#define RV_PLIC_PARAM_NUM_SRC 17

// Number of Targets (Harts)
#define RV_PLIC_PARAM_NUM_TARGET 1

// Width of priority signals
#define RV_PLIC_PARAM_PRIO_WIDTH 3

// Number of alerts
#define RV_PLIC_PARAM_NUM_ALERTS 1

// Register width
#define RV_PLIC_PARAM_REG_WIDTH 64

#define RV_PLIC_PRIO0_PRIO0_MASK 0x3u

#define RV_PLIC_PRIO0_REG_OFFSET 0x4

// Interrupt Source 1 Priority
#define RV_PLIC_PRIO1_REG_OFFSET 0x4
#define RV_PLIC_PRIO1_REG_RESVAL 0x0u
#define RV_PLIC_PRIO1_PRIO1_MASK 0x3u
#define RV_PLIC_PRIO1_PRIO1_OFFSET 0
#define RV_PLIC_PRIO1_PRIO1_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO1_PRIO1_MASK, .index = RV_PLIC_PRIO1_PRIO1_OFFSET })

// Interrupt Source 2 Priority
#define RV_PLIC_PRIO2_REG_OFFSET 0x8
#define RV_PLIC_PRIO2_REG_RESVAL 0x0u
#define RV_PLIC_PRIO2_PRIO2_MASK 0x3u
#define RV_PLIC_PRIO2_PRIO2_OFFSET 0
#define RV_PLIC_PRIO2_PRIO2_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO2_PRIO2_MASK, .index = RV_PLIC_PRIO2_PRIO2_OFFSET })

// Interrupt Source 3 Priority
#define RV_PLIC_PRIO3_REG_OFFSET 0xc
#define RV_PLIC_PRIO3_REG_RESVAL 0x0u
#define RV_PLIC_PRIO3_PRIO3_MASK 0x3u
#define RV_PLIC_PRIO3_PRIO3_OFFSET 0
#define RV_PLIC_PRIO3_PRIO3_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO3_PRIO3_MASK, .index = RV_PLIC_PRIO3_PRIO3_OFFSET })

// Interrupt Source 4 Priority
#define RV_PLIC_PRIO4_REG_OFFSET 0x10
#define RV_PLIC_PRIO4_REG_RESVAL 0x0u
#define RV_PLIC_PRIO4_PRIO4_MASK 0x3u
#define RV_PLIC_PRIO4_PRIO4_OFFSET 0
#define RV_PLIC_PRIO4_PRIO4_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO4_PRIO4_MASK, .index = RV_PLIC_PRIO4_PRIO4_OFFSET })

// Interrupt Source 5 Priority
#define RV_PLIC_PRIO5_REG_OFFSET 0x14
#define RV_PLIC_PRIO5_REG_RESVAL 0x0u
#define RV_PLIC_PRIO5_PRIO5_MASK 0x3u
#define RV_PLIC_PRIO5_PRIO5_OFFSET 0
#define RV_PLIC_PRIO5_PRIO5_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO5_PRIO5_MASK, .index = RV_PLIC_PRIO5_PRIO5_OFFSET })

// Interrupt Source 6 Priority
#define RV_PLIC_PRIO6_REG_OFFSET 0x18
#define RV_PLIC_PRIO6_REG_RESVAL 0x0u
#define RV_PLIC_PRIO6_PRIO6_MASK 0x3u
#define RV_PLIC_PRIO6_PRIO6_OFFSET 0
#define RV_PLIC_PRIO6_PRIO6_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO6_PRIO6_MASK, .index = RV_PLIC_PRIO6_PRIO6_OFFSET })

// Interrupt Source 7 Priority
#define RV_PLIC_PRIO7_REG_OFFSET 0x1c
#define RV_PLIC_PRIO7_REG_RESVAL 0x0u
#define RV_PLIC_PRIO7_PRIO7_MASK 0x3u
#define RV_PLIC_PRIO7_PRIO7_OFFSET 0
#define RV_PLIC_PRIO7_PRIO7_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO7_PRIO7_MASK, .index = RV_PLIC_PRIO7_PRIO7_OFFSET })

// Interrupt Source 8 Priority
#define RV_PLIC_PRIO8_REG_OFFSET 0x20
#define RV_PLIC_PRIO8_REG_RESVAL 0x0u
#define RV_PLIC_PRIO8_PRIO8_MASK 0x3u
#define RV_PLIC_PRIO8_PRIO8_OFFSET 0
#define RV_PLIC_PRIO8_PRIO8_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO8_PRIO8_MASK, .index = RV_PLIC_PRIO8_PRIO8_OFFSET })

// Interrupt Source 9 Priority
#define RV_PLIC_PRIO9_REG_OFFSET 0x24
#define RV_PLIC_PRIO9_REG_RESVAL 0x0u
#define RV_PLIC_PRIO9_PRIO9_MASK 0x3u
#define RV_PLIC_PRIO9_PRIO9_OFFSET 0
#define RV_PLIC_PRIO9_PRIO9_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO9_PRIO9_MASK, .index = RV_PLIC_PRIO9_PRIO9_OFFSET })

// Interrupt Source 10 Priority
#define RV_PLIC_PRIO10_REG_OFFSET 0x28
#define RV_PLIC_PRIO10_REG_RESVAL 0x0u
#define RV_PLIC_PRIO10_PRIO10_MASK 0x3u
#define RV_PLIC_PRIO10_PRIO10_OFFSET 0
#define RV_PLIC_PRIO10_PRIO10_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO10_PRIO10_MASK, .index = RV_PLIC_PRIO10_PRIO10_OFFSET })

// Interrupt Source 11 Priority
#define RV_PLIC_PRIO11_REG_OFFSET 0x2c
#define RV_PLIC_PRIO11_REG_RESVAL 0x0u
#define RV_PLIC_PRIO11_PRIO11_MASK 0x3u
#define RV_PLIC_PRIO11_PRIO11_OFFSET 0
#define RV_PLIC_PRIO11_PRIO11_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO11_PRIO11_MASK, .index = RV_PLIC_PRIO11_PRIO11_OFFSET })

// Interrupt Source 12 Priority
#define RV_PLIC_PRIO12_REG_OFFSET 0x30
#define RV_PLIC_PRIO12_REG_RESVAL 0x0u
#define RV_PLIC_PRIO12_PRIO12_MASK 0x3u
#define RV_PLIC_PRIO12_PRIO12_OFFSET 0
#define RV_PLIC_PRIO12_PRIO12_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO12_PRIO12_MASK, .index = RV_PLIC_PRIO12_PRIO12_OFFSET })

// Interrupt Source 13 Priority
#define RV_PLIC_PRIO13_REG_OFFSET 0x34
#define RV_PLIC_PRIO13_REG_RESVAL 0x0u
#define RV_PLIC_PRIO13_PRIO13_MASK 0x3u
#define RV_PLIC_PRIO13_PRIO13_OFFSET 0
#define RV_PLIC_PRIO13_PRIO13_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO13_PRIO13_MASK, .index = RV_PLIC_PRIO13_PRIO13_OFFSET })

// Interrupt Source 14 Priority
#define RV_PLIC_PRIO14_REG_OFFSET 0x38
#define RV_PLIC_PRIO14_REG_RESVAL 0x0u
#define RV_PLIC_PRIO14_PRIO14_MASK 0x3u
#define RV_PLIC_PRIO14_PRIO14_OFFSET 0
#define RV_PLIC_PRIO14_PRIO14_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO14_PRIO14_MASK, .index = RV_PLIC_PRIO14_PRIO14_OFFSET })

// Interrupt Source 15 Priority
#define RV_PLIC_PRIO15_REG_OFFSET 0x3c
#define RV_PLIC_PRIO15_REG_RESVAL 0x0u
#define RV_PLIC_PRIO15_PRIO15_MASK 0x3u
#define RV_PLIC_PRIO15_PRIO15_OFFSET 0
#define RV_PLIC_PRIO15_PRIO15_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO15_PRIO15_MASK, .index = RV_PLIC_PRIO15_PRIO15_OFFSET })

// Interrupt Source 16 Priority
#define RV_PLIC_PRIO16_REG_OFFSET 0x40
#define RV_PLIC_PRIO16_REG_RESVAL 0x0u
#define RV_PLIC_PRIO16_PRIO16_MASK 0x3u
#define RV_PLIC_PRIO16_PRIO16_OFFSET 0
#define RV_PLIC_PRIO16_PRIO16_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO16_PRIO16_MASK, .index = RV_PLIC_PRIO16_PRIO16_OFFSET })

// Interrupt Source 17 Priority
#define RV_PLIC_PRIO17_REG_OFFSET 0x44
#define RV_PLIC_PRIO17_REG_RESVAL 0x0u
#define RV_PLIC_PRIO17_PRIO17_MASK 0x3u
#define RV_PLIC_PRIO17_PRIO17_OFFSET 0
#define RV_PLIC_PRIO17_PRIO17_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_PRIO17_PRIO17_MASK, .index = RV_PLIC_PRIO17_PRIO17_OFFSET })

// // Interrupt Source 18 Priority
// #define RV_PLIC_PRIO18_REG_OFFSET 0x48
// #define RV_PLIC_PRIO18_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO18_PRIO18_MASK 0x3u
// #define RV_PLIC_PRIO18_PRIO18_OFFSET 0
// #define RV_PLIC_PRIO18_PRIO18_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO18_PRIO18_MASK, .index = RV_PLIC_PRIO18_PRIO18_OFFSET })

// // Interrupt Source 19 Priority
// #define RV_PLIC_PRIO19_REG_OFFSET 0x4c
// #define RV_PLIC_PRIO19_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO19_PRIO19_MASK 0x3u
// #define RV_PLIC_PRIO19_PRIO19_OFFSET 0
// #define RV_PLIC_PRIO19_PRIO19_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO19_PRIO19_MASK, .index = RV_PLIC_PRIO19_PRIO19_OFFSET })

// // Interrupt Source 20 Priority
// #define RV_PLIC_PRIO20_REG_OFFSET 0x50
// #define RV_PLIC_PRIO20_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO20_PRIO20_MASK 0x3u
// #define RV_PLIC_PRIO20_PRIO20_OFFSET 0
// #define RV_PLIC_PRIO20_PRIO20_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO20_PRIO20_MASK, .index = RV_PLIC_PRIO20_PRIO20_OFFSET })

// // Interrupt Source 21 Priority
// #define RV_PLIC_PRIO21_REG_OFFSET 0x54
// #define RV_PLIC_PRIO21_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO21_PRIO21_MASK 0x3u
// #define RV_PLIC_PRIO21_PRIO21_OFFSET 0
// #define RV_PLIC_PRIO21_PRIO21_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO21_PRIO21_MASK, .index = RV_PLIC_PRIO21_PRIO21_OFFSET })

// // Interrupt Source 22 Priority
// #define RV_PLIC_PRIO22_REG_OFFSET 0x58
// #define RV_PLIC_PRIO22_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO22_PRIO22_MASK 0x3u
// #define RV_PLIC_PRIO22_PRIO22_OFFSET 0
// #define RV_PLIC_PRIO22_PRIO22_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO22_PRIO22_MASK, .index = RV_PLIC_PRIO22_PRIO22_OFFSET })

// // Interrupt Source 23 Priority
// #define RV_PLIC_PRIO23_REG_OFFSET 0x5c
// #define RV_PLIC_PRIO23_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO23_PRIO23_MASK 0x3u
// #define RV_PLIC_PRIO23_PRIO23_OFFSET 0
// #define RV_PLIC_PRIO23_PRIO23_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO23_PRIO23_MASK, .index = RV_PLIC_PRIO23_PRIO23_OFFSET })

// // Interrupt Source 24 Priority
// #define RV_PLIC_PRIO24_REG_OFFSET 0x60
// #define RV_PLIC_PRIO24_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO24_PRIO24_MASK 0x3u
// #define RV_PLIC_PRIO24_PRIO24_OFFSET 0
// #define RV_PLIC_PRIO24_PRIO24_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO24_PRIO24_MASK, .index = RV_PLIC_PRIO24_PRIO24_OFFSET })

// // Interrupt Source 25 Priority
// #define RV_PLIC_PRIO25_REG_OFFSET 0x64
// #define RV_PLIC_PRIO25_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO25_PRIO25_MASK 0x3u
// #define RV_PLIC_PRIO25_PRIO25_OFFSET 0
// #define RV_PLIC_PRIO25_PRIO25_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO25_PRIO25_MASK, .index = RV_PLIC_PRIO25_PRIO25_OFFSET })

// // Interrupt Source 26 Priority
// #define RV_PLIC_PRIO26_REG_OFFSET 0x68
// #define RV_PLIC_PRIO26_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO26_PRIO26_MASK 0x3u
// #define RV_PLIC_PRIO26_PRIO26_OFFSET 0
// #define RV_PLIC_PRIO26_PRIO26_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO26_PRIO26_MASK, .index = RV_PLIC_PRIO26_PRIO26_OFFSET })

// // Interrupt Source 27 Priority
// #define RV_PLIC_PRIO27_REG_OFFSET 0x6c
// #define RV_PLIC_PRIO27_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO27_PRIO27_MASK 0x3u
// #define RV_PLIC_PRIO27_PRIO27_OFFSET 0
// #define RV_PLIC_PRIO27_PRIO27_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO27_PRIO27_MASK, .index = RV_PLIC_PRIO27_PRIO27_OFFSET })

// // Interrupt Source 28 Priority
// #define RV_PLIC_PRIO28_REG_OFFSET 0x70
// #define RV_PLIC_PRIO28_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO28_PRIO28_MASK 0x3u
// #define RV_PLIC_PRIO28_PRIO28_OFFSET 0
// #define RV_PLIC_PRIO28_PRIO28_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO28_PRIO28_MASK, .index = RV_PLIC_PRIO28_PRIO28_OFFSET })

// // Interrupt Source 29 Priority
// #define RV_PLIC_PRIO29_REG_OFFSET 0x74
// #define RV_PLIC_PRIO29_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO29_PRIO29_MASK 0x3u
// #define RV_PLIC_PRIO29_PRIO29_OFFSET 0
// #define RV_PLIC_PRIO29_PRIO29_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO29_PRIO29_MASK, .index = RV_PLIC_PRIO29_PRIO29_OFFSET })

// // Interrupt Source 30 Priority
// #define RV_PLIC_PRIO30_REG_OFFSET 0x78
// #define RV_PLIC_PRIO30_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO30_PRIO30_MASK 0x3u
// #define RV_PLIC_PRIO30_PRIO30_OFFSET 0
// #define RV_PLIC_PRIO30_PRIO30_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO30_PRIO30_MASK, .index = RV_PLIC_PRIO30_PRIO30_OFFSET })

// // Interrupt Source 31 Priority
// #define RV_PLIC_PRIO31_REG_OFFSET 0x7c
// #define RV_PLIC_PRIO31_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO31_PRIO31_MASK 0x3u
// #define RV_PLIC_PRIO31_PRIO31_OFFSET 0
// #define RV_PLIC_PRIO31_PRIO31_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO31_PRIO31_MASK, .index = RV_PLIC_PRIO31_PRIO31_OFFSET })

// // Interrupt Source 32 Priority
// #define RV_PLIC_PRIO32_REG_OFFSET 0x80
// #define RV_PLIC_PRIO32_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO32_PRIO32_MASK 0x3u
// #define RV_PLIC_PRIO32_PRIO32_OFFSET 0
// #define RV_PLIC_PRIO32_PRIO32_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO32_PRIO32_MASK, .index = RV_PLIC_PRIO32_PRIO32_OFFSET })

// // Interrupt Source 33 Priority
// #define RV_PLIC_PRIO33_REG_OFFSET 0x84
// #define RV_PLIC_PRIO33_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO33_PRIO33_MASK 0x3u
// #define RV_PLIC_PRIO33_PRIO33_OFFSET 0
// #define RV_PLIC_PRIO33_PRIO33_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO33_PRIO33_MASK, .index = RV_PLIC_PRIO33_PRIO33_OFFSET })

// // Interrupt Source 34 Priority
// #define RV_PLIC_PRIO34_REG_OFFSET 0x88
// #define RV_PLIC_PRIO34_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO34_PRIO34_MASK 0x3u
// #define RV_PLIC_PRIO34_PRIO34_OFFSET 0
// #define RV_PLIC_PRIO34_PRIO34_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO34_PRIO34_MASK, .index = RV_PLIC_PRIO34_PRIO34_OFFSET })

// // Interrupt Source 35 Priority
// #define RV_PLIC_PRIO35_REG_OFFSET 0x8c
// #define RV_PLIC_PRIO35_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO35_PRIO35_MASK 0x3u
// #define RV_PLIC_PRIO35_PRIO35_OFFSET 0
// #define RV_PLIC_PRIO35_PRIO35_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO35_PRIO35_MASK, .index = RV_PLIC_PRIO35_PRIO35_OFFSET })

// // Interrupt Source 36 Priority
// #define RV_PLIC_PRIO36_REG_OFFSET 0x90
// #define RV_PLIC_PRIO36_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO36_PRIO36_MASK 0x3u
// #define RV_PLIC_PRIO36_PRIO36_OFFSET 0
// #define RV_PLIC_PRIO36_PRIO36_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO36_PRIO36_MASK, .index = RV_PLIC_PRIO36_PRIO36_OFFSET })

// // Interrupt Source 37 Priority
// #define RV_PLIC_PRIO37_REG_OFFSET 0x94
// #define RV_PLIC_PRIO37_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO37_PRIO37_MASK 0x3u
// #define RV_PLIC_PRIO37_PRIO37_OFFSET 0
// #define RV_PLIC_PRIO37_PRIO37_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO37_PRIO37_MASK, .index = RV_PLIC_PRIO37_PRIO37_OFFSET })

// // Interrupt Source 38 Priority
// #define RV_PLIC_PRIO38_REG_OFFSET 0x98
// #define RV_PLIC_PRIO38_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO38_PRIO38_MASK 0x3u
// #define RV_PLIC_PRIO38_PRIO38_OFFSET 0
// #define RV_PLIC_PRIO38_PRIO38_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO38_PRIO38_MASK, .index = RV_PLIC_PRIO38_PRIO38_OFFSET })

// // Interrupt Source 39 Priority
// #define RV_PLIC_PRIO39_REG_OFFSET 0x9c
// #define RV_PLIC_PRIO39_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO39_PRIO39_MASK 0x3u
// #define RV_PLIC_PRIO39_PRIO39_OFFSET 0
// #define RV_PLIC_PRIO39_PRIO39_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO39_PRIO39_MASK, .index = RV_PLIC_PRIO39_PRIO39_OFFSET })

// // Interrupt Source 40 Priority
// #define RV_PLIC_PRIO40_REG_OFFSET 0xa0
// #define RV_PLIC_PRIO40_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO40_PRIO40_MASK 0x3u
// #define RV_PLIC_PRIO40_PRIO40_OFFSET 0
// #define RV_PLIC_PRIO40_PRIO40_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO40_PRIO40_MASK, .index = RV_PLIC_PRIO40_PRIO40_OFFSET })

// // Interrupt Source 41 Priority
// #define RV_PLIC_PRIO41_REG_OFFSET 0xa4
// #define RV_PLIC_PRIO41_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO41_PRIO41_MASK 0x3u
// #define RV_PLIC_PRIO41_PRIO41_OFFSET 0
// #define RV_PLIC_PRIO41_PRIO41_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO41_PRIO41_MASK, .index = RV_PLIC_PRIO41_PRIO41_OFFSET })

// // Interrupt Source 42 Priority
// #define RV_PLIC_PRIO42_REG_OFFSET 0xa8
// #define RV_PLIC_PRIO42_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO42_PRIO42_MASK 0x3u
// #define RV_PLIC_PRIO42_PRIO42_OFFSET 0
// #define RV_PLIC_PRIO42_PRIO42_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO42_PRIO42_MASK, .index = RV_PLIC_PRIO42_PRIO42_OFFSET })

// // Interrupt Source 43 Priority
// #define RV_PLIC_PRIO43_REG_OFFSET 0xac
// #define RV_PLIC_PRIO43_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO43_PRIO43_MASK 0x3u
// #define RV_PLIC_PRIO43_PRIO43_OFFSET 0
// #define RV_PLIC_PRIO43_PRIO43_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO43_PRIO43_MASK, .index = RV_PLIC_PRIO43_PRIO43_OFFSET })

// // Interrupt Source 44 Priority
// #define RV_PLIC_PRIO44_REG_OFFSET 0xb0
// #define RV_PLIC_PRIO44_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO44_PRIO44_MASK 0x3u
// #define RV_PLIC_PRIO44_PRIO44_OFFSET 0
// #define RV_PLIC_PRIO44_PRIO44_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO44_PRIO44_MASK, .index = RV_PLIC_PRIO44_PRIO44_OFFSET })

// // Interrupt Source 45 Priority
// #define RV_PLIC_PRIO45_REG_OFFSET 0xb4
// #define RV_PLIC_PRIO45_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO45_PRIO45_MASK 0x3u
// #define RV_PLIC_PRIO45_PRIO45_OFFSET 0
// #define RV_PLIC_PRIO45_PRIO45_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO45_PRIO45_MASK, .index = RV_PLIC_PRIO45_PRIO45_OFFSET })

// // Interrupt Source 46 Priority
// #define RV_PLIC_PRIO46_REG_OFFSET 0xb8
// #define RV_PLIC_PRIO46_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO46_PRIO46_MASK 0x3u
// #define RV_PLIC_PRIO46_PRIO46_OFFSET 0
// #define RV_PLIC_PRIO46_PRIO46_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO46_PRIO46_MASK, .index = RV_PLIC_PRIO46_PRIO46_OFFSET })

// // Interrupt Source 47 Priority
// #define RV_PLIC_PRIO47_REG_OFFSET 0xbc
// #define RV_PLIC_PRIO47_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO47_PRIO47_MASK 0x3u
// #define RV_PLIC_PRIO47_PRIO47_OFFSET 0
// #define RV_PLIC_PRIO47_PRIO47_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO47_PRIO47_MASK, .index = RV_PLIC_PRIO47_PRIO47_OFFSET })

// // Interrupt Source 48 Priority
// #define RV_PLIC_PRIO48_REG_OFFSET 0xc0
// #define RV_PLIC_PRIO48_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO48_PRIO48_MASK 0x3u
// #define RV_PLIC_PRIO48_PRIO48_OFFSET 0
// #define RV_PLIC_PRIO48_PRIO48_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO48_PRIO48_MASK, .index = RV_PLIC_PRIO48_PRIO48_OFFSET })

// // Interrupt Source 49 Priority
// #define RV_PLIC_PRIO49_REG_OFFSET 0xc4
// #define RV_PLIC_PRIO49_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO49_PRIO49_MASK 0x3u
// #define RV_PLIC_PRIO49_PRIO49_OFFSET 0
// #define RV_PLIC_PRIO49_PRIO49_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO49_PRIO49_MASK, .index = RV_PLIC_PRIO49_PRIO49_OFFSET })

// // Interrupt Source 50 Priority
// #define RV_PLIC_PRIO50_REG_OFFSET 0xc8
// #define RV_PLIC_PRIO50_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO50_PRIO50_MASK 0x3u
// #define RV_PLIC_PRIO50_PRIO50_OFFSET 0
// #define RV_PLIC_PRIO50_PRIO50_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO50_PRIO50_MASK, .index = RV_PLIC_PRIO50_PRIO50_OFFSET })

// // Interrupt Source 51 Priority
// #define RV_PLIC_PRIO51_REG_OFFSET 0xcc
// #define RV_PLIC_PRIO51_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO51_PRIO51_MASK 0x3u
// #define RV_PLIC_PRIO51_PRIO51_OFFSET 0
// #define RV_PLIC_PRIO51_PRIO51_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO51_PRIO51_MASK, .index = RV_PLIC_PRIO51_PRIO51_OFFSET })

// // Interrupt Source 52 Priority
// #define RV_PLIC_PRIO52_REG_OFFSET 0xd0
// #define RV_PLIC_PRIO52_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO52_PRIO52_MASK 0x3u
// #define RV_PLIC_PRIO52_PRIO52_OFFSET 0
// #define RV_PLIC_PRIO52_PRIO52_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO52_PRIO52_MASK, .index = RV_PLIC_PRIO52_PRIO52_OFFSET })

// // Interrupt Source 53 Priority
// #define RV_PLIC_PRIO53_REG_OFFSET 0xd4
// #define RV_PLIC_PRIO53_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO53_PRIO53_MASK 0x3u
// #define RV_PLIC_PRIO53_PRIO53_OFFSET 0
// #define RV_PLIC_PRIO53_PRIO53_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO53_PRIO53_MASK, .index = RV_PLIC_PRIO53_PRIO53_OFFSET })

// // Interrupt Source 54 Priority
// #define RV_PLIC_PRIO54_REG_OFFSET 0xd8
// #define RV_PLIC_PRIO54_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO54_PRIO54_MASK 0x3u
// #define RV_PLIC_PRIO54_PRIO54_OFFSET 0
// #define RV_PLIC_PRIO54_PRIO54_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO54_PRIO54_MASK, .index = RV_PLIC_PRIO54_PRIO54_OFFSET })

// // Interrupt Source 55 Priority
// #define RV_PLIC_PRIO55_REG_OFFSET 0xdc
// #define RV_PLIC_PRIO55_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO55_PRIO55_MASK 0x3u
// #define RV_PLIC_PRIO55_PRIO55_OFFSET 0
// #define RV_PLIC_PRIO55_PRIO55_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO55_PRIO55_MASK, .index = RV_PLIC_PRIO55_PRIO55_OFFSET })

// // Interrupt Source 56 Priority
// #define RV_PLIC_PRIO56_REG_OFFSET 0xe0
// #define RV_PLIC_PRIO56_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO56_PRIO56_MASK 0x3u
// #define RV_PLIC_PRIO56_PRIO56_OFFSET 0
// #define RV_PLIC_PRIO56_PRIO56_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO56_PRIO56_MASK, .index = RV_PLIC_PRIO56_PRIO56_OFFSET })

// // Interrupt Source 57 Priority
// #define RV_PLIC_PRIO57_REG_OFFSET 0xe4
// #define RV_PLIC_PRIO57_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO57_PRIO57_MASK 0x3u
// #define RV_PLIC_PRIO57_PRIO57_OFFSET 0
// #define RV_PLIC_PRIO57_PRIO57_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO57_PRIO57_MASK, .index = RV_PLIC_PRIO57_PRIO57_OFFSET })

// // Interrupt Source 58 Priority
// #define RV_PLIC_PRIO58_REG_OFFSET 0xe8
// #define RV_PLIC_PRIO58_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO58_PRIO58_MASK 0x3u
// #define RV_PLIC_PRIO58_PRIO58_OFFSET 0
// #define RV_PLIC_PRIO58_PRIO58_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO58_PRIO58_MASK, .index = RV_PLIC_PRIO58_PRIO58_OFFSET })

// // Interrupt Source 59 Priority
// #define RV_PLIC_PRIO59_REG_OFFSET 0xec
// #define RV_PLIC_PRIO59_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO59_PRIO59_MASK 0x3u
// #define RV_PLIC_PRIO59_PRIO59_OFFSET 0
// #define RV_PLIC_PRIO59_PRIO59_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO59_PRIO59_MASK, .index = RV_PLIC_PRIO59_PRIO59_OFFSET })

// // Interrupt Source 60 Priority
// #define RV_PLIC_PRIO60_REG_OFFSET 0xf0
// #define RV_PLIC_PRIO60_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO60_PRIO60_MASK 0x3u
// #define RV_PLIC_PRIO60_PRIO60_OFFSET 0
// #define RV_PLIC_PRIO60_PRIO60_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO60_PRIO60_MASK, .index = RV_PLIC_PRIO60_PRIO60_OFFSET })

// // Interrupt Source 61 Priority
// #define RV_PLIC_PRIO61_REG_OFFSET 0xf4
// #define RV_PLIC_PRIO61_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO61_PRIO61_MASK 0x3u
// #define RV_PLIC_PRIO61_PRIO61_OFFSET 0
// #define RV_PLIC_PRIO61_PRIO61_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO61_PRIO61_MASK, .index = RV_PLIC_PRIO61_PRIO61_OFFSET })

// // Interrupt Source 62 Priority
// #define RV_PLIC_PRIO62_REG_OFFSET 0xf8
// #define RV_PLIC_PRIO62_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO62_PRIO62_MASK 0x3u
// #define RV_PLIC_PRIO62_PRIO62_OFFSET 0
// #define RV_PLIC_PRIO62_PRIO62_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO62_PRIO62_MASK, .index = RV_PLIC_PRIO62_PRIO62_OFFSET })

// // Interrupt Source 63 Priority
// #define RV_PLIC_PRIO63_REG_OFFSET 0xfc
// #define RV_PLIC_PRIO63_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO63_PRIO63_MASK 0x3u
// #define RV_PLIC_PRIO63_PRIO63_OFFSET 0
// #define RV_PLIC_PRIO63_PRIO63_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO63_PRIO63_MASK, .index = RV_PLIC_PRIO63_PRIO63_OFFSET })

// // Interrupt Source 64 Priority
// #define RV_PLIC_PRIO64_REG_OFFSET 0x100
// #define RV_PLIC_PRIO64_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO64_PRIO64_MASK 0x3u
// #define RV_PLIC_PRIO64_PRIO64_OFFSET 0
// #define RV_PLIC_PRIO64_PRIO64_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO64_PRIO64_MASK, .index = RV_PLIC_PRIO64_PRIO64_OFFSET })

// // Interrupt Source 65 Priority
// #define RV_PLIC_PRIO65_REG_OFFSET 0x104
// #define RV_PLIC_PRIO65_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO65_PRIO65_MASK 0x3u
// #define RV_PLIC_PRIO65_PRIO65_OFFSET 0
// #define RV_PLIC_PRIO65_PRIO65_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO65_PRIO65_MASK, .index = RV_PLIC_PRIO65_PRIO65_OFFSET })

// // Interrupt Source 66 Priority
// #define RV_PLIC_PRIO66_REG_OFFSET 0x108
// #define RV_PLIC_PRIO66_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO66_PRIO66_MASK 0x3u
// #define RV_PLIC_PRIO66_PRIO66_OFFSET 0
// #define RV_PLIC_PRIO66_PRIO66_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO66_PRIO66_MASK, .index = RV_PLIC_PRIO66_PRIO66_OFFSET })

// // Interrupt Source 67 Priority
// #define RV_PLIC_PRIO67_REG_OFFSET 0x10c
// #define RV_PLIC_PRIO67_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO67_PRIO67_MASK 0x3u
// #define RV_PLIC_PRIO67_PRIO67_OFFSET 0
// #define RV_PLIC_PRIO67_PRIO67_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO67_PRIO67_MASK, .index = RV_PLIC_PRIO67_PRIO67_OFFSET })

// // Interrupt Source 68 Priority
// #define RV_PLIC_PRIO68_REG_OFFSET 0x110
// #define RV_PLIC_PRIO68_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO68_PRIO68_MASK 0x3u
// #define RV_PLIC_PRIO68_PRIO68_OFFSET 0
// #define RV_PLIC_PRIO68_PRIO68_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO68_PRIO68_MASK, .index = RV_PLIC_PRIO68_PRIO68_OFFSET })

// // Interrupt Source 69 Priority
// #define RV_PLIC_PRIO69_REG_OFFSET 0x114
// #define RV_PLIC_PRIO69_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO69_PRIO69_MASK 0x3u
// #define RV_PLIC_PRIO69_PRIO69_OFFSET 0
// #define RV_PLIC_PRIO69_PRIO69_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO69_PRIO69_MASK, .index = RV_PLIC_PRIO69_PRIO69_OFFSET })

// // Interrupt Source 70 Priority
// #define RV_PLIC_PRIO70_REG_OFFSET 0x118
// #define RV_PLIC_PRIO70_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO70_PRIO70_MASK 0x3u
// #define RV_PLIC_PRIO70_PRIO70_OFFSET 0
// #define RV_PLIC_PRIO70_PRIO70_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO70_PRIO70_MASK, .index = RV_PLIC_PRIO70_PRIO70_OFFSET })

// // Interrupt Source 71 Priority
// #define RV_PLIC_PRIO71_REG_OFFSET 0x11c
// #define RV_PLIC_PRIO71_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO71_PRIO71_MASK 0x3u
// #define RV_PLIC_PRIO71_PRIO71_OFFSET 0
// #define RV_PLIC_PRIO71_PRIO71_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO71_PRIO71_MASK, .index = RV_PLIC_PRIO71_PRIO71_OFFSET })

// // Interrupt Source 72 Priority
// #define RV_PLIC_PRIO72_REG_OFFSET 0x120
// #define RV_PLIC_PRIO72_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO72_PRIO72_MASK 0x3u
// #define RV_PLIC_PRIO72_PRIO72_OFFSET 0
// #define RV_PLIC_PRIO72_PRIO72_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO72_PRIO72_MASK, .index = RV_PLIC_PRIO72_PRIO72_OFFSET })

// // Interrupt Source 73 Priority
// #define RV_PLIC_PRIO73_REG_OFFSET 0x124
// #define RV_PLIC_PRIO73_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO73_PRIO73_MASK 0x3u
// #define RV_PLIC_PRIO73_PRIO73_OFFSET 0
// #define RV_PLIC_PRIO73_PRIO73_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO73_PRIO73_MASK, .index = RV_PLIC_PRIO73_PRIO73_OFFSET })

// // Interrupt Source 74 Priority
// #define RV_PLIC_PRIO74_REG_OFFSET 0x128
// #define RV_PLIC_PRIO74_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO74_PRIO74_MASK 0x3u
// #define RV_PLIC_PRIO74_PRIO74_OFFSET 0
// #define RV_PLIC_PRIO74_PRIO74_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO74_PRIO74_MASK, .index = RV_PLIC_PRIO74_PRIO74_OFFSET })

// // Interrupt Source 75 Priority
// #define RV_PLIC_PRIO75_REG_OFFSET 0x12c
// #define RV_PLIC_PRIO75_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO75_PRIO75_MASK 0x3u
// #define RV_PLIC_PRIO75_PRIO75_OFFSET 0
// #define RV_PLIC_PRIO75_PRIO75_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO75_PRIO75_MASK, .index = RV_PLIC_PRIO75_PRIO75_OFFSET })

// // Interrupt Source 76 Priority
// #define RV_PLIC_PRIO76_REG_OFFSET 0x130
// #define RV_PLIC_PRIO76_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO76_PRIO76_MASK 0x3u
// #define RV_PLIC_PRIO76_PRIO76_OFFSET 0
// #define RV_PLIC_PRIO76_PRIO76_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO76_PRIO76_MASK, .index = RV_PLIC_PRIO76_PRIO76_OFFSET })

// // Interrupt Source 77 Priority
// #define RV_PLIC_PRIO77_REG_OFFSET 0x134
// #define RV_PLIC_PRIO77_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO77_PRIO77_MASK 0x3u
// #define RV_PLIC_PRIO77_PRIO77_OFFSET 0
// #define RV_PLIC_PRIO77_PRIO77_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO77_PRIO77_MASK, .index = RV_PLIC_PRIO77_PRIO77_OFFSET })

// // Interrupt Source 78 Priority
// #define RV_PLIC_PRIO78_REG_OFFSET 0x138
// #define RV_PLIC_PRIO78_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO78_PRIO78_MASK 0x3u
// #define RV_PLIC_PRIO78_PRIO78_OFFSET 0
// #define RV_PLIC_PRIO78_PRIO78_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO78_PRIO78_MASK, .index = RV_PLIC_PRIO78_PRIO78_OFFSET })

// // Interrupt Source 79 Priority
// #define RV_PLIC_PRIO79_REG_OFFSET 0x13c
// #define RV_PLIC_PRIO79_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO79_PRIO79_MASK 0x3u
// #define RV_PLIC_PRIO79_PRIO79_OFFSET 0
// #define RV_PLIC_PRIO79_PRIO79_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO79_PRIO79_MASK, .index = RV_PLIC_PRIO79_PRIO79_OFFSET })

// // Interrupt Source 80 Priority
// #define RV_PLIC_PRIO80_REG_OFFSET 0x140
// #define RV_PLIC_PRIO80_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO80_PRIO80_MASK 0x3u
// #define RV_PLIC_PRIO80_PRIO80_OFFSET 0
// #define RV_PLIC_PRIO80_PRIO80_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO80_PRIO80_MASK, .index = RV_PLIC_PRIO80_PRIO80_OFFSET })

// // Interrupt Source 81 Priority
// #define RV_PLIC_PRIO81_REG_OFFSET 0x144
// #define RV_PLIC_PRIO81_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO81_PRIO81_MASK 0x3u
// #define RV_PLIC_PRIO81_PRIO81_OFFSET 0
// #define RV_PLIC_PRIO81_PRIO81_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO81_PRIO81_MASK, .index = RV_PLIC_PRIO81_PRIO81_OFFSET })

// // Interrupt Source 82 Priority
// #define RV_PLIC_PRIO82_REG_OFFSET 0x148
// #define RV_PLIC_PRIO82_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO82_PRIO82_MASK 0x3u
// #define RV_PLIC_PRIO82_PRIO82_OFFSET 0
// #define RV_PLIC_PRIO82_PRIO82_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO82_PRIO82_MASK, .index = RV_PLIC_PRIO82_PRIO82_OFFSET })

// // Interrupt Source 83 Priority
// #define RV_PLIC_PRIO83_REG_OFFSET 0x14c
// #define RV_PLIC_PRIO83_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO83_PRIO83_MASK 0x3u
// #define RV_PLIC_PRIO83_PRIO83_OFFSET 0
// #define RV_PLIC_PRIO83_PRIO83_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO83_PRIO83_MASK, .index = RV_PLIC_PRIO83_PRIO83_OFFSET })

// // Interrupt Source 84 Priority
// #define RV_PLIC_PRIO84_REG_OFFSET 0x150
// #define RV_PLIC_PRIO84_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO84_PRIO84_MASK 0x3u
// #define RV_PLIC_PRIO84_PRIO84_OFFSET 0
// #define RV_PLIC_PRIO84_PRIO84_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO84_PRIO84_MASK, .index = RV_PLIC_PRIO84_PRIO84_OFFSET })

// // Interrupt Source 85 Priority
// #define RV_PLIC_PRIO85_REG_OFFSET 0x154
// #define RV_PLIC_PRIO85_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO85_PRIO85_MASK 0x3u
// #define RV_PLIC_PRIO85_PRIO85_OFFSET 0
// #define RV_PLIC_PRIO85_PRIO85_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO85_PRIO85_MASK, .index = RV_PLIC_PRIO85_PRIO85_OFFSET })

// // Interrupt Source 86 Priority
// #define RV_PLIC_PRIO86_REG_OFFSET 0x158
// #define RV_PLIC_PRIO86_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO86_PRIO86_MASK 0x3u
// #define RV_PLIC_PRIO86_PRIO86_OFFSET 0
// #define RV_PLIC_PRIO86_PRIO86_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO86_PRIO86_MASK, .index = RV_PLIC_PRIO86_PRIO86_OFFSET })

// // Interrupt Source 87 Priority
// #define RV_PLIC_PRIO87_REG_OFFSET 0x15c
// #define RV_PLIC_PRIO87_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO87_PRIO87_MASK 0x3u
// #define RV_PLIC_PRIO87_PRIO87_OFFSET 0
// #define RV_PLIC_PRIO87_PRIO87_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO87_PRIO87_MASK, .index = RV_PLIC_PRIO87_PRIO87_OFFSET })

// // Interrupt Source 88 Priority
// #define RV_PLIC_PRIO88_REG_OFFSET 0x160
// #define RV_PLIC_PRIO88_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO88_PRIO88_MASK 0x3u
// #define RV_PLIC_PRIO88_PRIO88_OFFSET 0
// #define RV_PLIC_PRIO88_PRIO88_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO88_PRIO88_MASK, .index = RV_PLIC_PRIO88_PRIO88_OFFSET })

// // Interrupt Source 89 Priority
// #define RV_PLIC_PRIO89_REG_OFFSET 0x164
// #define RV_PLIC_PRIO89_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO89_PRIO89_MASK 0x3u
// #define RV_PLIC_PRIO89_PRIO89_OFFSET 0
// #define RV_PLIC_PRIO89_PRIO89_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO89_PRIO89_MASK, .index = RV_PLIC_PRIO89_PRIO89_OFFSET })

// // Interrupt Source 90 Priority
// #define RV_PLIC_PRIO90_REG_OFFSET 0x168
// #define RV_PLIC_PRIO90_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO90_PRIO90_MASK 0x3u
// #define RV_PLIC_PRIO90_PRIO90_OFFSET 0
// #define RV_PLIC_PRIO90_PRIO90_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO90_PRIO90_MASK, .index = RV_PLIC_PRIO90_PRIO90_OFFSET })

// // Interrupt Source 91 Priority
// #define RV_PLIC_PRIO91_REG_OFFSET 0x16c
// #define RV_PLIC_PRIO91_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO91_PRIO91_MASK 0x3u
// #define RV_PLIC_PRIO91_PRIO91_OFFSET 0
// #define RV_PLIC_PRIO91_PRIO91_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO91_PRIO91_MASK, .index = RV_PLIC_PRIO91_PRIO91_OFFSET })

// // Interrupt Source 92 Priority
// #define RV_PLIC_PRIO92_REG_OFFSET 0x170
// #define RV_PLIC_PRIO92_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO92_PRIO92_MASK 0x3u
// #define RV_PLIC_PRIO92_PRIO92_OFFSET 0
// #define RV_PLIC_PRIO92_PRIO92_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO92_PRIO92_MASK, .index = RV_PLIC_PRIO92_PRIO92_OFFSET })

// // Interrupt Source 93 Priority
// #define RV_PLIC_PRIO93_REG_OFFSET 0x174
// #define RV_PLIC_PRIO93_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO93_PRIO93_MASK 0x3u
// #define RV_PLIC_PRIO93_PRIO93_OFFSET 0
// #define RV_PLIC_PRIO93_PRIO93_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO93_PRIO93_MASK, .index = RV_PLIC_PRIO93_PRIO93_OFFSET })

// // Interrupt Source 94 Priority
// #define RV_PLIC_PRIO94_REG_OFFSET 0x178
// #define RV_PLIC_PRIO94_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO94_PRIO94_MASK 0x3u
// #define RV_PLIC_PRIO94_PRIO94_OFFSET 0
// #define RV_PLIC_PRIO94_PRIO94_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO94_PRIO94_MASK, .index = RV_PLIC_PRIO94_PRIO94_OFFSET })

// // Interrupt Source 95 Priority
// #define RV_PLIC_PRIO95_REG_OFFSET 0x17c
// #define RV_PLIC_PRIO95_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO95_PRIO95_MASK 0x3u
// #define RV_PLIC_PRIO95_PRIO95_OFFSET 0
// #define RV_PLIC_PRIO95_PRIO95_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO95_PRIO95_MASK, .index = RV_PLIC_PRIO95_PRIO95_OFFSET })

// // Interrupt Source 96 Priority
// #define RV_PLIC_PRIO96_REG_OFFSET 0x180
// #define RV_PLIC_PRIO96_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO96_PRIO96_MASK 0x3u
// #define RV_PLIC_PRIO96_PRIO96_OFFSET 0
// #define RV_PLIC_PRIO96_PRIO96_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO96_PRIO96_MASK, .index = RV_PLIC_PRIO96_PRIO96_OFFSET })

// // Interrupt Source 97 Priority
// #define RV_PLIC_PRIO97_REG_OFFSET 0x184
// #define RV_PLIC_PRIO97_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO97_PRIO97_MASK 0x3u
// #define RV_PLIC_PRIO97_PRIO97_OFFSET 0
// #define RV_PLIC_PRIO97_PRIO97_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO97_PRIO97_MASK, .index = RV_PLIC_PRIO97_PRIO97_OFFSET })

// // Interrupt Source 98 Priority
// #define RV_PLIC_PRIO98_REG_OFFSET 0x188
// #define RV_PLIC_PRIO98_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO98_PRIO98_MASK 0x3u
// #define RV_PLIC_PRIO98_PRIO98_OFFSET 0
// #define RV_PLIC_PRIO98_PRIO98_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO98_PRIO98_MASK, .index = RV_PLIC_PRIO98_PRIO98_OFFSET })

// // Interrupt Source 99 Priority
// #define RV_PLIC_PRIO99_REG_OFFSET 0x18c
// #define RV_PLIC_PRIO99_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO99_PRIO99_MASK 0x3u
// #define RV_PLIC_PRIO99_PRIO99_OFFSET 0
// #define RV_PLIC_PRIO99_PRIO99_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO99_PRIO99_MASK, .index = RV_PLIC_PRIO99_PRIO99_OFFSET })

// // Interrupt Source 100 Priority
// #define RV_PLIC_PRIO100_REG_OFFSET 0x190
// #define RV_PLIC_PRIO100_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO100_PRIO100_MASK 0x3u
// #define RV_PLIC_PRIO100_PRIO100_OFFSET 0
// #define RV_PLIC_PRIO100_PRIO100_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO100_PRIO100_MASK, .index = RV_PLIC_PRIO100_PRIO100_OFFSET })

// // Interrupt Source 101 Priority
// #define RV_PLIC_PRIO101_REG_OFFSET 0x194
// #define RV_PLIC_PRIO101_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO101_PRIO101_MASK 0x3u
// #define RV_PLIC_PRIO101_PRIO101_OFFSET 0
// #define RV_PLIC_PRIO101_PRIO101_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO101_PRIO101_MASK, .index = RV_PLIC_PRIO101_PRIO101_OFFSET })

// // Interrupt Source 102 Priority
// #define RV_PLIC_PRIO102_REG_OFFSET 0x198
// #define RV_PLIC_PRIO102_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO102_PRIO102_MASK 0x3u
// #define RV_PLIC_PRIO102_PRIO102_OFFSET 0
// #define RV_PLIC_PRIO102_PRIO102_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO102_PRIO102_MASK, .index = RV_PLIC_PRIO102_PRIO102_OFFSET })

// // Interrupt Source 103 Priority
// #define RV_PLIC_PRIO103_REG_OFFSET 0x19c
// #define RV_PLIC_PRIO103_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO103_PRIO103_MASK 0x3u
// #define RV_PLIC_PRIO103_PRIO103_OFFSET 0
// #define RV_PLIC_PRIO103_PRIO103_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO103_PRIO103_MASK, .index = RV_PLIC_PRIO103_PRIO103_OFFSET })

// // Interrupt Source 104 Priority
// #define RV_PLIC_PRIO104_REG_OFFSET 0x1a0
// #define RV_PLIC_PRIO104_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO104_PRIO104_MASK 0x3u
// #define RV_PLIC_PRIO104_PRIO104_OFFSET 0
// #define RV_PLIC_PRIO104_PRIO104_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO104_PRIO104_MASK, .index = RV_PLIC_PRIO104_PRIO104_OFFSET })

// // Interrupt Source 105 Priority
// #define RV_PLIC_PRIO105_REG_OFFSET 0x1a4
// #define RV_PLIC_PRIO105_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO105_PRIO105_MASK 0x3u
// #define RV_PLIC_PRIO105_PRIO105_OFFSET 0
// #define RV_PLIC_PRIO105_PRIO105_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO105_PRIO105_MASK, .index = RV_PLIC_PRIO105_PRIO105_OFFSET })

// // Interrupt Source 106 Priority
// #define RV_PLIC_PRIO106_REG_OFFSET 0x1a8
// #define RV_PLIC_PRIO106_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO106_PRIO106_MASK 0x3u
// #define RV_PLIC_PRIO106_PRIO106_OFFSET 0
// #define RV_PLIC_PRIO106_PRIO106_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO106_PRIO106_MASK, .index = RV_PLIC_PRIO106_PRIO106_OFFSET })

// // Interrupt Source 107 Priority
// #define RV_PLIC_PRIO107_REG_OFFSET 0x1ac
// #define RV_PLIC_PRIO107_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO107_PRIO107_MASK 0x3u
// #define RV_PLIC_PRIO107_PRIO107_OFFSET 0
// #define RV_PLIC_PRIO107_PRIO107_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO107_PRIO107_MASK, .index = RV_PLIC_PRIO107_PRIO107_OFFSET })

// // Interrupt Source 108 Priority
// #define RV_PLIC_PRIO108_REG_OFFSET 0x1b0
// #define RV_PLIC_PRIO108_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO108_PRIO108_MASK 0x3u
// #define RV_PLIC_PRIO108_PRIO108_OFFSET 0
// #define RV_PLIC_PRIO108_PRIO108_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO108_PRIO108_MASK, .index = RV_PLIC_PRIO108_PRIO108_OFFSET })

// // Interrupt Source 109 Priority
// #define RV_PLIC_PRIO109_REG_OFFSET 0x1b4
// #define RV_PLIC_PRIO109_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO109_PRIO109_MASK 0x3u
// #define RV_PLIC_PRIO109_PRIO109_OFFSET 0
// #define RV_PLIC_PRIO109_PRIO109_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO109_PRIO109_MASK, .index = RV_PLIC_PRIO109_PRIO109_OFFSET })

// // Interrupt Source 110 Priority
// #define RV_PLIC_PRIO110_REG_OFFSET 0x1b8
// #define RV_PLIC_PRIO110_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO110_PRIO110_MASK 0x3u
// #define RV_PLIC_PRIO110_PRIO110_OFFSET 0
// #define RV_PLIC_PRIO110_PRIO110_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO110_PRIO110_MASK, .index = RV_PLIC_PRIO110_PRIO110_OFFSET })

// // Interrupt Source 111 Priority
// #define RV_PLIC_PRIO111_REG_OFFSET 0x1bc
// #define RV_PLIC_PRIO111_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO111_PRIO111_MASK 0x3u
// #define RV_PLIC_PRIO111_PRIO111_OFFSET 0
// #define RV_PLIC_PRIO111_PRIO111_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO111_PRIO111_MASK, .index = RV_PLIC_PRIO111_PRIO111_OFFSET })

// // Interrupt Source 112 Priority
// #define RV_PLIC_PRIO112_REG_OFFSET 0x1c0
// #define RV_PLIC_PRIO112_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO112_PRIO112_MASK 0x3u
// #define RV_PLIC_PRIO112_PRIO112_OFFSET 0
// #define RV_PLIC_PRIO112_PRIO112_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO112_PRIO112_MASK, .index = RV_PLIC_PRIO112_PRIO112_OFFSET })

// // Interrupt Source 113 Priority
// #define RV_PLIC_PRIO113_REG_OFFSET 0x1c4
// #define RV_PLIC_PRIO113_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO113_PRIO113_MASK 0x3u
// #define RV_PLIC_PRIO113_PRIO113_OFFSET 0
// #define RV_PLIC_PRIO113_PRIO113_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO113_PRIO113_MASK, .index = RV_PLIC_PRIO113_PRIO113_OFFSET })

// // Interrupt Source 114 Priority
// #define RV_PLIC_PRIO114_REG_OFFSET 0x1c8
// #define RV_PLIC_PRIO114_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO114_PRIO114_MASK 0x3u
// #define RV_PLIC_PRIO114_PRIO114_OFFSET 0
// #define RV_PLIC_PRIO114_PRIO114_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO114_PRIO114_MASK, .index = RV_PLIC_PRIO114_PRIO114_OFFSET })

// // Interrupt Source 115 Priority
// #define RV_PLIC_PRIO115_REG_OFFSET 0x1cc
// #define RV_PLIC_PRIO115_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO115_PRIO115_MASK 0x3u
// #define RV_PLIC_PRIO115_PRIO115_OFFSET 0
// #define RV_PLIC_PRIO115_PRIO115_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO115_PRIO115_MASK, .index = RV_PLIC_PRIO115_PRIO115_OFFSET })

// // Interrupt Source 116 Priority
// #define RV_PLIC_PRIO116_REG_OFFSET 0x1d0
// #define RV_PLIC_PRIO116_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO116_PRIO116_MASK 0x3u
// #define RV_PLIC_PRIO116_PRIO116_OFFSET 0
// #define RV_PLIC_PRIO116_PRIO116_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO116_PRIO116_MASK, .index = RV_PLIC_PRIO116_PRIO116_OFFSET })

// // Interrupt Source 117 Priority
// #define RV_PLIC_PRIO117_REG_OFFSET 0x1d4
// #define RV_PLIC_PRIO117_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO117_PRIO117_MASK 0x3u
// #define RV_PLIC_PRIO117_PRIO117_OFFSET 0
// #define RV_PLIC_PRIO117_PRIO117_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO117_PRIO117_MASK, .index = RV_PLIC_PRIO117_PRIO117_OFFSET })

// // Interrupt Source 118 Priority
// #define RV_PLIC_PRIO118_REG_OFFSET 0x1d8
// #define RV_PLIC_PRIO118_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO118_PRIO118_MASK 0x3u
// #define RV_PLIC_PRIO118_PRIO118_OFFSET 0
// #define RV_PLIC_PRIO118_PRIO118_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO118_PRIO118_MASK, .index = RV_PLIC_PRIO118_PRIO118_OFFSET })

// // Interrupt Source 119 Priority
// #define RV_PLIC_PRIO119_REG_OFFSET 0x1dc
// #define RV_PLIC_PRIO119_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO119_PRIO119_MASK 0x3u
// #define RV_PLIC_PRIO119_PRIO119_OFFSET 0
// #define RV_PLIC_PRIO119_PRIO119_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO119_PRIO119_MASK, .index = RV_PLIC_PRIO119_PRIO119_OFFSET })

// // Interrupt Source 120 Priority
// #define RV_PLIC_PRIO120_REG_OFFSET 0x1e0
// #define RV_PLIC_PRIO120_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO120_PRIO120_MASK 0x3u
// #define RV_PLIC_PRIO120_PRIO120_OFFSET 0
// #define RV_PLIC_PRIO120_PRIO120_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO120_PRIO120_MASK, .index = RV_PLIC_PRIO120_PRIO120_OFFSET })

// // Interrupt Source 121 Priority
// #define RV_PLIC_PRIO121_REG_OFFSET 0x1e4
// #define RV_PLIC_PRIO121_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO121_PRIO121_MASK 0x3u
// #define RV_PLIC_PRIO121_PRIO121_OFFSET 0
// #define RV_PLIC_PRIO121_PRIO121_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO121_PRIO121_MASK, .index = RV_PLIC_PRIO121_PRIO121_OFFSET })

// // Interrupt Source 122 Priority
// #define RV_PLIC_PRIO122_REG_OFFSET 0x1e8
// #define RV_PLIC_PRIO122_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO122_PRIO122_MASK 0x3u
// #define RV_PLIC_PRIO122_PRIO122_OFFSET 0
// #define RV_PLIC_PRIO122_PRIO122_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO122_PRIO122_MASK, .index = RV_PLIC_PRIO122_PRIO122_OFFSET })

// // Interrupt Source 123 Priority
// #define RV_PLIC_PRIO123_REG_OFFSET 0x1ec
// #define RV_PLIC_PRIO123_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO123_PRIO123_MASK 0x3u
// #define RV_PLIC_PRIO123_PRIO123_OFFSET 0
// #define RV_PLIC_PRIO123_PRIO123_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO123_PRIO123_MASK, .index = RV_PLIC_PRIO123_PRIO123_OFFSET })

// // Interrupt Source 124 Priority
// #define RV_PLIC_PRIO124_REG_OFFSET 0x1f0
// #define RV_PLIC_PRIO124_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO124_PRIO124_MASK 0x3u
// #define RV_PLIC_PRIO124_PRIO124_OFFSET 0
// #define RV_PLIC_PRIO124_PRIO124_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO124_PRIO124_MASK, .index = RV_PLIC_PRIO124_PRIO124_OFFSET })

// // Interrupt Source 125 Priority
// #define RV_PLIC_PRIO125_REG_OFFSET 0x1f4
// #define RV_PLIC_PRIO125_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO125_PRIO125_MASK 0x3u
// #define RV_PLIC_PRIO125_PRIO125_OFFSET 0
// #define RV_PLIC_PRIO125_PRIO125_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO125_PRIO125_MASK, .index = RV_PLIC_PRIO125_PRIO125_OFFSET })

// // Interrupt Source 126 Priority
// #define RV_PLIC_PRIO126_REG_OFFSET 0x1f8
// #define RV_PLIC_PRIO126_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO126_PRIO126_MASK 0x3u
// #define RV_PLIC_PRIO126_PRIO126_OFFSET 0
// #define RV_PLIC_PRIO126_PRIO126_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO126_PRIO126_MASK, .index = RV_PLIC_PRIO126_PRIO126_OFFSET })

// // Interrupt Source 127 Priority
// #define RV_PLIC_PRIO127_REG_OFFSET 0x1fc
// #define RV_PLIC_PRIO127_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO127_PRIO127_MASK 0x3u
// #define RV_PLIC_PRIO127_PRIO127_OFFSET 0
// #define RV_PLIC_PRIO127_PRIO127_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO127_PRIO127_MASK, .index = RV_PLIC_PRIO127_PRIO127_OFFSET })

// // Interrupt Source 128 Priority
// #define RV_PLIC_PRIO128_REG_OFFSET 0x200
// #define RV_PLIC_PRIO128_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO128_PRIO128_MASK 0x3u
// #define RV_PLIC_PRIO128_PRIO128_OFFSET 0
// #define RV_PLIC_PRIO128_PRIO128_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO128_PRIO128_MASK, .index = RV_PLIC_PRIO128_PRIO128_OFFSET })

// // Interrupt Source 129 Priority
// #define RV_PLIC_PRIO129_REG_OFFSET 0x204
// #define RV_PLIC_PRIO129_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO129_PRIO129_MASK 0x3u
// #define RV_PLIC_PRIO129_PRIO129_OFFSET 0
// #define RV_PLIC_PRIO129_PRIO129_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO129_PRIO129_MASK, .index = RV_PLIC_PRIO129_PRIO129_OFFSET })

// // Interrupt Source 130 Priority
// #define RV_PLIC_PRIO130_REG_OFFSET 0x208
// #define RV_PLIC_PRIO130_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO130_PRIO130_MASK 0x3u
// #define RV_PLIC_PRIO130_PRIO130_OFFSET 0
// #define RV_PLIC_PRIO130_PRIO130_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO130_PRIO130_MASK, .index = RV_PLIC_PRIO130_PRIO130_OFFSET })

// // Interrupt Source 131 Priority
// #define RV_PLIC_PRIO131_REG_OFFSET 0x20c
// #define RV_PLIC_PRIO131_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO131_PRIO131_MASK 0x3u
// #define RV_PLIC_PRIO131_PRIO131_OFFSET 0
// #define RV_PLIC_PRIO131_PRIO131_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO131_PRIO131_MASK, .index = RV_PLIC_PRIO131_PRIO131_OFFSET })

// // Interrupt Source 132 Priority
// #define RV_PLIC_PRIO132_REG_OFFSET 0x210
// #define RV_PLIC_PRIO132_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO132_PRIO132_MASK 0x3u
// #define RV_PLIC_PRIO132_PRIO132_OFFSET 0
// #define RV_PLIC_PRIO132_PRIO132_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO132_PRIO132_MASK, .index = RV_PLIC_PRIO132_PRIO132_OFFSET })

// // Interrupt Source 133 Priority
// #define RV_PLIC_PRIO133_REG_OFFSET 0x214
// #define RV_PLIC_PRIO133_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO133_PRIO133_MASK 0x3u
// #define RV_PLIC_PRIO133_PRIO133_OFFSET 0
// #define RV_PLIC_PRIO133_PRIO133_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO133_PRIO133_MASK, .index = RV_PLIC_PRIO133_PRIO133_OFFSET })

// // Interrupt Source 134 Priority
// #define RV_PLIC_PRIO134_REG_OFFSET 0x218
// #define RV_PLIC_PRIO134_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO134_PRIO134_MASK 0x3u
// #define RV_PLIC_PRIO134_PRIO134_OFFSET 0
// #define RV_PLIC_PRIO134_PRIO134_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO134_PRIO134_MASK, .index = RV_PLIC_PRIO134_PRIO134_OFFSET })

// // Interrupt Source 135 Priority
// #define RV_PLIC_PRIO135_REG_OFFSET 0x21c
// #define RV_PLIC_PRIO135_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO135_PRIO135_MASK 0x3u
// #define RV_PLIC_PRIO135_PRIO135_OFFSET 0
// #define RV_PLIC_PRIO135_PRIO135_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO135_PRIO135_MASK, .index = RV_PLIC_PRIO135_PRIO135_OFFSET })

// // Interrupt Source 136 Priority
// #define RV_PLIC_PRIO136_REG_OFFSET 0x220
// #define RV_PLIC_PRIO136_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO136_PRIO136_MASK 0x3u
// #define RV_PLIC_PRIO136_PRIO136_OFFSET 0
// #define RV_PLIC_PRIO136_PRIO136_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO136_PRIO136_MASK, .index = RV_PLIC_PRIO136_PRIO136_OFFSET })

// // Interrupt Source 137 Priority
// #define RV_PLIC_PRIO137_REG_OFFSET 0x224
// #define RV_PLIC_PRIO137_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO137_PRIO137_MASK 0x3u
// #define RV_PLIC_PRIO137_PRIO137_OFFSET 0
// #define RV_PLIC_PRIO137_PRIO137_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO137_PRIO137_MASK, .index = RV_PLIC_PRIO137_PRIO137_OFFSET })

// // Interrupt Source 138 Priority
// #define RV_PLIC_PRIO138_REG_OFFSET 0x228
// #define RV_PLIC_PRIO138_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO138_PRIO138_MASK 0x3u
// #define RV_PLIC_PRIO138_PRIO138_OFFSET 0
// #define RV_PLIC_PRIO138_PRIO138_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO138_PRIO138_MASK, .index = RV_PLIC_PRIO138_PRIO138_OFFSET })

// // Interrupt Source 139 Priority
// #define RV_PLIC_PRIO139_REG_OFFSET 0x22c
// #define RV_PLIC_PRIO139_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO139_PRIO139_MASK 0x3u
// #define RV_PLIC_PRIO139_PRIO139_OFFSET 0
// #define RV_PLIC_PRIO139_PRIO139_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO139_PRIO139_MASK, .index = RV_PLIC_PRIO139_PRIO139_OFFSET })

// // Interrupt Source 140 Priority
// #define RV_PLIC_PRIO140_REG_OFFSET 0x230
// #define RV_PLIC_PRIO140_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO140_PRIO140_MASK 0x3u
// #define RV_PLIC_PRIO140_PRIO140_OFFSET 0
// #define RV_PLIC_PRIO140_PRIO140_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO140_PRIO140_MASK, .index = RV_PLIC_PRIO140_PRIO140_OFFSET })

// // Interrupt Source 141 Priority
// #define RV_PLIC_PRIO141_REG_OFFSET 0x234
// #define RV_PLIC_PRIO141_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO141_PRIO141_MASK 0x3u
// #define RV_PLIC_PRIO141_PRIO141_OFFSET 0
// #define RV_PLIC_PRIO141_PRIO141_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO141_PRIO141_MASK, .index = RV_PLIC_PRIO141_PRIO141_OFFSET })

// // Interrupt Source 142 Priority
// #define RV_PLIC_PRIO142_REG_OFFSET 0x238
// #define RV_PLIC_PRIO142_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO142_PRIO142_MASK 0x3u
// #define RV_PLIC_PRIO142_PRIO142_OFFSET 0
// #define RV_PLIC_PRIO142_PRIO142_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO142_PRIO142_MASK, .index = RV_PLIC_PRIO142_PRIO142_OFFSET })

// // Interrupt Source 143 Priority
// #define RV_PLIC_PRIO143_REG_OFFSET 0x23c
// #define RV_PLIC_PRIO143_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO143_PRIO143_MASK 0x3u
// #define RV_PLIC_PRIO143_PRIO143_OFFSET 0
// #define RV_PLIC_PRIO143_PRIO143_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO143_PRIO143_MASK, .index = RV_PLIC_PRIO143_PRIO143_OFFSET })

// // Interrupt Source 144 Priority
// #define RV_PLIC_PRIO144_REG_OFFSET 0x240
// #define RV_PLIC_PRIO144_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO144_PRIO144_MASK 0x3u
// #define RV_PLIC_PRIO144_PRIO144_OFFSET 0
// #define RV_PLIC_PRIO144_PRIO144_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO144_PRIO144_MASK, .index = RV_PLIC_PRIO144_PRIO144_OFFSET })

// // Interrupt Source 145 Priority
// #define RV_PLIC_PRIO145_REG_OFFSET 0x244
// #define RV_PLIC_PRIO145_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO145_PRIO145_MASK 0x3u
// #define RV_PLIC_PRIO145_PRIO145_OFFSET 0
// #define RV_PLIC_PRIO145_PRIO145_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO145_PRIO145_MASK, .index = RV_PLIC_PRIO145_PRIO145_OFFSET })

// // Interrupt Source 146 Priority
// #define RV_PLIC_PRIO146_REG_OFFSET 0x248
// #define RV_PLIC_PRIO146_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO146_PRIO146_MASK 0x3u
// #define RV_PLIC_PRIO146_PRIO146_OFFSET 0
// #define RV_PLIC_PRIO146_PRIO146_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO146_PRIO146_MASK, .index = RV_PLIC_PRIO146_PRIO146_OFFSET })

// // Interrupt Source 147 Priority
// #define RV_PLIC_PRIO147_REG_OFFSET 0x24c
// #define RV_PLIC_PRIO147_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO147_PRIO147_MASK 0x3u
// #define RV_PLIC_PRIO147_PRIO147_OFFSET 0
// #define RV_PLIC_PRIO147_PRIO147_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO147_PRIO147_MASK, .index = RV_PLIC_PRIO147_PRIO147_OFFSET })

// // Interrupt Source 148 Priority
// #define RV_PLIC_PRIO148_REG_OFFSET 0x250
// #define RV_PLIC_PRIO148_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO148_PRIO148_MASK 0x3u
// #define RV_PLIC_PRIO148_PRIO148_OFFSET 0
// #define RV_PLIC_PRIO148_PRIO148_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO148_PRIO148_MASK, .index = RV_PLIC_PRIO148_PRIO148_OFFSET })

// // Interrupt Source 149 Priority
// #define RV_PLIC_PRIO149_REG_OFFSET 0x254
// #define RV_PLIC_PRIO149_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO149_PRIO149_MASK 0x3u
// #define RV_PLIC_PRIO149_PRIO149_OFFSET 0
// #define RV_PLIC_PRIO149_PRIO149_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO149_PRIO149_MASK, .index = RV_PLIC_PRIO149_PRIO149_OFFSET })

// // Interrupt Source 150 Priority
// #define RV_PLIC_PRIO150_REG_OFFSET 0x258
// #define RV_PLIC_PRIO150_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO150_PRIO150_MASK 0x3u
// #define RV_PLIC_PRIO150_PRIO150_OFFSET 0
// #define RV_PLIC_PRIO150_PRIO150_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO150_PRIO150_MASK, .index = RV_PLIC_PRIO150_PRIO150_OFFSET })

// // Interrupt Source 151 Priority
// #define RV_PLIC_PRIO151_REG_OFFSET 0x25c
// #define RV_PLIC_PRIO151_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO151_PRIO151_MASK 0x3u
// #define RV_PLIC_PRIO151_PRIO151_OFFSET 0
// #define RV_PLIC_PRIO151_PRIO151_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO151_PRIO151_MASK, .index = RV_PLIC_PRIO151_PRIO151_OFFSET })

// // Interrupt Source 152 Priority
// #define RV_PLIC_PRIO152_REG_OFFSET 0x260
// #define RV_PLIC_PRIO152_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO152_PRIO152_MASK 0x3u
// #define RV_PLIC_PRIO152_PRIO152_OFFSET 0
// #define RV_PLIC_PRIO152_PRIO152_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO152_PRIO152_MASK, .index = RV_PLIC_PRIO152_PRIO152_OFFSET })

// // Interrupt Source 153 Priority
// #define RV_PLIC_PRIO153_REG_OFFSET 0x264
// #define RV_PLIC_PRIO153_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO153_PRIO153_MASK 0x3u
// #define RV_PLIC_PRIO153_PRIO153_OFFSET 0
// #define RV_PLIC_PRIO153_PRIO153_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO153_PRIO153_MASK, .index = RV_PLIC_PRIO153_PRIO153_OFFSET })

// // Interrupt Source 154 Priority
// #define RV_PLIC_PRIO154_REG_OFFSET 0x268
// #define RV_PLIC_PRIO154_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO154_PRIO154_MASK 0x3u
// #define RV_PLIC_PRIO154_PRIO154_OFFSET 0
// #define RV_PLIC_PRIO154_PRIO154_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO154_PRIO154_MASK, .index = RV_PLIC_PRIO154_PRIO154_OFFSET })

// // Interrupt Source 155 Priority
// #define RV_PLIC_PRIO155_REG_OFFSET 0x26c
// #define RV_PLIC_PRIO155_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO155_PRIO155_MASK 0x3u
// #define RV_PLIC_PRIO155_PRIO155_OFFSET 0
// #define RV_PLIC_PRIO155_PRIO155_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO155_PRIO155_MASK, .index = RV_PLIC_PRIO155_PRIO155_OFFSET })

// // Interrupt Source 156 Priority
// #define RV_PLIC_PRIO156_REG_OFFSET 0x270
// #define RV_PLIC_PRIO156_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO156_PRIO156_MASK 0x3u
// #define RV_PLIC_PRIO156_PRIO156_OFFSET 0
// #define RV_PLIC_PRIO156_PRIO156_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO156_PRIO156_MASK, .index = RV_PLIC_PRIO156_PRIO156_OFFSET })

// // Interrupt Source 157 Priority
// #define RV_PLIC_PRIO157_REG_OFFSET 0x274
// #define RV_PLIC_PRIO157_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO157_PRIO157_MASK 0x3u
// #define RV_PLIC_PRIO157_PRIO157_OFFSET 0
// #define RV_PLIC_PRIO157_PRIO157_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO157_PRIO157_MASK, .index = RV_PLIC_PRIO157_PRIO157_OFFSET })

// // Interrupt Source 158 Priority
// #define RV_PLIC_PRIO158_REG_OFFSET 0x278
// #define RV_PLIC_PRIO158_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO158_PRIO158_MASK 0x3u
// #define RV_PLIC_PRIO158_PRIO158_OFFSET 0
// #define RV_PLIC_PRIO158_PRIO158_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO158_PRIO158_MASK, .index = RV_PLIC_PRIO158_PRIO158_OFFSET })

// // Interrupt Source 159 Priority
// #define RV_PLIC_PRIO159_REG_OFFSET 0x27c
// #define RV_PLIC_PRIO159_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO159_PRIO159_MASK 0x3u
// #define RV_PLIC_PRIO159_PRIO159_OFFSET 0
// #define RV_PLIC_PRIO159_PRIO159_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO159_PRIO159_MASK, .index = RV_PLIC_PRIO159_PRIO159_OFFSET })

// // Interrupt Source 160 Priority
// #define RV_PLIC_PRIO160_REG_OFFSET 0x280
// #define RV_PLIC_PRIO160_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO160_PRIO160_MASK 0x3u
// #define RV_PLIC_PRIO160_PRIO160_OFFSET 0
// #define RV_PLIC_PRIO160_PRIO160_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO160_PRIO160_MASK, .index = RV_PLIC_PRIO160_PRIO160_OFFSET })

// // Interrupt Source 161 Priority
// #define RV_PLIC_PRIO161_REG_OFFSET 0x284
// #define RV_PLIC_PRIO161_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO161_PRIO161_MASK 0x3u
// #define RV_PLIC_PRIO161_PRIO161_OFFSET 0
// #define RV_PLIC_PRIO161_PRIO161_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO161_PRIO161_MASK, .index = RV_PLIC_PRIO161_PRIO161_OFFSET })

// // Interrupt Source 162 Priority
// #define RV_PLIC_PRIO162_REG_OFFSET 0x288
// #define RV_PLIC_PRIO162_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO162_PRIO162_MASK 0x3u
// #define RV_PLIC_PRIO162_PRIO162_OFFSET 0
// #define RV_PLIC_PRIO162_PRIO162_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO162_PRIO162_MASK, .index = RV_PLIC_PRIO162_PRIO162_OFFSET })

// // Interrupt Source 163 Priority
// #define RV_PLIC_PRIO163_REG_OFFSET 0x28c
// #define RV_PLIC_PRIO163_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO163_PRIO163_MASK 0x3u
// #define RV_PLIC_PRIO163_PRIO163_OFFSET 0
// #define RV_PLIC_PRIO163_PRIO163_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO163_PRIO163_MASK, .index = RV_PLIC_PRIO163_PRIO163_OFFSET })

// // Interrupt Source 164 Priority
// #define RV_PLIC_PRIO164_REG_OFFSET 0x290
// #define RV_PLIC_PRIO164_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO164_PRIO164_MASK 0x3u
// #define RV_PLIC_PRIO164_PRIO164_OFFSET 0
// #define RV_PLIC_PRIO164_PRIO164_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO164_PRIO164_MASK, .index = RV_PLIC_PRIO164_PRIO164_OFFSET })

// // Interrupt Source 165 Priority
// #define RV_PLIC_PRIO165_REG_OFFSET 0x294
// #define RV_PLIC_PRIO165_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO165_PRIO165_MASK 0x3u
// #define RV_PLIC_PRIO165_PRIO165_OFFSET 0
// #define RV_PLIC_PRIO165_PRIO165_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO165_PRIO165_MASK, .index = RV_PLIC_PRIO165_PRIO165_OFFSET })

// // Interrupt Source 166 Priority
// #define RV_PLIC_PRIO166_REG_OFFSET 0x298
// #define RV_PLIC_PRIO166_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO166_PRIO166_MASK 0x3u
// #define RV_PLIC_PRIO166_PRIO166_OFFSET 0
// #define RV_PLIC_PRIO166_PRIO166_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO166_PRIO166_MASK, .index = RV_PLIC_PRIO166_PRIO166_OFFSET })

// // Interrupt Source 167 Priority
// #define RV_PLIC_PRIO167_REG_OFFSET 0x29c
// #define RV_PLIC_PRIO167_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO167_PRIO167_MASK 0x3u
// #define RV_PLIC_PRIO167_PRIO167_OFFSET 0
// #define RV_PLIC_PRIO167_PRIO167_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO167_PRIO167_MASK, .index = RV_PLIC_PRIO167_PRIO167_OFFSET })

// // Interrupt Source 168 Priority
// #define RV_PLIC_PRIO168_REG_OFFSET 0x2a0
// #define RV_PLIC_PRIO168_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO168_PRIO168_MASK 0x3u
// #define RV_PLIC_PRIO168_PRIO168_OFFSET 0
// #define RV_PLIC_PRIO168_PRIO168_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO168_PRIO168_MASK, .index = RV_PLIC_PRIO168_PRIO168_OFFSET })

// // Interrupt Source 169 Priority
// #define RV_PLIC_PRIO169_REG_OFFSET 0x2a4
// #define RV_PLIC_PRIO169_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO169_PRIO169_MASK 0x3u
// #define RV_PLIC_PRIO169_PRIO169_OFFSET 0
// #define RV_PLIC_PRIO169_PRIO169_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO169_PRIO169_MASK, .index = RV_PLIC_PRIO169_PRIO169_OFFSET })

// // Interrupt Source 170 Priority
// #define RV_PLIC_PRIO170_REG_OFFSET 0x2a8
// #define RV_PLIC_PRIO170_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO170_PRIO170_MASK 0x3u
// #define RV_PLIC_PRIO170_PRIO170_OFFSET 0
// #define RV_PLIC_PRIO170_PRIO170_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO170_PRIO170_MASK, .index = RV_PLIC_PRIO170_PRIO170_OFFSET })

// // Interrupt Source 171 Priority
// #define RV_PLIC_PRIO171_REG_OFFSET 0x2ac
// #define RV_PLIC_PRIO171_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO171_PRIO171_MASK 0x3u
// #define RV_PLIC_PRIO171_PRIO171_OFFSET 0
// #define RV_PLIC_PRIO171_PRIO171_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO171_PRIO171_MASK, .index = RV_PLIC_PRIO171_PRIO171_OFFSET })

// // Interrupt Source 172 Priority
// #define RV_PLIC_PRIO172_REG_OFFSET 0x2b0
// #define RV_PLIC_PRIO172_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO172_PRIO172_MASK 0x3u
// #define RV_PLIC_PRIO172_PRIO172_OFFSET 0
// #define RV_PLIC_PRIO172_PRIO172_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO172_PRIO172_MASK, .index = RV_PLIC_PRIO172_PRIO172_OFFSET })

// // Interrupt Source 173 Priority
// #define RV_PLIC_PRIO173_REG_OFFSET 0x2b4
// #define RV_PLIC_PRIO173_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO173_PRIO173_MASK 0x3u
// #define RV_PLIC_PRIO173_PRIO173_OFFSET 0
// #define RV_PLIC_PRIO173_PRIO173_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO173_PRIO173_MASK, .index = RV_PLIC_PRIO173_PRIO173_OFFSET })

// // Interrupt Source 174 Priority
// #define RV_PLIC_PRIO174_REG_OFFSET 0x2b8
// #define RV_PLIC_PRIO174_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO174_PRIO174_MASK 0x3u
// #define RV_PLIC_PRIO174_PRIO174_OFFSET 0
// #define RV_PLIC_PRIO174_PRIO174_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO174_PRIO174_MASK, .index = RV_PLIC_PRIO174_PRIO174_OFFSET })

// // Interrupt Source 175 Priority
// #define RV_PLIC_PRIO175_REG_OFFSET 0x2bc
// #define RV_PLIC_PRIO175_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO175_PRIO175_MASK 0x3u
// #define RV_PLIC_PRIO175_PRIO175_OFFSET 0
// #define RV_PLIC_PRIO175_PRIO175_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO175_PRIO175_MASK, .index = RV_PLIC_PRIO175_PRIO175_OFFSET })

// // Interrupt Source 176 Priority
// #define RV_PLIC_PRIO176_REG_OFFSET 0x2c0
// #define RV_PLIC_PRIO176_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO176_PRIO176_MASK 0x3u
// #define RV_PLIC_PRIO176_PRIO176_OFFSET 0
// #define RV_PLIC_PRIO176_PRIO176_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO176_PRIO176_MASK, .index = RV_PLIC_PRIO176_PRIO176_OFFSET })

// // Interrupt Source 177 Priority
// #define RV_PLIC_PRIO177_REG_OFFSET 0x2c4
// #define RV_PLIC_PRIO177_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO177_PRIO177_MASK 0x3u
// #define RV_PLIC_PRIO177_PRIO177_OFFSET 0
// #define RV_PLIC_PRIO177_PRIO177_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO177_PRIO177_MASK, .index = RV_PLIC_PRIO177_PRIO177_OFFSET })

// // Interrupt Source 178 Priority
// #define RV_PLIC_PRIO178_REG_OFFSET 0x2c8
// #define RV_PLIC_PRIO178_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO178_PRIO178_MASK 0x3u
// #define RV_PLIC_PRIO178_PRIO178_OFFSET 0
// #define RV_PLIC_PRIO178_PRIO178_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO178_PRIO178_MASK, .index = RV_PLIC_PRIO178_PRIO178_OFFSET })

// // Interrupt Source 179 Priority
// #define RV_PLIC_PRIO179_REG_OFFSET 0x2cc
// #define RV_PLIC_PRIO179_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO179_PRIO179_MASK 0x3u
// #define RV_PLIC_PRIO179_PRIO179_OFFSET 0
// #define RV_PLIC_PRIO179_PRIO179_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO179_PRIO179_MASK, .index = RV_PLIC_PRIO179_PRIO179_OFFSET })

// // Interrupt Source 180 Priority
// #define RV_PLIC_PRIO180_REG_OFFSET 0x2d0
// #define RV_PLIC_PRIO180_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO180_PRIO180_MASK 0x3u
// #define RV_PLIC_PRIO180_PRIO180_OFFSET 0
// #define RV_PLIC_PRIO180_PRIO180_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO180_PRIO180_MASK, .index = RV_PLIC_PRIO180_PRIO180_OFFSET })

// // Interrupt Source 181 Priority
// #define RV_PLIC_PRIO181_REG_OFFSET 0x2d4
// #define RV_PLIC_PRIO181_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO181_PRIO181_MASK 0x3u
// #define RV_PLIC_PRIO181_PRIO181_OFFSET 0
// #define RV_PLIC_PRIO181_PRIO181_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO181_PRIO181_MASK, .index = RV_PLIC_PRIO181_PRIO181_OFFSET })

// // Interrupt Source 182 Priority
// #define RV_PLIC_PRIO182_REG_OFFSET 0x2d8
// #define RV_PLIC_PRIO182_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO182_PRIO182_MASK 0x3u
// #define RV_PLIC_PRIO182_PRIO182_OFFSET 0
// #define RV_PLIC_PRIO182_PRIO182_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO182_PRIO182_MASK, .index = RV_PLIC_PRIO182_PRIO182_OFFSET })

// // Interrupt Source 183 Priority
// #define RV_PLIC_PRIO183_REG_OFFSET 0x2dc
// #define RV_PLIC_PRIO183_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO183_PRIO183_MASK 0x3u
// #define RV_PLIC_PRIO183_PRIO183_OFFSET 0
// #define RV_PLIC_PRIO183_PRIO183_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO183_PRIO183_MASK, .index = RV_PLIC_PRIO183_PRIO183_OFFSET })

// // Interrupt Source 184 Priority
// #define RV_PLIC_PRIO184_REG_OFFSET 0x2e0
// #define RV_PLIC_PRIO184_REG_RESVAL 0x0u
// #define RV_PLIC_PRIO184_PRIO184_MASK 0x3u
// #define RV_PLIC_PRIO184_PRIO184_OFFSET 0
// #define RV_PLIC_PRIO184_PRIO184_FIELD 
//   ((bitfield_field32_t) { .mask = RV_PLIC_PRIO184_PRIO184_MASK, .index = RV_PLIC_PRIO184_PRIO184_OFFSET })

// Interrupt Pending (common parameters)
#define RV_PLIC_IP_P_FIELD_WIDTH 1
#define RV_PLIC_IP_MULTIREG_COUNT 1

// Interrupt Pending
#define RV_PLIC_IP_0_REG_OFFSET 0x1000
#define RV_PLIC_IP_0_REG_RESVAL 0x0u
// #define RV_PLIC_IP_0_P_0_BIT 0
#define RV_PLIC_IP_0_P_1_BIT 1
#define RV_PLIC_IP_0_P_2_BIT 2
#define RV_PLIC_IP_0_P_3_BIT 3
#define RV_PLIC_IP_0_P_4_BIT 4
#define RV_PLIC_IP_0_P_5_BIT 5
#define RV_PLIC_IP_0_P_6_BIT 6
#define RV_PLIC_IP_0_P_7_BIT 7
#define RV_PLIC_IP_0_P_8_BIT 8
#define RV_PLIC_IP_0_P_9_BIT 9
#define RV_PLIC_IP_0_P_10_BIT 10
#define RV_PLIC_IP_0_P_11_BIT 11
#define RV_PLIC_IP_0_P_12_BIT 12
#define RV_PLIC_IP_0_P_13_BIT 13
#define RV_PLIC_IP_0_P_14_BIT 14
#define RV_PLIC_IP_0_P_15_BIT 15
#define RV_PLIC_IP_0_P_16_BIT 16
#define RV_PLIC_IP_0_P_17_BIT 17
// #define RV_PLIC_IP_0_P_18_BIT 18
// #define RV_PLIC_IP_0_P_19_BIT 19
// #define RV_PLIC_IP_0_P_20_BIT 20
// #define RV_PLIC_IP_0_P_21_BIT 21
// #define RV_PLIC_IP_0_P_22_BIT 22
// #define RV_PLIC_IP_0_P_23_BIT 23
// #define RV_PLIC_IP_0_P_24_BIT 24
// #define RV_PLIC_IP_0_P_25_BIT 25
// #define RV_PLIC_IP_0_P_26_BIT 26
// #define RV_PLIC_IP_0_P_27_BIT 27
// #define RV_PLIC_IP_0_P_28_BIT 28
// #define RV_PLIC_IP_0_P_29_BIT 29
// #define RV_PLIC_IP_0_P_30_BIT 30
// #define RV_PLIC_IP_0_P_31_BIT 31
// #define RV_PLIC_IP_0_P_32_BIT 32
// #define RV_PLIC_IP_0_P_33_BIT 33
// #define RV_PLIC_IP_0_P_34_BIT 34
// #define RV_PLIC_IP_0_P_35_BIT 35
// #define RV_PLIC_IP_0_P_36_BIT 36
// #define RV_PLIC_IP_0_P_37_BIT 37
// #define RV_PLIC_IP_0_P_38_BIT 38
// #define RV_PLIC_IP_0_P_39_BIT 39
// #define RV_PLIC_IP_0_P_40_BIT 40
// #define RV_PLIC_IP_0_P_41_BIT 41 
// #define RV_PLIC_IP_0_P_42_BIT 42
// #define RV_PLIC_IP_0_P_43_BIT 43
// #define RV_PLIC_IP_0_P_44_BIT 44
// #define RV_PLIC_IP_0_P_45_BIT 45
// #define RV_PLIC_IP_0_P_46_BIT 46
// #define RV_PLIC_IP_0_P_47_BIT 47
// #define RV_PLIC_IP_0_P_48_BIT 48
// #define RV_PLIC_IP_0_P_49_BIT 49
// #define RV_PLIC_IP_0_P_50_BIT 50
// #define RV_PLIC_IP_0_P_51_BIT 51
// #define RV_PLIC_IP_0_P_52_BIT 52
// #define RV_PLIC_IP_0_P_53_BIT 53
// #define RV_PLIC_IP_0_P_54_BIT 54
// #define RV_PLIC_IP_0_P_55_BIT 55
// #define RV_PLIC_IP_0_P_56_BIT 56
// #define RV_PLIC_IP_0_P_57_BIT 57
// #define RV_PLIC_IP_0_P_58_BIT 58
// #define RV_PLIC_IP_0_P_59_BIT 59
// #define RV_PLIC_IP_0_P_60_BIT 60
// #define RV_PLIC_IP_0_P_61_BIT 61
// #define RV_PLIC_IP_0_P_62_BIT 62
// #define RV_PLIC_IP_0_P_63_BIT 63
// #define RV_PLIC_IP_0_P_64_BIT 64
// #define RV_PLIC_IP_0_P_65_BIT 65
// #define RV_PLIC_IP_0_P_66_BIT 66
// #define RV_PLIC_IP_0_P_67_BIT 67
// #define RV_PLIC_IP_0_P_68_BIT 68
// #define RV_PLIC_IP_0_P_69_BIT 69
// #define RV_PLIC_IP_0_P_70_BIT 70
// #define RV_PLIC_IP_0_P_71_BIT 71
// #define RV_PLIC_IP_0_P_72_BIT 72 
// #define RV_PLIC_IP_0_P_73_BIT 73
// #define RV_PLIC_IP_0_P_74_BIT 74
// #define RV_PLIC_IP_0_P_75_BIT 75
// #define RV_PLIC_IP_0_P_76_BIT 76
// #define RV_PLIC_IP_0_P_77_BIT 77
// #define RV_PLIC_IP_0_P_78_BIT 78
// #define RV_PLIC_IP_0_P_79_BIT 79
// #define RV_PLIC_IP_0_P_80_BIT 80
// #define RV_PLIC_IP_0_P_81_BIT 81
// #define RV_PLIC_IP_0_P_81_BIT 82

// // Interrupt Pending
// #define RV_PLIC_IP_1_REG_OFFSET 0x1004
// #define RV_PLIC_IP_1_REG_RESVAL 0x0u
// #define RV_PLIC_IP_1_P_32_BIT 0
// #define RV_PLIC_IP_1_P_33_BIT 1
// #define RV_PLIC_IP_1_P_34_BIT 2
// #define RV_PLIC_IP_1_P_35_BIT 3
// #define RV_PLIC_IP_1_P_36_BIT 4
// #define RV_PLIC_IP_1_P_37_BIT 5
// #define RV_PLIC_IP_1_P_38_BIT 6
// #define RV_PLIC_IP_1_P_39_BIT 7
// #define RV_PLIC_IP_1_P_40_BIT 8
// #define RV_PLIC_IP_1_P_41_BIT 9
// #define RV_PLIC_IP_1_P_42_BIT 10
// #define RV_PLIC_IP_1_P_43_BIT 11
// #define RV_PLIC_IP_1_P_44_BIT 12
// #define RV_PLIC_IP_1_P_45_BIT 13
// #define RV_PLIC_IP_1_P_46_BIT 14
// #define RV_PLIC_IP_1_P_47_BIT 15
// #define RV_PLIC_IP_1_P_48_BIT 16
// #define RV_PLIC_IP_1_P_49_BIT 17
// #define RV_PLIC_IP_1_P_50_BIT 18
// #define RV_PLIC_IP_1_P_51_BIT 19
// #define RV_PLIC_IP_1_P_52_BIT 20
// #define RV_PLIC_IP_1_P_53_BIT 21
// #define RV_PLIC_IP_1_P_54_BIT 22
// #define RV_PLIC_IP_1_P_55_BIT 23
// #define RV_PLIC_IP_1_P_56_BIT 24
// #define RV_PLIC_IP_1_P_57_BIT 25
// #define RV_PLIC_IP_1_P_58_BIT 26
// #define RV_PLIC_IP_1_P_59_BIT 27
// #define RV_PLIC_IP_1_P_60_BIT 28
// #define RV_PLIC_IP_1_P_61_BIT 29
// #define RV_PLIC_IP_1_P_62_BIT 30
// #define RV_PLIC_IP_1_P_63_BIT 31

// // Interrupt Pending
// #define RV_PLIC_IP_2_REG_OFFSET 0x1008
// #define RV_PLIC_IP_2_REG_RESVAL 0x0u
// #define RV_PLIC_IP_2_P_64_BIT 0
// #define RV_PLIC_IP_2_P_65_BIT 1
// #define RV_PLIC_IP_2_P_66_BIT 2
// #define RV_PLIC_IP_2_P_67_BIT 3
// #define RV_PLIC_IP_2_P_68_BIT 4
// #define RV_PLIC_IP_2_P_69_BIT 5
// #define RV_PLIC_IP_2_P_70_BIT 6
// #define RV_PLIC_IP_2_P_71_BIT 7
// #define RV_PLIC_IP_2_P_72_BIT 8
// #define RV_PLIC_IP_2_P_73_BIT 9
// #define RV_PLIC_IP_2_P_74_BIT 10
// #define RV_PLIC_IP_2_P_75_BIT 11
// #define RV_PLIC_IP_2_P_76_BIT 12
// #define RV_PLIC_IP_2_P_77_BIT 13
// #define RV_PLIC_IP_2_P_78_BIT 14
// #define RV_PLIC_IP_2_P_79_BIT 15
// #define RV_PLIC_IP_2_P_80_BIT 16
// #define RV_PLIC_IP_2_P_81_BIT 17
// #define RV_PLIC_IP_2_P_82_BIT 18
// #define RV_PLIC_IP_2_P_83_BIT 19
// #define RV_PLIC_IP_2_P_84_BIT 20
// #define RV_PLIC_IP_2_P_85_BIT 21
// #define RV_PLIC_IP_2_P_86_BIT 22
// #define RV_PLIC_IP_2_P_87_BIT 23
// #define RV_PLIC_IP_2_P_88_BIT 24
// #define RV_PLIC_IP_2_P_89_BIT 25
// #define RV_PLIC_IP_2_P_90_BIT 26
// #define RV_PLIC_IP_2_P_91_BIT 27
// #define RV_PLIC_IP_2_P_92_BIT 28
// #define RV_PLIC_IP_2_P_93_BIT 29
// #define RV_PLIC_IP_2_P_94_BIT 30
// #define RV_PLIC_IP_2_P_95_BIT 31

// // Interrupt Pending
// #define RV_PLIC_IP_3_REG_OFFSET 0x100c
// #define RV_PLIC_IP_3_REG_RESVAL 0x0u
// #define RV_PLIC_IP_3_P_96_BIT 0
// #define RV_PLIC_IP_3_P_97_BIT 1
// #define RV_PLIC_IP_3_P_98_BIT 2
// #define RV_PLIC_IP_3_P_99_BIT 3
// #define RV_PLIC_IP_3_P_100_BIT 4
// #define RV_PLIC_IP_3_P_101_BIT 5
// #define RV_PLIC_IP_3_P_102_BIT 6
// #define RV_PLIC_IP_3_P_103_BIT 7
// #define RV_PLIC_IP_3_P_104_BIT 8
// #define RV_PLIC_IP_3_P_105_BIT 9
// #define RV_PLIC_IP_3_P_106_BIT 10
// #define RV_PLIC_IP_3_P_107_BIT 11
// #define RV_PLIC_IP_3_P_108_BIT 12
// #define RV_PLIC_IP_3_P_109_BIT 13
// #define RV_PLIC_IP_3_P_110_BIT 14
// #define RV_PLIC_IP_3_P_111_BIT 15
// #define RV_PLIC_IP_3_P_112_BIT 16
// #define RV_PLIC_IP_3_P_113_BIT 17
// #define RV_PLIC_IP_3_P_114_BIT 18
// #define RV_PLIC_IP_3_P_115_BIT 19
// #define RV_PLIC_IP_3_P_116_BIT 20
// #define RV_PLIC_IP_3_P_117_BIT 21
// #define RV_PLIC_IP_3_P_118_BIT 22
// #define RV_PLIC_IP_3_P_119_BIT 23
// #define RV_PLIC_IP_3_P_120_BIT 24
// #define RV_PLIC_IP_3_P_121_BIT 25
// #define RV_PLIC_IP_3_P_122_BIT 26
// #define RV_PLIC_IP_3_P_123_BIT 27
// #define RV_PLIC_IP_3_P_124_BIT 28
// #define RV_PLIC_IP_3_P_125_BIT 29
// #define RV_PLIC_IP_3_P_126_BIT 30
// #define RV_PLIC_IP_3_P_127_BIT 31

// // Interrupt Pending
// #define RV_PLIC_IP_4_REG_OFFSET 0x1010
// #define RV_PLIC_IP_4_REG_RESVAL 0x0u
// #define RV_PLIC_IP_4_P_128_BIT 0
// #define RV_PLIC_IP_4_P_129_BIT 1
// #define RV_PLIC_IP_4_P_130_BIT 2
// #define RV_PLIC_IP_4_P_131_BIT 3
// #define RV_PLIC_IP_4_P_132_BIT 4
// #define RV_PLIC_IP_4_P_133_BIT 5
// #define RV_PLIC_IP_4_P_134_BIT 6
// #define RV_PLIC_IP_4_P_135_BIT 7
// #define RV_PLIC_IP_4_P_136_BIT 8
// #define RV_PLIC_IP_4_P_137_BIT 9
// #define RV_PLIC_IP_4_P_138_BIT 10
// #define RV_PLIC_IP_4_P_139_BIT 11
// #define RV_PLIC_IP_4_P_140_BIT 12
// #define RV_PLIC_IP_4_P_141_BIT 13
// #define RV_PLIC_IP_4_P_142_BIT 14
// #define RV_PLIC_IP_4_P_143_BIT 15
// #define RV_PLIC_IP_4_P_144_BIT 16
// #define RV_PLIC_IP_4_P_145_BIT 17
// #define RV_PLIC_IP_4_P_146_BIT 18
// #define RV_PLIC_IP_4_P_147_BIT 19
// #define RV_PLIC_IP_4_P_148_BIT 20
// #define RV_PLIC_IP_4_P_149_BIT 21
// #define RV_PLIC_IP_4_P_150_BIT 22
// #define RV_PLIC_IP_4_P_151_BIT 23
// #define RV_PLIC_IP_4_P_152_BIT 24
// #define RV_PLIC_IP_4_P_153_BIT 25
// #define RV_PLIC_IP_4_P_154_BIT 26
// #define RV_PLIC_IP_4_P_155_BIT 27
// #define RV_PLIC_IP_4_P_156_BIT 28
// #define RV_PLIC_IP_4_P_157_BIT 29
// #define RV_PLIC_IP_4_P_158_BIT 30
// #define RV_PLIC_IP_4_P_159_BIT 31

// // Interrupt Pending
// #define RV_PLIC_IP_5_REG_OFFSET 0x1014
// #define RV_PLIC_IP_5_REG_RESVAL 0x0u
// #define RV_PLIC_IP_5_P_160_BIT 0
// #define RV_PLIC_IP_5_P_161_BIT 1
// #define RV_PLIC_IP_5_P_162_BIT 2
// #define RV_PLIC_IP_5_P_163_BIT 3
// #define RV_PLIC_IP_5_P_164_BIT 4
// #define RV_PLIC_IP_5_P_165_BIT 5
// #define RV_PLIC_IP_5_P_166_BIT 6
// #define RV_PLIC_IP_5_P_167_BIT 7
// #define RV_PLIC_IP_5_P_168_BIT 8
// #define RV_PLIC_IP_5_P_169_BIT 9
// #define RV_PLIC_IP_5_P_170_BIT 10
// #define RV_PLIC_IP_5_P_171_BIT 11
// #define RV_PLIC_IP_5_P_172_BIT 12
// #define RV_PLIC_IP_5_P_173_BIT 13
// #define RV_PLIC_IP_5_P_174_BIT 14
// #define RV_PLIC_IP_5_P_175_BIT 15
// #define RV_PLIC_IP_5_P_176_BIT 16
// #define RV_PLIC_IP_5_P_177_BIT 17
// #define RV_PLIC_IP_5_P_178_BIT 18
// #define RV_PLIC_IP_5_P_179_BIT 19
// #define RV_PLIC_IP_5_P_180_BIT 20
// #define RV_PLIC_IP_5_P_181_BIT 21
// #define RV_PLIC_IP_5_P_182_BIT 22
// #define RV_PLIC_IP_5_P_183_BIT 23
// #define RV_PLIC_IP_5_P_184_BIT 24

// Interrupt Enable for Target 0 (common parameters)
#define RV_PLIC_IE0_E_FIELD_WIDTH 8
#define RV_PLIC_IE0_MULTIREG_COUNT 1

// Interrupt Enable for Target 0
#define RV_PLIC_IE0_0_REG_OFFSET 0x2000
#define RV_PLIC_IE0_0_REG_RESVAL 0x0u
#define RV_PLIC_IE0_0_E_1_BIT 1
#define RV_PLIC_IE0_0_E_2_BIT 8
#define RV_PLIC_IE0_0_E_3_BIT 16
// #define RV_PLIC_IE0_0_E_4_BIT 24
// #define RV_PLIC_IE0_0_E_5_BIT 32
// #define RV_PLIC_IE0_0_E_6_BIT 40
// #define RV_PLIC_IE0_0_E_7_BIT 48
// #define RV_PLIC_IE0_0_E_8_BIT 56
// #define RV_PLIC_IE0_0_E_9_BIT 64
// #define RV_PLIC_IE0_0_E_10_BIT 72
// #define RV_PLIC_IE0_0_E_11_BIT 80

// #define RV_PLIC_IE0_1_REG_OFFSET 0x2080
// #define RV_PLIC_IE0_1_REG_RESVAL 0x0u
// #define RV_PLIC_IE0_1_E_1_BIT 1
// #define RV_PLIC_IE0_1_E_2_BIT 8
// #define RV_PLIC_IE0_1_E_3_BIT 16
// #define RV_PLIC_IE0_1_E_4_BIT 24
// #define RV_PLIC_IE0_1_E_5_BIT 32
// #define RV_PLIC_IE0_1_E_6_BIT 40
// #define RV_PLIC_IE0_1_E_7_BIT 48
// #define RV_PLIC_IE0_1_E_8_BIT 56
// #define RV_PLIC_IE0_1_E_9_BIT 64
// #define RV_PLIC_IE0_1_E_10_BIT 72
// #define RV_PLIC_IE0_1_E_11_BIT 80


// // Interrupt Enable for Target 0
// #define RV_PLIC_IE0_1_REG_OFFSET 0x2004
// #define RV_PLIC_IE0_1_REG_RESVAL 0x0u
// #define RV_PLIC_IE0_1_E_32_BIT 0
// #define RV_PLIC_IE0_1_E_33_BIT 1
// #define RV_PLIC_IE0_1_E_34_BIT 2
// #define RV_PLIC_IE0_1_E_35_BIT 3
// #define RV_PLIC_IE0_1_E_36_BIT 4
// #define RV_PLIC_IE0_1_E_37_BIT 5
// #define RV_PLIC_IE0_1_E_38_BIT 6
// #define RV_PLIC_IE0_1_E_39_BIT 7
// #define RV_PLIC_IE0_1_E_40_BIT 8
// #define RV_PLIC_IE0_1_E_41_BIT 9
// #define RV_PLIC_IE0_1_E_42_BIT 10
// #define RV_PLIC_IE0_1_E_43_BIT 11
// #define RV_PLIC_IE0_1_E_44_BIT 12
// #define RV_PLIC_IE0_1_E_45_BIT 13
// #define RV_PLIC_IE0_1_E_46_BIT 14
// #define RV_PLIC_IE0_1_E_47_BIT 15
// #define RV_PLIC_IE0_1_E_48_BIT 16
// #define RV_PLIC_IE0_1_E_49_BIT 17
// #define RV_PLIC_IE0_1_E_50_BIT 18
// #define RV_PLIC_IE0_1_E_51_BIT 19
// #define RV_PLIC_IE0_1_E_52_BIT 20
// #define RV_PLIC_IE0_1_E_53_BIT 21
// #define RV_PLIC_IE0_1_E_54_BIT 22
// #define RV_PLIC_IE0_1_E_55_BIT 23
// #define RV_PLIC_IE0_1_E_56_BIT 24
// #define RV_PLIC_IE0_1_E_57_BIT 25
// #define RV_PLIC_IE0_1_E_58_BIT 26
// #define RV_PLIC_IE0_1_E_59_BIT 27
// #define RV_PLIC_IE0_1_E_60_BIT 28
// #define RV_PLIC_IE0_1_E_61_BIT 29
// #define RV_PLIC_IE0_1_E_62_BIT 30
// #define RV_PLIC_IE0_1_E_63_BIT 31

// // Interrupt Enable for Target 0
// #define RV_PLIC_IE0_2_REG_OFFSET 0x2008
// #define RV_PLIC_IE0_2_REG_RESVAL 0x0u
// #define RV_PLIC_IE0_2_E_64_BIT 0
// #define RV_PLIC_IE0_2_E_65_BIT 1
// #define RV_PLIC_IE0_2_E_66_BIT 2
// #define RV_PLIC_IE0_2_E_67_BIT 3
// #define RV_PLIC_IE0_2_E_68_BIT 4
// #define RV_PLIC_IE0_2_E_69_BIT 5
// #define RV_PLIC_IE0_2_E_70_BIT 6
// #define RV_PLIC_IE0_2_E_71_BIT 7
// #define RV_PLIC_IE0_2_E_72_BIT 8
// #define RV_PLIC_IE0_2_E_73_BIT 9
// #define RV_PLIC_IE0_2_E_74_BIT 10
// #define RV_PLIC_IE0_2_E_75_BIT 11
// #define RV_PLIC_IE0_2_E_76_BIT 12
// #define RV_PLIC_IE0_2_E_77_BIT 13
// #define RV_PLIC_IE0_2_E_78_BIT 14
// #define RV_PLIC_IE0_2_E_79_BIT 15
// #define RV_PLIC_IE0_2_E_80_BIT 16
// #define RV_PLIC_IE0_2_E_81_BIT 17
// #define RV_PLIC_IE0_2_E_82_BIT 18
// #define RV_PLIC_IE0_2_E_83_BIT 19
// #define RV_PLIC_IE0_2_E_84_BIT 20
// #define RV_PLIC_IE0_2_E_85_BIT 21
// #define RV_PLIC_IE0_2_E_86_BIT 22
// #define RV_PLIC_IE0_2_E_87_BIT 23
// #define RV_PLIC_IE0_2_E_88_BIT 24
// #define RV_PLIC_IE0_2_E_89_BIT 25
// #define RV_PLIC_IE0_2_E_90_BIT 26
// #define RV_PLIC_IE0_2_E_91_BIT 27
// #define RV_PLIC_IE0_2_E_92_BIT 28
// #define RV_PLIC_IE0_2_E_93_BIT 29
// #define RV_PLIC_IE0_2_E_94_BIT 30
// #define RV_PLIC_IE0_2_E_95_BIT 31

// // Interrupt Enable for Target 0
// #define RV_PLIC_IE0_3_REG_OFFSET 0x200c
// #define RV_PLIC_IE0_3_REG_RESVAL 0x0u
// #define RV_PLIC_IE0_3_E_96_BIT 0
// #define RV_PLIC_IE0_3_E_97_BIT 1
// #define RV_PLIC_IE0_3_E_98_BIT 2
// #define RV_PLIC_IE0_3_E_99_BIT 3
// #define RV_PLIC_IE0_3_E_100_BIT 4
// #define RV_PLIC_IE0_3_E_101_BIT 5
// #define RV_PLIC_IE0_3_E_102_BIT 6
// #define RV_PLIC_IE0_3_E_103_BIT 7
// #define RV_PLIC_IE0_3_E_104_BIT 8
// #define RV_PLIC_IE0_3_E_105_BIT 9
// #define RV_PLIC_IE0_3_E_106_BIT 10
// #define RV_PLIC_IE0_3_E_107_BIT 11
// #define RV_PLIC_IE0_3_E_108_BIT 12
// #define RV_PLIC_IE0_3_E_109_BIT 13
// #define RV_PLIC_IE0_3_E_110_BIT 14
// #define RV_PLIC_IE0_3_E_111_BIT 15
// #define RV_PLIC_IE0_3_E_112_BIT 16
// #define RV_PLIC_IE0_3_E_113_BIT 17
// #define RV_PLIC_IE0_3_E_114_BIT 18
// #define RV_PLIC_IE0_3_E_115_BIT 19
// #define RV_PLIC_IE0_3_E_116_BIT 20
// #define RV_PLIC_IE0_3_E_117_BIT 21
// #define RV_PLIC_IE0_3_E_118_BIT 22
// #define RV_PLIC_IE0_3_E_119_BIT 23
// #define RV_PLIC_IE0_3_E_120_BIT 24
// #define RV_PLIC_IE0_3_E_121_BIT 25
// #define RV_PLIC_IE0_3_E_122_BIT 26
// #define RV_PLIC_IE0_3_E_123_BIT 27
// #define RV_PLIC_IE0_3_E_124_BIT 28
// #define RV_PLIC_IE0_3_E_125_BIT 29
// #define RV_PLIC_IE0_3_E_126_BIT 30
// #define RV_PLIC_IE0_3_E_127_BIT 31

// // Interrupt Enable for Target 0
// #define RV_PLIC_IE0_4_REG_OFFSET 0x2010
// #define RV_PLIC_IE0_4_REG_RESVAL 0x0u
// #define RV_PLIC_IE0_4_E_128_BIT 0
// #define RV_PLIC_IE0_4_E_129_BIT 1
// #define RV_PLIC_IE0_4_E_130_BIT 2
// #define RV_PLIC_IE0_4_E_131_BIT 3
// #define RV_PLIC_IE0_4_E_132_BIT 4
// #define RV_PLIC_IE0_4_E_133_BIT 5
// #define RV_PLIC_IE0_4_E_134_BIT 6
// #define RV_PLIC_IE0_4_E_135_BIT 7
// #define RV_PLIC_IE0_4_E_136_BIT 8
// #define RV_PLIC_IE0_4_E_137_BIT 9
// #define RV_PLIC_IE0_4_E_138_BIT 10
// #define RV_PLIC_IE0_4_E_139_BIT 11
// #define RV_PLIC_IE0_4_E_140_BIT 12
// #define RV_PLIC_IE0_4_E_141_BIT 13
// #define RV_PLIC_IE0_4_E_142_BIT 14
// #define RV_PLIC_IE0_4_E_143_BIT 15
// #define RV_PLIC_IE0_4_E_144_BIT 16
// #define RV_PLIC_IE0_4_E_145_BIT 17
// #define RV_PLIC_IE0_4_E_146_BIT 18
// #define RV_PLIC_IE0_4_E_147_BIT 19
// #define RV_PLIC_IE0_4_E_148_BIT 20
// #define RV_PLIC_IE0_4_E_149_BIT 21
// #define RV_PLIC_IE0_4_E_150_BIT 22
// #define RV_PLIC_IE0_4_E_151_BIT 23
// #define RV_PLIC_IE0_4_E_152_BIT 24
// #define RV_PLIC_IE0_4_E_153_BIT 25
// #define RV_PLIC_IE0_4_E_154_BIT 26
// #define RV_PLIC_IE0_4_E_155_BIT 27
// #define RV_PLIC_IE0_4_E_156_BIT 28
// #define RV_PLIC_IE0_4_E_157_BIT 29
// #define RV_PLIC_IE0_4_E_158_BIT 30
// #define RV_PLIC_IE0_4_E_159_BIT 31

// // Interrupt Enable for Target 0
// #define RV_PLIC_IE0_5_REG_OFFSET 0x2014
// #define RV_PLIC_IE0_5_REG_RESVAL 0x0u
// #define RV_PLIC_IE0_5_E_160_BIT 0
// #define RV_PLIC_IE0_5_E_161_BIT 1
// #define RV_PLIC_IE0_5_E_162_BIT 2
// #define RV_PLIC_IE0_5_E_163_BIT 3
// #define RV_PLIC_IE0_5_E_164_BIT 4
// #define RV_PLIC_IE0_5_E_165_BIT 5
// #define RV_PLIC_IE0_5_E_166_BIT 6
// #define RV_PLIC_IE0_5_E_167_BIT 7
// #define RV_PLIC_IE0_5_E_168_BIT 8
// #define RV_PLIC_IE0_5_E_169_BIT 9
// #define RV_PLIC_IE0_5_E_170_BIT 10
// #define RV_PLIC_IE0_5_E_171_BIT 11
// #define RV_PLIC_IE0_5_E_172_BIT 12
// #define RV_PLIC_IE0_5_E_173_BIT 13
// #define RV_PLIC_IE0_5_E_174_BIT 14
// #define RV_PLIC_IE0_5_E_175_BIT 15
// #define RV_PLIC_IE0_5_E_176_BIT 16
// #define RV_PLIC_IE0_5_E_177_BIT 17
// #define RV_PLIC_IE0_5_E_178_BIT 18
// #define RV_PLIC_IE0_5_E_179_BIT 19
// #define RV_PLIC_IE0_5_E_180_BIT 20
// #define RV_PLIC_IE0_5_E_181_BIT 21
// #define RV_PLIC_IE0_5_E_182_BIT 22
// #define RV_PLIC_IE0_5_E_183_BIT 23
// #define RV_PLIC_IE0_5_E_184_BIT 24

// Threshold of priority for Target 0
#define RV_PLIC_THRESHOLD0_REG_OFFSET 0x200000
#define RV_PLIC_THRESHOLD0_REG_RESVAL 0x0u
#define RV_PLIC_THRESHOLD0_THRESHOLD0_MASK 0x3u
#define RV_PLIC_THRESHOLD0_THRESHOLD0_OFFSET 0
#define RV_PLIC_THRESHOLD0_THRESHOLD0_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_THRESHOLD0_THRESHOLD0_MASK, .index = RV_PLIC_THRESHOLD0_THRESHOLD0_OFFSET })

// Claim interrupt by read, complete interrupt by write for Target 0.
#define RV_PLIC_CC0_REG_OFFSET 0x200000
#define RV_PLIC_CC0_REG_RESVAL 0x0u
#define RV_PLIC_CC0_CC0_MASK 0xffu
#define RV_PLIC_CC0_CC0_OFFSET 0
#define RV_PLIC_CC0_CC0_FIELD \
  ((bitfield_field32_t) { .mask = RV_PLIC_CC0_CC0_MASK, .index = RV_PLIC_CC0_CC0_OFFSET })

// msip for Hart 0.
#define RV_PLIC_MSIP0_REG_OFFSET 0x4000000
#define RV_PLIC_MSIP0_REG_RESVAL 0x0u
#define RV_PLIC_MSIP0_MSIP0_BIT 0

// Alert Test Register.
#define RV_PLIC_ALERT_TEST_REG_OFFSET 0x4004000
#define RV_PLIC_ALERT_TEST_REG_RESVAL 0x0u
#define RV_PLIC_ALERT_TEST_FATAL_FAULT_BIT 0

#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _RV_PLIC_REG_DEFS_
// End generated register defines for rv_plic