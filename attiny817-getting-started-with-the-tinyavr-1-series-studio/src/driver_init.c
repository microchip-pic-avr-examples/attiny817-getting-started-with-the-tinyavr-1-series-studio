/**
 * \file
 *
 * \brief Driver initialization.
 *
 (c) 2018 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms,you may use this software and
    any derivatives exclusively with Microchip products.It is your responsibility
    to comply with third party license terms applicable to your use of third party
    software (including open source software) that may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/*
 * Code generated by START.
 *
 * This file will be overwritten when reconfiguring your START project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <system.h>

/* configure the pins and initialize the registers */
void USART_0_initialization(void)
{

	// Set pin direction to input
	PB3_set_dir(PORT_DIR_IN);

	PB3_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	// Set pin direction to output
	PB2_set_dir(PORT_DIR_OUT);

	PB2_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	USART_0_init();
}

void TCA_PWM_initialization(void)
{

	// Set pin direction to output
	PB0_set_dir(PORT_DIR_OUT);

	PB0_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	TCA_PWM_init();
}

void TCB_Duty_Frequency_Measure_initialization(void)
{

	TCB_Duty_Frequency_Measure_init();
}

void EVENT_SYSTEM_0_initialization(void)
{

	EVENT_SYSTEM_0_init();
}

/* configure the pins and initialize the registers */
void DIGITAL_GLUE_LOGIC_0_initialization(void)
{

	// Set pin direction to output
	PA7_set_dir(PORT_DIR_OUT);

	PA7_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	DIGITAL_GLUE_LOGIC_0_init();
}

/**
 * \brief System initialization
 */
void system_init()
{
	mcu_init();

	/* PORT setting on PB4 */

	// Set pin direction to output
	LED0_set_dir(PORT_DIR_OUT);

	LED0_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PB5 */

	// Set pin direction to input
	SW0_set_dir(PORT_DIR_IN);

	SW0_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	CLKCTRL_init();

	RTC_0_init();

	USART_0_initialization();

	TCA_PWM_initialization();

	TCB_Duty_Frequency_Measure_initialization();

	EVENT_SYSTEM_0_initialization();

	DIGITAL_GLUE_LOGIC_0_initialization();

	CPUINT_init();

	SLPCTRL_init();

	BOD_init();
}