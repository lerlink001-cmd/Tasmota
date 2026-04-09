#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 1. 启用红外功能（必须放在最前）
#define USE_IR_REMOTE
#define USE_IR_RECEIVE

// 2. 🔥 终极锁死：彻底关闭所有自动检测（最高优先级，强制禁用Sonoff匹配）
#define DISABLE_MODULE_AUTO_DETECT
#undef TEMPLATE_AUTODETECT
#define TEMPLATE_AUTODETECT 0
#undef USE_MODULE_DETECTION
#define USE_MODULE_DETECTION 0

// 3. 🔥 强制模块为0（自定义模式，必须在模板前定义）
#undef MODULE
#define MODULE 0
#undef FALLBACK_MODULE
#define FALLBACK_MODULE 0

// 4. 🔥 强制默认模板（17位完整JSON，严格符合ESP8266规范）
#undef DEFAULT_TEMPLATE
#define DEFAULT_TEMPLATE "{\"NAME\":\"Lerlink_IR\",\"GPIO\":[32,0,0,0,1056,1088,0,0,0,576,0,0,0,0,0,0,0],\"FLAG\":0,\"BASE\":1}"

// 5. 🔥 强制配置防重置，彻底让旧配置失效
#undef CFG_HOLDER
#define CFG_HOLDER 99988999

#endif
