#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 启用 ESP32-C3
#define USE_ESP32C3_DEV

// 必须开启：允许配置 GPIO 和模板
#define USE_MODULES
#define USE_TEMPLATE
#define USE_GPIO

// 你的硬件自动配置（100%对应你的引脚）
#define MODULE            USER_MODULE
#define USER_TEMPLATE     "{\"NAME\":\"ESP32-C3-HLW8032\",\"GPIO\":[0,0,384,0,32,33,0,0,224,0,0,0,0,0,0,0,0,0,161,160,1056,0],\"FLAG\":0,\"BASE\":0}"

// 开启功率计量
#define USE_HLW8032
#define USE_ENERGY_MONITOR

// 自动参数
#define SET_OPTION1  1
#define SET_OPTION13 1
#define SET_OPTION30 1
#define SET_OPTION63 1

#endif
