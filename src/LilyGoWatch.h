#pragma once

// !!!!BOARD !!!
// #define LILYGO_WATCH_2020_V1
// #define LILYGO_WATCH_BLOCK
// #define LILYGO_WATCH_2019_WITH_TOUCH
// #define LILYGO_WATCH_2019_NO_TOUCH

// => Options
// #define LILYGO_WATCH_HAS_SIM800L
// #define LILYGO_WATCH_HAS_SIM800C
// #define LILYGO_WATCH_HAS_NFC
// #define LILYGO_WATCH_HAS_GPRS
// #define LILYGO_WATCH_HAS_GPS
// #define LILYGO_WATCH_HAS_LORA
// #define LILYGO_WATCH_HAS_BUZZER
// #define LILYGO_WATCH_HAS_MOTOR
// #define LILYGO_WATCH_HAS_BMA423
// #define LILYGO_WATCH_HAS_MPU6050
// #define LILYGO_WATCH_HAS_MAX301XX
// #define LILYGO_WATCH_HAS_PCF8563
// #define LILYGO_WATCH_HAS_SDCARD
// #define LILYGO_WATCH_HAS_BUTTON
// #define LILYGO_WATCH_HAS_MPR121
// #define LILYGO_WATCH_HAS_BBQ_KEYBOARD
// #define LILYGO_WATCH_HAS_S76_S78G
// #define LILYGO_WATCH_LVGL
// #define LILYGO_WATCH_HAS_TOUCH
// #define LILYGO_WATCH_HAS_BLACKLIGHT
// #define LILYGO_WATCH_HAS_GAMEPAD
// #define LILYGO_WATCH_HAS_AXP202
// #define LILYGO_EINK_TOUCHSCREEN
// #define LILYGO_WATCH_HAS_DISPLAY
// #define LILYGO_WATCH_HAS_IRREMOTE
// #define LILYGO_WATCH_HAS_EINK


#if defined(LILYGO_WATCH_2019_WITH_TOUCH)
#include "board/twatch2019_with_touch.h"
// Has
#define LILYGO_WATCH_HAS_TOUCH
#define LILYGO_WATCH_HAS_DISPLAY
#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_BMA423
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_BLACKLIGHT
#define LILYGO_WATCH_HAS_BUTTON

// => Options
// #define LILYGO_WATCH_HAS_SIM800L
// #define LILYGO_WATCH_HAS_SIM800C
// #define LILYGO_WATCH_HAS_NFC
// #define LILYGO_WATCH_HAS_GPRS
// #define LILYGO_WATCH_HAS_GPS
// #define LILYGO_WATCH_HAS_LORA
// #define LILYGO_WATCH_HAS_BUZZER
// #define LILYGO_WATCH_HAS_MOTOR
// #define LILYGO_WATCH_HAS_MPU6050
// #define LILYGO_WATCH_HAS_MAX301XX
// #define LILYGO_WATCH_HAS_SDCARD
// #define LILYGO_WATCH_HAS_BUTTON
// #define LILYGO_WATCH_HAS_MPR121
// #define LILYGO_WATCH_HAS_BBQ_KEYBOARD
// #define LILYGO_WATCH_HAS_S76_S78G
// #define LILYGO_WATCH_LVGL
// #define LILYGO_WATCH_HAS_BLACKLIGHT
// #define LILYGO_WATCH_HAS_GAMEPAD

// Hardware not support
#undef LILYGO_EINK_TOUCHSCREEN
#undef LILYGO_WATCH_HAS_IRREMOTE

#elif defined(LILYGO_WATCH_2019_NO_TOUCH)
#include "board/twatch2019_with_not_touch.h"
// Has
#define LILYGO_WATCH_HAS_DISPLAY
#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_BMA423
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_BLACKLIGHT
#define LILYGO_WATCH_HAS_BUTTON

