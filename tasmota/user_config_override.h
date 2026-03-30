#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_TEMPLATE
#define USE_HLW8032
#define USE_ENERGY_MONITOR
#define USE_CSE7766  // 必须开启，支持单线计量

#undef MODULE
#define MODULE USER_MODULE

// 这是你手动配置出来的 100% 正确模板
#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"ESP32-C3-HLW8032\",\"ARCH\":\"ESP32C3\",\"GPIO\":[0,0,0,0,32,33,0,0,224,0,0,0,0,0,0,0,0,0,161,160,1056,0],\"FLAG\":0,\"BASE\":1}"

// 开机自动配置：电压不受继电器控制
#define DEFAULT_SETTINGS "\
SetOption52 1;\
SetOption1 1;\
SetOption13 1;\
SetOption63 1;\
"

// 自定义上电打印
#define USE_CUSTOM_STARTUP_MESSAGE
#define CUSTOM_STARTUP_MESSAGE "\r\n\
=============================================\r\n\
  ESP32-C3 双继电器 + HLW8032 电量计量\r\n\
  GPIO20=CSE7766RX(HLW8032) 电压独立显示\r\n\
=============================================\r\n"

#endif
