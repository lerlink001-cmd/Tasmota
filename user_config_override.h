#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 强制开启红外功能（必须放在最前）
#define USE_IR_REMOTE
#define USE_IR_RECEIVE

// 🔴 关键修正：先定义 DEFAULT_TEMPLATE，再设置 MODULE
#undef DEFAULT_TEMPLATE
#define DEFAULT_TEMPLATE "{\"NAME\":\"Lerlink_ESP8266_IR\",\"GPIO\":[32,0,0,0,1056,1088,0,0,0,576,0,0,0,0],\"FLAG\":0,\"BASE\":1}"


// 🔴 关键修正：MODULE 必须设为 0，且在 DEFAULT_TEMPLATE 之后
#undef MODULE
#define MODULE 0

// 🔴 强制关闭自动硬件检测，彻底禁用 Sonoff 自动匹配
#undef TEMPLATE_AUTODETECT
#define TEMPLATE_AUTODETECT 0

// 🔴 强制启用配置覆盖，确保 user_config_override.h 生效
#define USE_CONFIG_OVERRIDE

// 🔴 配置防重置，防止被系统覆盖
#undef CFG_HOLDER
#define CFG_HOLDER 999889

#endif
