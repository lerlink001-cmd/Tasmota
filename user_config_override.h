
#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 启用红外功能
#define USE_IR_REMOTE
#define USE_IR_RECEIVE

// 强制模块为自定义模式
#undef MODULE
#define MODULE 0

// 默认模板（开机自动加载）
#undef DEFAULT_TEMPLATE
#define DEFAULT_TEMPLATE "{\"NAME\":\"Lerlink_ESP8266_IR\",\"GPIO\":[32,0,0,0,1056,1088,0,0,0,576,0,0,0,0],\"FLAG\":0,\"BASE\":1}"

// 关闭硬件自动检测
#undef TEMPLATE_AUTODETECT
#define TEMPLATE_AUTODETECT 0

// 配置防重置
#undef CFG_HOLDER
#define CFG_HOLDER 999889

#endif
