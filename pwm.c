/*
 * pwm.c
 *
 *  Created on: May 12, 2023
 *      Author: Abdelrhman Hesham
 */

#include "pwm.h"
#include <avr/io.h>
#include <gpio.h>

void PWM_TIMER0_START(uint8 duty_cycle)
{
	duty_cycle = (duty_cycle*255)/(100);
	TCCR0 = (1<<CS01) | (1<<WGM00) | (1<<WGM01) | (1<<COM01);
	GPIO_setupPinDirection(PORTB_ID, PIN3_ID, PIN_OUTPUT);
}
