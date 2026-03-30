#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 核心功能启用（必须完整）
#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_TEMPLATE
#define USE_GPIO
#define USE_BUTTON
#define USE_RELAYS
#define USE_ENERGY_MONITOR
#define USE_HLW8032
#define USE_CSE7766

// 强制双继电器模式（关键！）
#define RELAY1_PIN 5
#define RELAY2_PIN 4
#define BUTTON1_PIN 19
#define BUTTON2_PIN 18
#define LED_PIN 8
#define CSE7766_RX_PIN 20

// 模块配置：使用 Generic (1) 作为基础，直接在固件里硬编码引脚
#undef MODULE
#define MODULE 1  // 强制使用 Generic 模块，避免自定义模块解析失败

// 开机自动配置：双按键控制双继电器 + 电压独立显示
#define DEFAULT_SETTINGS "\
SetOption1 1;\
SetOption13 1;\
SetOption52 1;\
SetOption60 1;\
SetOption63 1;\
SetOption114 1;\
"

// 自定义上电打印
#define USE_CUSTOM_STARTUP_MESSAGE
#define CUSTOM_STARTUP_MESSAGE "\r\n\
=============================================\r\n\
 ESP32-C3 双按键双继电器 + HLW8032\r\n\
 Button1(GPIO19) → Relay1(GPIO5)\r\n\
 Button2(GPIO18) → Relay2(GPIO4)\r\n\
 电压独立显示 不受继电器控制\r\n\
=============================================\r\n"

#endif
