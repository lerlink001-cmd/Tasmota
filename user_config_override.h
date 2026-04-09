

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 启用红外功能
#define USE_IR_REMOTE
#define USE_IR_RECEIVE

// 强制模块 = 0（自定义模式，永不自动变成 Sonoff/Teckin）
#undef  MODULE
#define MODULE 0

// 你的最终模板（和你命令里的一模一样）
#undef  TEMPLATE
#define TEMPLATE "{\"NAME\":\"Lerlink_ESP8266_IR\",\"GPIO\":[32,0,0,0,1056,1088,0,0,0,576,0,0,0,0],\"FLAG\":0,\"BASE\":1}"

// 防止配置被重置
#undef  CFG_HOLDER
#define CFG_HOLDER 999889

#endif
