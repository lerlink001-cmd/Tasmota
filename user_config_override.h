#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// ===== 强制新配置 =====
#ifndef CFG_HOLDER
  #define CFG_HOLDER 0x20260331
#endif

// ===== 设备名 =====
#ifndef FRIENDLY_NAME
  #define FRIENDLY_NAME "C3-DualRelay-HLW"
#endif

// ===== Web =====
#ifndef USE_WEBSERVER
  #define USE_WEBSERVER
#endif

// ===== 规则 =====
#ifndef USE_RULES
  #define USE_RULES
#endif

// ===== 电能计量 =====
#ifndef USE_ENERGY_SENSOR
  #define USE_ENERGY_SENSOR
#endif

#ifndef USE_CSE7766
  #define USE_CSE7766
#endif

// ===== 自动发现 =====
#ifndef USE_DISCOVERY
  #define USE_DISCOVERY
#endif

// ===== Home Assistant =====
#ifndef USE_HOME_ASSISTANT
  #define USE_HOME_ASSISTANT
#endif

// =====（可选）设备模拟 =====
#ifndef USE_EMULATION
  #define USE_EMULATION
#endif

// ===== GPIO模板（你的配置）=====
#ifndef USER_TEMPLATE
  #define USER_TEMPLATE "{\"NAME\":\"C3-DualRelay-HLW\",\"GPIO\":[0,0,0,0,225,224,0,0,640,0,0,0,0,0,0,0,0,0,33,32,6400,0],\"FLAG\":0,\"BASE\":1}"
#endif

// ===== 默认行为 =====
#ifndef SETOPTION73
  #define SETOPTION73 0
#endif

#ifndef SETOPTION1
  #define SETOPTION1 1
#endif

#endif
