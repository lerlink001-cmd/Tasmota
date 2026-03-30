#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 核心
#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_TEMPLATE
#define USE_ENERGY_MONITOR

// 必须打开 HLKW8032 + CSE7766 驱动
#define USE_HLW8032
#define USE_CSE7766

// ###########################################################################
// 🎯 你的 100% 正确 GPIO（你自己网页生成的）
// ###########################################################################
#undef MODULE
#define MODULE USER_MODULE

#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"ESP32-C3-HLW8032\",\"ARCH\":\"ESP32C3\",\"GPIO\":[0,0,0,0,32,33,0,0,224,0,0,0,0,0,0,0,0,0,161,160,1056,0],\"FLAG\":0,\"BASE\":0}"

// ###########################################################################
// 🎯 关键：强制 CSE7766 不受继电器控制（真正生效的代码）
// ###########################################################################
#define ENERGY_PROTOCOL 2          // 强制使用 CSE7766 协议
#define CSE7766_ALWAYS_ON 1        // 强制始终工作，不跟随继电器
#define ENERGY_ALWAYS_ON 1         // 强制始终计量
#define SET_OPTION52 1             // 始终显示电压

// ###########################################################################
// 开机自动配置
// ###########################################################################
#define DEFAULT_SETTINGS "\
SetOption52 1;\
SetOption60 1;\
SetOption13 1;\
SetOption63 1;\
"

// ###########################################################################
// 自定义上电打印
// ###########################################################################
#define USE_CUSTOM_STARTUP_MESSAGE
#define CUSTOM_STARTUP_MESSAGE "\r\n\
=============================================\r\n\
  ESP32-C3 + HLW8032 电量计量\r\n\
  电压 永久显示 不受继电器控制\r\n\
=============================================\r\n"

#endif
