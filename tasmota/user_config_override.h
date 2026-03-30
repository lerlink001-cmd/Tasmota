#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_GPIO
#define USE_BUTTON
#define USE_RELAYS
#define USE_ENERGY_MONITOR
#define USE_CSE7766

// ==============================
// 强制引脚定义（硬件级写死）
// ==============================
#define RELAY1_PIN     5   // Relay1
#define RELAY2_PIN     4   // Relay2
#define BUTTON1_PIN    19  // 控制 Relay1
#define BUTTON2_PIN    18  // 控制 Relay2
#define LED_PIN        8
#define CSE7766_RX_PIN 20  // 计量芯片

// ==============================
// 强制模块 = Generic (1)
// ==============================
#undef MODULE
#define MODULE 1

// ==============================
// 关键：独立计量 + 双按键双继电器
// ==============================
#define DEFAULT_SETTINGS "\
SetOption1 1;\
SetOption13 1;\
SetOption52 1;\
SetOption60 1;\
SetOption114 1;\
"

// 开机打印
#define USE_CUSTOM_STARTUP_MESSAGE
#define CUSTOM_STARTUP_MESSAGE "\r\n\
=============================================\r\n\
✅ ESP32-C3 双继电器 + 双按键 + HLW8032\r\n\
✅ Button1 → Relay1    Button2 → Relay2\r\n\
✅ 电压永远显示 不受继电器控制\r\n\
=============================================\r\n"

#endif
