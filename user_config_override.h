#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_
// 永久开启串口命令输入，解决串口无响应问题
#define USE_SERIAL_BRIDGE
#define SERIAL_BAUDRATE 115200
// 内置你指定的ESP32C3 GPIO模板，烧录即生效
#define FIRMWARE_BOOT_TEMPLATE "{\"NAME\":\"ESP32C3\",\"GPIO\":[0,0,0,0,0,576,0,0,0,32,0,0,0,0,0,0,0,0,1056,1088,0,0],\"FLAG\":0,\"BASE\":1}"
#endif
