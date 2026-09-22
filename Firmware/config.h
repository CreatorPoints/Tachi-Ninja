#pragma once

/* ===== Matrix (verified against pcb.kicad_sch net labels) ===== */
#define MATRIX_ROW_PINS { A0, A1, A2, A3, A4 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, B4, B5, B6, B7, B10, B11, B12, B13, B14, B15 }
#define DIODE_DIRECTION COL2ROW  // confirmed: D64 anode->COL0, cathode->switch->ROW1
#define DEBOUNCE 5

/* ===== RGB Matrix (WS2812 daisy chain, 64 LEDs) ===== */
#define RGB_MATRIX_LED_COUNT 64
#define RGB_DI_PIN A8           // confirmed: net "LED-DAISY" on PA8
#define WS2812_PWM_DRIVER PWMD1 // TODO: verify timer/channel — PA8 is TIM1_CH1 on F072, confirm in ChibiOS mcuconf.h
#define WS2812_PWM_CHANNEL 1
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2
#define WS2812_DMA_CHANNEL 5

#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#define RGB_MATRIX_DEFAULT_HUE 0
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL 120   // capped below max to keep current draw reasonable — raise carefully
#define RGB_MATRIX_DEFAULT_SPD 128
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180 // safety cap given 64 LEDs on shared 5V rail

/* ===== I2C (OLED, if you enable OLED_ENABLE in rules.mk) ===== */
// Confirmed from schematic: SCL = PB8, SDA = PB9
#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9
#define I2C1_SCL_PAL_MODE 1   // TODO: verify AF mode number for I2C1 on F072 in ChibiOS docs
#define I2C1_SDA_PAL_MODE 1

/* ===== USB ===== */
#define USB_MAX_POWER_CONSUMPTION 500

/* ===== Debounce / NKRO ===== */
#define FORCE_NKRO
