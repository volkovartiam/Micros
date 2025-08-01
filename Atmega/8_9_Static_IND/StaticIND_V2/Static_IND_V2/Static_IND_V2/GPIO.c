/*
 * GPIO.c
 *
 * Created: 31.05.2025 14:18:44
 *  Author: Artem
 */ 

#include "GPIO.h"


void gpioInitPinModeAndValue(uint8_t port, uint8_t pin, uint8_t mode, uint8_t initValue) {
	
	switch(port) {
		case PB:
			if(mode == MODE_INPUT) {
				DDRB = DDRB & (~(1 << pin));
				} else {
				DDRB = DDRB | (1 << pin);
			}
			if(initValue) {
				PORTB = PORTB | (1 << pin);
				} else {
				PORTB = PORTB & (~(1 << pin));
			}
			return;

		case PC:
			if(mode == MODE_INPUT) {
				DDRC = DDRC & (~(1 << pin));
			} else {
				DDRC = DDRC | (1 << pin);
			}
			if(initValue) {
				PORTC = PORTC | (1 << pin);
				} else {
				PORTC = PORTC & (~(1 << pin));
			}
			return;

		case PD:
			if(mode == MODE_INPUT) {
				DDRD = DDRD & (~(1 << pin));
				} else {
				DDRD = DDRD | (1 << pin);
			}
			if(initValue) {
				PORTD = PORTD | (1 << pin);
				} else {
				PORTD = PORTD & (~(1 << pin));
			}
		return;
	}
}


uint8_t gpioReadPin(uint8_t port, uint8_t pin) {
	switch(port) {
		case PB: return (PINB & (1 << pin));
		case PC: return (PINC & (1 << pin));
		case PD: return (PIND & (1 << pin));
	}
}


uint8_t gpioTogglePin(uint8_t port, uint8_t pin) {
	switch(port) {
		case PB: PINB |= (1 << pin);
		case PC: PINC |= (1 << pin);
		case PD: PIND |= (1 << pin);
	}
}


void gpioSetPin(uint8_t port, uint8_t pin, uint8_t value) {
	switch(port) {
		case PB: PORTB = ((value != 0) ? (PORTB | (1 << pin)) : (PORTB & (~(1 << pin)))); return;
		case PC: PORTC = ((value != 0) ? (PORTC | (1 << pin)) : (PORTC & (~(1 << pin)))); return;
		case PD: PORTD = ((value != 0) ? (PORTD | (1 << pin)) : (PORTD & (~(1 << pin)))); return;
	}
}

