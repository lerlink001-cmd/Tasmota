#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 核心功能启用（ESP32-C3 必选）
#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_GPIO
#define USE_BUTTON
#define USE_RELAYS
#define USE_ENERGY_MONITOR
#define USE_CSE7766

// ==============================================
// 1. 强制用 ESP32C3 (1) 通用模块（避开模板BUG）
// ==============================================
#undef MODULE
#define MODULE 1

// ==============================================
// 2. 固件内置：开机自动配置 GPIO（零手动！）
//    GPIO4=Relay2 | GPIO5=Relay1 | GPIO18=Button2 | GPIO19=Button1 | GPIO20=CSE7766 Rx
// ==============================================
#define DEFAULT_SETTINGS "\
GPIO4 32;\
GPIO5 33;\
GPIO18 161;\
GPIO19 160;\
GPIO20 640;\
SetOption1 1;\
SetOption13 1;\
SetOption52 1;\
SetOption60 1;\
SetOption114 1;\
"

// ==============================================
// 3. 强制计量永远在线（继电器不影响电压显示）
// ==============================================
#define CSE7766_ALWAYS_ON 1
#define ENERGY_ALWAYS_ON 1

// ==============================================
// 4. 内置北京时间 + 国内NTP（量产必备）
// ==============================================
#define TIMEZONE         480
#define NTP_SERVER1      "ntp.aliyun.com"
#define NTP_SERVER2      "time1.cloud.tencent.com"
#define NTP_SERVER3      "cn.ntp.org.cn"
#define TIME_DST         0
#define TIME_STD         0

#endif
