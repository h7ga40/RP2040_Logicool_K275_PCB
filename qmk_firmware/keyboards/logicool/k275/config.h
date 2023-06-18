// Copyright 2023 logicool (@h7ga40)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define DYNAMIC_KEYMAP_LAYER_COUNT 1

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#ifdef RGB_MATRIX_ENABLE
/* The pin connected to the data pin of the LEDs */
#define RGB_DI_PIN GP29
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS * 3/4

/* The number of LEDs connected */
#define DRIVER_LED_TOTAL 1
#define RGBLED_NUM 1
#define RGB_MATRIX_LED_COUNT 144

/* Caps locks LED index default is 0 (LED1 on PCB) */
#define CAPS_LOCK_LED_INDEX 0

/* Enable RGB MATRIX effects */
#define ENABLE_RGB_MATRIX_HUE_WAVE
#endif
