# VESC firmware Changelog

+ common_can.c
添加位置环反馈，代替原本的占空比

|变量|初值|更改后|所在文件|
|:-:|:-:|:-:|:-:|
|MCCONF_S_PID_MIN_RPM|900.0f|0.0f|mcconf_default.h|
|APPCONF_CONTROLLER_ID|0|1|appconf_default.h|
|APPCONF_SEND_CAN_STATUS|false|true|appconf_default.h|
|APPCONF_SEND_CAN_STATUS_RATE_HZ|100|1000|appconf_default.h|
|APPCONF_CAN_BAUD_RATE|CAN_BAUD_500K|CAN_BAUD_1M|appconf_default.h|
