// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/lib/runtime/log.h"

#include <stdio.h>
#include <stdarg.h>
// #include <klib.h>
#include "printf.h"

void print_log(log_level_t level, const char* file, int line, const char* format, ...) {

  // 打印日志级别  
  switch(level) {
    case LOG_INFO:
      printf("[INFO] "); 
      break;
    case LOG_WARN:
      printf("[WARN] ");
      break;
    case LOG_ERROR:
      printf("[ERROR] ");
      break;
    case LOG_FATAL:
      printf("[FATAL] ");
      break;
  }

  // 打印文件名和行号
  printf("(%s:%d) ", file, line);

  // 打印消息  
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  va_end(args);
  
  printf("\n");
}




