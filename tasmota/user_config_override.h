#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 核心启用
#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_TEMPLATE
#define USE_GPIO
#define USE_BUTTON
#define USE_RELAYS
#define USE_ENERGY_MONITOR
#define USE_CSE7766

// ==============================================
// ✅ 量产关键：MODULE 固定为 0（自定义模板）
// ==============================================
#undef MODULE
#define MODULE 0

// ==============================================
// ✅ 量产关键：自动加载GPIO模板（自动配置，无需手动）
// ==============================================
#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"2R2B-HLW\",\"GPIO\":[0,0,0,0,32,33,0,0,0,0,0,161,160,0,0,640,0,0,0,0,0,0],\"FLAG\":0,\"BASE\":0}"

// ==============================================
// ✅ 量产关键：电压永远显示，不受继电器影响
// ==============================================
#define CSE7766_ALWAYS_ON 1
#define ENERGY_ALWAYS_ON 1

// ==============================================
// ✅ 按键独立控制继电器
// ==============================================
#define DEFAULT_SETTINGS "\
SetOption1 1;\
SetOption13 1;\
SetOption52 1;\
SetOption60 1;\
"

#endif
