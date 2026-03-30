#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// 强制重置配置（修改数值触发重置）
#undef CFG_HOLDER
#define CFG_HOLDER      0x20250331

// 设备信息
#undef PROJECT
#define PROJECT         "Tasmota-C3-DualRelay"
#undef FRIENDLY_NAME
#define FRIENDLY_NAME   "C3智能插座"

// ============================================
// GPIO 模板（核心配置）
// ============================================
#undef USER_TEMPLATE
#define USER_TEMPLATE   "{\"NAME\":\"C3-DualRelay-HLW\",\"GPIO\":[0,0,0,0,225,224,0,0,640,0,0,0,0,0,0,0,0,0,33,32,6400,0],\"FLAG\":0,\"BASE\":1}"

// 编码说明：
// GPIO4=225(Relay2)  GPIO5=224(Relay1)  GPIO8=640(LED)
// GPIO18=33(Button2) GPIO19=32(Button1) GPIO20=6400(HLW8032/CSE7766 RX)

// ============================================
// 启用内置电量计（串口直连自动识别 4800bps）
// ============================================
#define USE_ENERGY_SENSOR
#define USE_CSE7766              // 内置驱动支持 HLW8032

// ============================================
// 按键联动
// ============================================
#define USE_BUTTON_V2
#define BUTTON1_RELAY    1
#define BUTTON2_RELAY    2

// LED
#define LED_PIN          8
#define LED_INVERTED     1

// 禁用节省空间
#undef USE_IR_REMOTE
#undef USE_RF_BRIDGE
#undef USE_ZIGBEE

#endif
