/*
 * Run_LEDs_V3.c
 *
 * Created: 29.05.2025 20:35:02
 * Author : Artem
 */ 

/*
    Note that every microcontroller has a
    different set of I/O banks. An ATMEGA328P
    would - for example - have no A bank and
    thus no PORTA/DDRA/PINA registers.
*/


#define F_CPU 16000000L

#include <avr/io.h>
#include <util/delay.h>

#define PB          1
#define PC          2
#define PD          3

#define PIN0        0
#define PIN1        1
#define PIN2        2
#define PIN3        3
#define PIN4        4
#define PIN5        5
#define PIN6        6
#define PIN7        7

#define MODE_INPUT  0
#define MODE_OUTPUT 1

#define PULLUP      1
#define NOPULL      0

#define HIGH      1
#define LOW       0

#define delay 500

void gpioSetPinMode(uint8_t port, uint8_t pin, uint8_t mode, uint8_t initialValue) {
    switch(port) {
        case PB:
            if(mode == MODE_INPUT) {
                DDRB = DDRB & (~(1 << pin));
            } else {
                DDRB = DDRB | (1 << pin);
            }
            if(initialValue) {
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
            if(initialValue) {
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
            if(initialValue) {
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


/*
void gpioSetPinMode(uint8_t port, uint8_t pin, uint8_t mode, uint8_t initialValue) {
uint8_t gpioReadPin(uint8_t port, uint8_t pin) {
void gpioSetPin(uint8_t port, uint8_t pin, uint8_t value) {
*/

int main(void)
{
	int pins = 8;
	int repeat = 4;
	
	for(int pin = 0; pin < pins; pin++){
//		gpioSetPinMode(PD, 0, MODE_OUTPUT, LOW);
		gpioSetPinMode(PD, pin, MODE_OUTPUT, HIGH);
	}

    while (1) 
    {
		for(int pin = 0; pin < pins; pin++){		 
			for(int i = 0; i < repeat; i++){		
				gpioTogglePin(PD, pin);
				_delay_ms(delay);
			}
		}
    }
}

