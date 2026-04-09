

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 🔴 强制开启红外功能（标准分支原生支持，和 IR 分支完全一致）
#define USE_IR_REMOTE
#define USE_IR_RECEIVE

// 🔴 强制模块 = 0（完全自定义模式，彻底禁用自动匹配）
#undef MODULE
#define MODULE 0

// 🔴 你的最终模板（和命令执行成功的版本完全一致）
#undef DEFAULT_TEMPLATE
#define DEFAULT_TEMPLATE "{\"NAME\":\"Lerlink_ESP8266_IR\",\"GPIO\":[32,0,0,0,1056,1088,0,0,0,576,0,0,0,0],\"FLAG\":0,\"BASE\":1}"

// 🔴 强制关闭自动硬件检测（标准分支专用，IR 分支无效）
#undef TEMPLATE_AUTODETECT
#define TEMPLATE_AUTODETECT 0

// 🔴 唯一配置标识，防止配置被重置
#undef CFG_HOLDER
#define CFG_HOLDER 999889

#endif
