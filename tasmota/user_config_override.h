#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// --------------------------
// 你的硬件 GPIO 定义
// --------------------------
#define USE_ESP32C3_DEV
#define USE_MODULES
#define USE_TEMPLATE
#define MODULE USER_MODULE

// 自定义模板（自动加载）
#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"MY_ESP32C3_HLW8032\",\"GPIO\":[\"\"," \
"RELAY1","RELAY2","","","","","","LED1","","","","","","","","","","BUTTON2","BUTTON1","HLW8032","\"]," \
"\"FLAG\":0,\"BASE\":0}"

// 启用 HLW8032
#define USE_HLW8032

// 按键上拉
#define KEY_PIN_MODE INPUT_PULLUP

// 自动配置参数
#define SET_OPTION1  1    // 按键控制对应继电器
#define SET_OPTION13 1    // LED低电平亮
#define SET_OPTION30 1    // 单LED显示双路输出
#define SET_OPTION63 1    // HLW8032专用模式

#endif
