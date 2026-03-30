#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// ==============================
// 1. 核心功能启用（ESP32-C3 量产必备）
// ==============================
#define USE_ESP32C3_DEV          // 启用 ESP32-C3 平台支持
#define USE_RELAYS               // 启用继电器功能
#define USE_BUTTON               // 启用按键功能
#define USE_CSE7766              // 启用 CSE7766/HLW8032 计量
#define USE_ENERGY_MONITOR       // 启用能源监测
#define USE_LED_LINKED           // 启用指示灯（GPIO8）

// ==============================
// 2. 强制双继电器（避免单继电器默认）
// ==============================
#define RELAY_COUNT 2            // 强制加载 2 路继电器

// ==============================
// 3. 计量永久在线（继电器不影响电压显示）
// ==============================
#define CSE7766_ALWAYS_ON 1      // 强制 CSE7766 持续采样
#define ENERGY_ALWAYS_ON 1       // 强制能源数据持续更新

// ==============================
// 4. 内置北京时间 + 国内 NTP（量产零手动）
// ==============================
#define TIMEZONE         480     // 中国 UTC+8（8×60=480分钟）
#define NTP_SERVER1      "ntp.aliyun.com"       // 阿里 NTP
#define NTP_SERVER2      "time1.cloud.tencent.com" // 腾讯 NTP
#define NTP_SERVER3      "cn.ntp.org.cn"        // 国内通用 NTP
#define TIME_DST         0       // 禁用夏令时（中国不使用）
#define TIME_STD         0       // 禁用标准时调整

// ==============================
// 5. 量产关键：开机自动执行 GPIO 配置命令
//    （基于你设备导出的真实功能码，零手动！）
// ==============================
#define DEFAULT_SETTINGS "\
// 第一步：清空所有旧 GPIO 配置 \
GPIO0 0;\
GPIO1 0;\
GPIO2 0;\
GPIO3 0;\
GPIO4 0;\
GPIO5 0;\
GPIO6 0;\
GPIO7 0;\
GPIO8 0;\
GPIO9 0;\
GPIO10 0;\
GPIO18 0;\
GPIO19 0;\
GPIO20 0;\
GPIO21 0;\
\
// 第二步：配置真实生效的 GPIO + 功能码 \
GPIO4 225;\    // GPIO4 = Relay2（功能码225）\
GPIO5 224;\    // GPIO5 = Relay1（功能码224）\
GPIO8 576;\    // GPIO8 = LedLink_i（功能码576）\
GPIO18 33;\    // GPIO18 = Button2（功能码33）\
GPIO19 32;\    // GPIO19 = Button1（功能码32）\
GPIO20 3104;\  // GPIO20 = CSE7766 Rx（功能码3104）\
\
// 第三步：配置按键/计量规则 \
SetOption1 1;\  // 按键按下触发继电器切换 \
SetOption13 1;\ // 禁用按键长按重复触发 \
SetOption52 1;\ // 计量数据高频更新 \
SetOption60 1;\ // 能源数据独立显示 \
SetOption114 1;// 强制显示所有继电器 \
"

#endif // _USER_CONFIG_OVERRIDE_H_
