# Copyright lowRISC contributors.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

package(default_visibility = ["//visibility:public"])

load("//rules:opentitan.bzl", "OPENTITAN_CPU")

cc_library(
    name = "ecdh_p256",
    srcs = ["ecdh_p256.c"],
    hdrs = ["ecdh_p256.h"],
    target_compatible_with = [OPENTITAN_CPU],
    deps = [
        ":p256_common",
        "//sw/device/lib/base:hardened",
        "//sw/device/lib/base:hardened_memory",
        "//sw/device/lib/crypto/drivers:otbn",
        "//sw/otbn/crypto:p256_ecdh",
    ],
)

cc_library(
    name = "ecdsa_p256",
    srcs = ["ecdsa_p256.c"],
    hdrs = ["ecdsa_p256.h"],
    target_compatible_with = [OPENTITAN_CPU],
    deps = [
        ":p256_common",
        "//sw/device/lib/base:hardened",
        "//sw/device/lib/base:hardened_memory",
        "//sw/device/lib/crypto/drivers:otbn",
        "//sw/otbn/crypto:sm2_ecdsa",
        "//sw/device/lib/runtime:log"
    ],
)

cc_library(
    name = "p256_common",
    srcs = ["p256_common.c"],
    hdrs = ["p256_common.h"],
    deps = [
        "//sw/device/lib/crypto/drivers:otbn",
        "//sw/device/lib/crypto/impl:status",
    ],
)
