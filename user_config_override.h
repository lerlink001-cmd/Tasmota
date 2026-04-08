#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 强制锁定模板，最高优先级，无视Flash配置
#undef TEMPLATE_GENERIC
#define TEMPLATE_GENERIC "{\"NAME\":\"Lerlink_ESP8266_IR\",\"GPIO\":[32,0,0,0,1056,1088,0,0,0,576,0,0,0,0],\"FLAG\":0,\"BASE\":1}"

#undef MODULE
#define MODULE 1  // 强制通用模块，彻底禁用自动匹配Sonoff/Teckin

#undef CFG_HOLDER
#define CFG_HOLDER 999889

#endif
