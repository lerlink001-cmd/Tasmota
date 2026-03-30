#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// --------------------------
// ESP32-C3 核心启用
// --------------------------
#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_TEMPLATE
#define USE_HLW8032
#define USE_ENERGY_MONITOR

// --------------------------
// 你的硬件 GPIO 模板（100%匹配）
// --------------------------
#undef MODULE
#define MODULE USER_MODULE

#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"ESP32-C3-HLW8032\",\"GPIO\":["\
"0","0","0","0",\
"32","33","0","0",\
"224","0","0","0",\
"0","0","0","0",\
"0","0","161","160",\
"1056","0"\
"],\"FLAG\":0,\"BASE\":1}"

// --------------------------
// 自动参数
// --------------------------
#define SET_OPTION1    1
#define SET_OPTION13   1
#define SET_OPTION30   1
#define SET_OPTION63   1

// --------------------------
// ✅ 关键：强制 HLW8032 持续计量（不受继电器控制）
// --------------------------
#define FORCE_ENERGY_ALWAYS 1  // 强制始终显示电量数据
#define SET_OPTION52 1         // 启用“始终计量”模式

// --------------------------
// 自定义上电串口打印
// --------------------------
#define USE_CUSTOM_STARTUP_MESSAGE
#define CUSTOM_STARTUP_MESSAGE \
"\r\n" \
"=============================================\r\n" \
"  Lerlink AUSK02\r\n" \
"  Version：T1.0.0\r\n" \
"=============================================\r\n"

#endif
