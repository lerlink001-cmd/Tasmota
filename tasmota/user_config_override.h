#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// --------------------------
// ESP32-C3 核心
// --------------------------
#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_TEMPLATE
#define USE_HLW8032
#define USE_ENERGY_MONITOR

// --------------------------
// GPIO 模板（你的硬件 100% 匹配）
// --------------------------
#undef MODULE
#define MODULE USER_MODULE

#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"ESP32-C3-HLW8032\",\"GPIO\":[0,0,0,0,32,33,0,0,224,0,0,0,0,0,0,0,0,0,161,160,1056,0],\"FLAG\":0,\"BASE\":1}"

// --------------------------
// 开机自动执行命令（关键！）
// --------------------------
#define DEFAULT_SETTINGS "\
SetOption1 1;\
SetOption13 1;\
SetOption30 1;\
SetOption63 1;\
SetOption52 1;\
"

// --------------------------
// 自定义开机串口打印
// --------------------------
#define USE_CUSTOM_STARTUP_MESSAGE
#define CUSTOM_STARTUP_MESSAGE "\r\n\
=============================================\r\n\
  Lerlink AUK02\r\n\
  Version:1.0.0\r\n\
=============================================\r\n"

#endif
