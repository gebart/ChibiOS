/*
    ChibiOS/RT - Copyright (C) 2006,2007,2008,2009,2010,
                 2011,2012 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ch.h"
#include "hal.h"


/*===========================================================================*/
/* Driver exported variables.                                                */
/*===========================================================================*/

/** @brief Dynamic clock configs' identifiers.*/
ClockConfig clk_cfg_default = {
    STM32_SW_PLL,
    ((STM32_PLLMUL_VALUE - 2) << 18),
    STM32_HPRE_DIV1,
    STM32_PPRE1_DIV2,
    STM32_PPRE2_DIV2,
    STM32_ADCPRE_DIV4,
    STM32_PLLSRC_HSE,
    STM32_PLLXTPRE_DIV1,
    TRUE,
    STM32_USBPRE_DIV1P5,
    STM32_MCOSEL_NOCLOCK,
    72000000,
    72000000,
    36000000,
    36000000,
    9000000,
};

ClockConfig *CLK_CFG = &clk_cfg_default;

