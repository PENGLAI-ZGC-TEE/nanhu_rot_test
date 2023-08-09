#ifndef OPENTITAN_SW_DEVICE_LIB_RUNTIME_LOG_H_
#define OPENTITAN_SW_DEVICE_LIB_RUNTIME_LOG_H_

#include <stdio.h>
#include <stdarg.h>
// #include <klib.h>
#include "printf.h"

// 定义日志级别
typedef enum {
  LOG_INFO,
  LOG_WARNING,
  LOG_ERROR, 
  LOG_FATAL
} log_level_t;

// 实现LOG宏
#define LOG(level, format, ...) \
  print_log(level, __FILE__, __LINE__, format, ##__VA_ARGS__)

// 实现分级别的宏  
#define LOG_INFO(format, ...)  LOG(LOG_INFO, format, ##__VA_ARGS__)
#define LOG_WARNING(format, ...)  LOG(LOG_WARNING, format, ##__VA_ARGS__) 
#define LOG_ERROR(format, ...) LOG(LOG_ERROR, format, ##__VA_ARGS__)
#define LOG_FATAL(format, ...) LOG(LOG_FATAL, format, ##__VA_ARGS__)

// 打印日志函数
void print_log(log_level_t level, const char* file, int line, const char* format, ...) 

#endif  // OPENTITAN_SW_DEVICE_LIB_RUNTIME_LOG_H_
