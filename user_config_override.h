
#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 强制开启红外（标准分支也能用）
#define USE_IR_REMOTE
#define USE_IR_RECEIVE

// 强制自定义模板（永远不被覆盖）
#undef TEMPLATE_GENERIC
#define TEMPLATE_GENERIC "{\"NAME\":\"Lerlink_ESP8266_IR\",\"GPIO\":[32,0,0,0,1056,1088,0,0,0,576,0,0,0,0],\"FLAG\":0,\"BASE\":1}"

// 强制通用模块 = 不会变 Sonoff / Teckin
#undef MODULE
#define MODULE 1

#undef CFG_HOLDER
#define CFG_HOLDER 999889

#endif
