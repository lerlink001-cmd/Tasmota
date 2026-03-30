#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 核心芯片与功能启用
#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_TEMPLATE
#define USE_GPIO
#define USE_HLW8032
#define USE_CSE7766
#define USE_ENERGY_MONITOR

// 模块与模板配置（你手动导出的 100% 正确模板）
#undef MODULE
#define MODULE USER_MODULE

#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"ESP32-C3-HLW8032\",\"ARCH\":\"ESP32C3\",\"GPIO\":[0,0,0,0,32,33,0,0,224,0,0,0,0,0,0,0,0,0,161,160,1056,0],\"FLAG\":0,\"BASE\":1}"

// 开机自动配置：解除继电器与计量的绑定
#define DEFAULT_SETTINGS "\
SetOption52 1;\
SetOption60 1;\
SetOption1 1;\
SetOption13 1;\
SetOption63 1;\
"

// 自定义上电串口打印
#define USE_CUSTOM_STARTUP_MESSAGE
#define CUSTOM_STARTUP_MESSAGE "\r\n\
=============================================\r\n\
  ESP32-C3 双继电器 + HLW8032 电量计量\r\n\
  GPIO4=Relay2  GPIO5=Relay1  GPIO20=CSE7766RX\r\n\
  电压独立显示，不受继电器控制\r\n\
=============================================\r\n"

#endif
