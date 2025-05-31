/*
 * Atmega328P.c
 *
 * Created: 31.05.2025 13:32:16
 * Author : Artem
 */ 

#include "main.h"

#define delay 500

int main(void)
{

	//Настройка порта D
	int pins = 8;
	int repeat = 2;
	for(int pin = 0; pin < pins; pin++){
		gpioSetPinMode(PD, pin, MODE_OUTPUT, HIGH);
	}

	//Настройка порта B
	//0...4 - pull_up
	gpioSetPinMode(PB, PIN0, MODE_INPUT, PULLUP);
	gpioSetPinMode(PB, PIN1, MODE_INPUT, PULLUP);
	gpioSetPinMode(PB, PIN2, MODE_INPUT, PULLUP);
	gpioSetPinMode(PB, PIN3, MODE_INPUT, PULLUP);
	//5...8 - no_pull
	gpioSetPinMode(PB, PIN4, MODE_INPUT, NOPULL);
	gpioSetPinMode(PB, PIN5, MODE_INPUT, NOPULL);
	gpioSetPinMode(PB, PIN6, MODE_INPUT, NOPULL);
	gpioSetPinMode(PB, PIN7, MODE_INPUT, NOPULL);

	//Мигание светодиодами
	for(int pin = 0; pin < pins; pin++){
		for(int i = 0; i < repeat; i++){
			gpioTogglePin(PD, pin);
			_delay_ms(delay);
		}
	}

	while (1)
	{

		for(int i = 0; i<pins; i++){
			if(gpioReadPin(PB, i) ){
				gpioSetPin(PD, i, HIGH);
			}else{
				gpioSetPin(PD, i, LOW);
			}
		}

	}
}



