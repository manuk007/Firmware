/****************************************************************************
 *
 *   Copyright (c) 2017 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file board_config.h
 *
 * OCPOC internal definitions
 */

#pragma once

#define BOARD_OVERRIDE_UUID "OCPOC00000000000" // must be of length 16
#define PX4_SOC_ARCH_ID     PX4_SOC_ARCH_ID_OCPOC

#define BOARD_BATTERY1_V_DIV   (10.177939394f)
#define BOARD_HAS_NO_RESET
#define BOARD_HAS_NO_BOOTLOADER

#define BOARD_NUMBER_I2C_BUSES 4
#define BOARD_MAX_LEDS 1 // Number of external LED's this board has
#define PX4_I2C_BUS_LED 1
#define PX4_I2C_BUS_EXPANSION 1

// Battery ADC channels
#define ADC_BATTERY_VOLTAGE_CHANNEL     10
#define ADC_BATTERY_CURRENT_CHANNEL     ((uint8_t)(-1))
#define ADC_AIRSPEED_VOLTAGE_CHANNEL    11

// SPI
#define PX4_SPI_BUS_SENSORS		1
#define PX4_SPIDEV_MPU			PX4_MK_SPI_SEL(PX4_SPI_BUS_SENSORS, 1)

#include <system_config.h>
#include <px4_platform_common/board_common.h>
