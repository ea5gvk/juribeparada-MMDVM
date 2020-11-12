/*
 *   Copyright (C) 2020 by CA6JAU
 *   Copyright (C) 2019,2020 by BG5HHP
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef _PINS_F7_NUCLEO_ARDUINO_H
#define _PINS_F7_NUCLEO_ARDUINO_H

/*
Pin definitions for STM32F7 Nucleo boards (Arduino header):

PTT      PE9    output
COSLED   PE13   output
LED      PF14   output
COS      PE11   input

DSTAR    PC0    output
DMR      PC3    output
YSF      PF3    output
P25      PF5    output
NXDN     PG9    output
POCSAG   PG14   output

RX       PA3    analog input
RSSI     PF10   analog input
TX       PA5    analog output

EXT_CLK  PA15   input
*/

#define PIN_PTT           GPIO_Pin_9
#define PORT_PTT          GPIOE
#define RCC_Per_PTT       RCC_AHB1Periph_GPIOE

#define PIN_COSLED        GPIO_Pin_13
#define PORT_COSLED       GPIOE
#define RCC_Per_COSLED    RCC_AHB1Periph_GPIOE

#define PIN_LED           GPIO_Pin_14
#define PORT_LED          GPIOF
#define RCC_Per_LED       RCC_AHB1Periph_GPIOF

#define PIN_COS           GPIO_Pin_11
#define PORT_COS          GPIOE
#define RCC_Per_COS       RCC_AHB1Periph_GPIOE

#define PIN_DSTAR         GPIO_Pin_0
#define PORT_DSTAR        GPIOC
#define RCC_Per_DSTAR     RCC_AHB1Periph_GPIOC

#define PIN_DMR           GPIO_Pin_3
#define PORT_DMR          GPIOC
#define RCC_Per_DMR       RCC_AHB1Periph_GPIOC

#define PIN_YSF           GPIO_Pin_3
#define PORT_YSF          GPIOF
#define RCC_Per_YSF       RCC_AHB1Periph_GPIOF

#define PIN_P25           GPIO_Pin_5
#define PORT_P25          GPIOF
#define RCC_Per_P25       RCC_AHB1Periph_GPIOF

#define PIN_NXDN          GPIO_Pin_9
#define PORT_NXDN         GPIOG
#define RCC_Per_NXDN      RCC_AHB1Periph_GPIOG

#define PIN_POCSAG        GPIO_Pin_14
#define PORT_POCSAG       GPIOG
#define RCC_Per_POCSAG    RCC_AHB1Periph_GPIOG

#define PIN_EXT_CLK       GPIO_Pin_15
#define SRC_EXT_CLK       GPIO_PinSource15
#define PORT_EXT_CLK      GPIOA

// ADC1
#define PIN_RX            GPIO_Pin_3
#define PIN_RX_CH         ADC_Channel_3
#define PORT_RX           GPIOA
#define RCC_Per_RX        RCC_AHB1Periph_GPIOA

// ADC3
#define PIN_RSSI          GPIO_Pin_10
#define PIN_RSSI_CH       ADC_Channel_8
#define PORT_RSSI         GPIOF
#define RCC_Per_RSSI      RCC_AHB1Periph_GPIOF

// DAC2
#define PIN_TX            GPIO_Pin_5
#define PIN_TX_CH         DAC_Channel_2

#endif