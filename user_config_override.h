
#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 开启红外功能
#define USE_IR_REMOTE
#define USE_IR_RECEIVE

// 强制模块 = 自定义模式（永不自动变 Sonoff/Teckin）
#undef MODULE
#define MODULE 0

// 你的最终模板（命令成功的那个一模一样）
#undef TEMPLATE
#define TEMPLATE "{\"NAME\":\"Lerlink_ESP8266_IR\",\"GPIO\":[32,0,0,0,1056,1088,0,0,0,576,0,0,0,0],\"FLAG\":0,\"BASE\":1}"

// 关闭硬件自动检测
#undef TEMPLATE_AUTODETECT
#define TEMPLATE_AUTODETECT 0

// 配置防重置
#undef CFG_HOLDER
#define CFG_HOLDER 999889

#endif
