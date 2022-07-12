/*
Copyright 2021 Maulik Arvind Maradia Dr.Mo/ Mo-e-lectronics store>


*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4853 /* HS */
#define PRODUCT_ID      0x660C
#define DEVICE_VER      0x0100
#define MANUFACTURER Mo-e-lectronics
#define PRODUCT      flagship

#define TAPPING_TERM 250

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

/* pin B6to9 on f411blackpill is for twin i2c oled and mouse like devices,dedicated dac audio pin absent on F411 */

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B5, B10, B12, B13, B14, B15, C13, C14 }
#define MATRIX_COL_PINS { A0, A1, A2, A3, A6, A7, A8, A9, A10 }

#define UNUSED_PINS C15,


/* COL2ROW, ROW2COL */

#define DIODE_DIRECTION COL2ROW

/* Indicator for caps/scr/num lock will be displayed in oled screen. 
for dedicated LEDs, write outside slashes, hash define LED_CAPS_LOCK_PIN xyzNumber hash define LED_PIN_ON_STATE 0 */


#ifdef AUDIO_ENABLE
#define AUDIO_PIN A5
#define AUDIO_PWM_DRIVER PWMD4
#define AUDIO_PWM_CHANNEL 1
#define AUDIO_STATE_TIMER GPTD1
#define AUDIO_CLICKY
#define MUSIC_MAP
#define AUDIO_ENABLE_TONE_MULTIPLEXING
#define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define ENCODERS_PAD_A { A11, A11 }
#define ENCODERS_PAD_B { A12, A15 }
#define ENCODER_RESOLUTIONS { 4, 2 }

#ifdef POINTING_DEVICE_ENABLE

#define I2C2_SCL_PIN                   B6
#define I2C2_SDA_PIN                   B7
#define CIRQUE_PINNACLE_ADDR           0x2A
#define CIRQUE_PINNACLE_TIMEOUT        20
#define CIRQUE_PINNACLE_X_LOWER        127
#define CIRQUE_PINNACLE_X_UPPER        1919
#define CIRQUE_PINNACLE_Y_LOWER        63
#define CIRQUE_PINNACLE_Y_UPPER        1471
#define CIRQUE_PINNACLE_TAPPING_TERM   200
#define CIRQUE_PINNACLE_TOUCH_DEBOUNCE 200

#endif

#ifdef OLED_ENABLE

#define OLED_DISPLAY_128X32
#define I2C1_SCL_PIN        B8
#define I2C1_SDA_PIN        B9
#define OLED_BRIGHTNESS 128
#define OLED_TIMEOUT 10000
#define OLED_IC OLED_IC_SSD1306


#endif

#ifdef RGB_MATRIX_ENABLE

#define RGB_DI_PIN B4
#define DRIVER_LED_TOTAL 122
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150

#define WS2812_PWM_DRIVER PWMD2  // default: PWMD2
#define WS2812_PWM_CHANNEL 2  // default: 2
#define WS2812_PWM_PAL_MODE 2  // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
//#define WS2812_PWM_COMPLEMENTARY_OUTPUT // Define for a complementary timer output (TIMx_CHyN); omit for a normal timer output (TIMx_CHy).
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL 2  // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM2_UP // DMAMUX configuration for TIMx_UP -- only required if your MCU has a DMAMUX peripheral, see the respective reference manual for the appropriate values for your MCU.


#endif



