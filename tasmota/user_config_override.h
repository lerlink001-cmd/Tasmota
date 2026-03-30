#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 核心功能
#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_TEMPLATE
#define USE_GPIO
#define USE_ENERGY_MONITOR
#define USE_HLW8032
#define USE_CSE7766

// 模块配置
#undef MODULE
#define MODULE USER_MODULE

// 你手动配置的 100% 正确 GPIO
#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"ESP32-C3-HLW8032\",\"ARCH\":\"ESP32C3\",\"GPIO\":[0,0,0,0,32,33,0,0,224,0,0,0,0,0,0,0,0,0,161,160,1056,0],\"FLAG\":0,\"BASE\":1}"

// --------------------------
// 关键：按键独立控制继电器 + 电压永远显示
// --------------------------
#define DEFAULT_SETTINGS "\
SetOption1 1;\
SetOption13 1;\
SetOption52 1;\
SetOption60 1;\
SetOption63 1;\
"

// 自定义上电打印
#define USE_CUSTOM_STARTUP_MESSAGE
#define CUSTOM_STARTUP_MESSAGE "\r\n\
=============================================\r\n\
 ESP32-C3 双按键双继电器 + HLW8032\r\n\
 Button1 → Relay1\r\n\
 Button2 → Relay2\r\n\
 电压独立显示 不受继电器控制\r\n\
=============================================\r\n"

#endif