// => Options
// #define LILYGO_WATCH_HAS_SIM800L
// #define LILYGO_WATCH_HAS_SIM800C
// #define LILYGO_WATCH_HAS_NFC
// #define LILYGO_WATCH_HAS_GPRS
// #define LILYGO_WATCH_HAS_GPS
// #define LILYGO_WATCH_HAS_LORA
// #define LILYGO_WATCH_HAS_BUZZER
// #define LILYGO_WATCH_HAS_MOTOR
// #define LILYGO_WATCH_HAS_MPU6050
// #define LILYGO_WATCH_HAS_MAX301XX
// #define LILYGO_WATCH_HAS_SDCARD
// #define LILYGO_WATCH_HAS_MPR121
// #define LILYGO_WATCH_HAS_BBQ_KEYBOARD
// #define LILYGO_WATCH_HAS_S76_S78G
// #define LILYGO_WATCH_LVGL
// #define LILYGO_WATCH_HAS_BLACKLIGHT
// #define LILYGO_WATCH_HAS_GAMEPAD

// Hardware not support
#undef LILYGO_EINK_TOUCHSCREEN
#undef LILYGO_WATCH_HAS_IRREMOTE
#undef LILYGO_WATCH_HAS_TOUCH

#elif defined(LILYGO_WATCH_2020_V1)
#include "board/twatch2020_v1.h"
// Has
#define LILYGO_WATCH_HAS_TOUCH
#define LILYGO_WATCH_HAS_DISPLAY
#define LILYGO_WATCH_HAS_BUZZER
#define LILYGO_WATCH_HAS_MOTOR
#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_BMA423
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_IRREMOTE
#define LILYGO_WATCH_HAS_BLACKLIGHT

// Hardware not support
#undef  LILYGO_WATCH_HAS_NFC
#undef  LILYGO_WATCH_HAS_GPRS
#undef  LILYGO_WATCH_HAS_GPS
#undef  LILYGO_WATCH_HAS_LORA
#undef  LILYGO_WATCH_HAS_MPU6050
#undef  LILYGO_WATCH_HAS_MAX301XX
#undef  LILYGO_WATCH_HAS_SDCARD
#undef  LILYGO_WATCH_HAS_BUTTON
#undef  LILYGO_WATCH_HAS_MPR121
#undef  LILYGO_WATCH_HAS_BBQ_KEYBOARD
#undef  LILYGO_WATCH_HAS_S76_S78G
#undef  LILYGO_WATCH_HAS_SIM800L
#undef  LILYGO_WATCH_HAS_SIM800C

// #elif defined(LILYGO_WATCH_2020_V2)
// Not now

#elif defined(LILYGO_WATCH_BLOCK)
#include "board/twatch_block.h"

#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_BUTTON

// => Options
// #define LILYGO_WATCH_HAS_SIM800L
// #define LILYGO_WATCH_HAS_SIM800C
// #define LILYGO_WATCH_HAS_NFC
// #define LILYGO_WATCH_HAS_GPRS
// #define LILYGO_WATCH_HAS_GPS
// #define LILYGO_WATCH_HAS_LORA
// #define LILYGO_WATCH_HAS_BUZZER
// #define LILYGO_WATCH_HAS_MOTOR
// #define LILYGO_WATCH_HAS_MPU6050
// #define LILYGO_WATCH_HAS_MAX301XX
// #define LILYGO_WATCH_HAS_SDCARD
// #define LILYGO_WATCH_HAS_MPR121
// #define LILYGO_WATCH_HAS_BBQ_KEYBOARD
// #define LILYGO_WATCH_HAS_S76_S78G
// #define LILYGO_WATCH_HAS_BLACKLIGHT
// #define LILYGO_WATCH_HAS_GAMEPAD
// #define LILYGO_EINK_TOUCHSCREEN

#ifdef LILYGO_EINK_TOUCHSCREEN
#define LILYGO_WATCH_HAS_TOUCH
#else
#undef LILYGO_WATCH_HAS_TOUCH
#endif

// Hardware not support
#undef LILYGO_WATCH_LVGL
#undef LILYGO_WATCH_HAS_DISPLAY
#undef LILYGO_WATCH_HAS_IRREMOTE
#undef LILYGO_WATCH_HAS_BMA423

#else
#error "Please define Watch model"
#endif

#include "TTGO.h"

