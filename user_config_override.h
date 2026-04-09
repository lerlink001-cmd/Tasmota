

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 开启 IR
#define USE_IR_REMOTE
#define USE_IR_RECEIVE

// 🔥 强制禁用自动模块检测（最高优先级！）
#define DISABLE_MODULE_AUTO_DETECT

// 🔥 强制禁用自动模板检测
#undef  TEMPLATE_AUTODETECT
#define TEMPLATE_AUTODETECT 0

// 🔥 强制模块 = 0
#undef  MODULE
#define MODULE 0

// 🔥 你的模板
#undef  DEFAULT_TEMPLATE
#define DEFAULT_TEMPLATE "{\"NAME\":\"Lerlink_IR\",\"GPIO\":[32,0,0,0,1056,1088,0,0,0,576,0,0,0,0],\"FLAG\":0,\"BASE\":0}"

// 防重置
#undef  CFG_HOLDER
#define CFG_HOLDER 999889

#endif
