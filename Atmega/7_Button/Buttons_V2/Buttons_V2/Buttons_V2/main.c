/*
 * Buttons_V2.c
 *
 * Created: 31.05.2025 11:50:54
 * Author : Artem
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

#define PIN0_OUT    0x01
#define PIN1_OUT    0x02
#define PIN2_OUT    0x04
#define PIN3_OUT    0x08
#define PIN4_OUT    0x10
#define PIN5_OUT    0x20
#define PIN6_OUT    0x40
#define PIN7_OUT    0x80
#define PIN1_7_OUT  0xFF

#define PIN0_HIGH    (1<<0)
#define PIN1_HIGH    (1<<1)
#define PIN2_HIGH    (1<<2)
#define PIN3_HIGH    (1<<3)
#define PIN4_HIGH    (1<<4)
#define PIN5_HIGH    (1<<5)
#define PIN6_HIGH    (1<<6)
#define PIN7_HIGH    (1<<7)
#define PIN1_7_HIGH  (0xFF)

#define PIN0_LOW   0
#define PIN1_LOW   0
#define PIN2_LOW   0
#define PIN3_LOW   0
#define PIN4_LOW   0
#define PIN5_LOW   0
#define PIN6_LOW   0
#define PIN7_LOW   0
#define PIN1_7_LOW 0


#define PIN0_IN     0x00
#define PIN1_IN     0x00
#define PIN2_IN     0x00
#define PIN3_IN     0x00
#define PIN4_IN     0x00
#define PIN5_IN     0x00
#define PIN6_IN     0x00
#define PIN7_IN     0x00
//DDRA = PIN0_OUT | PIN1_IN | PIN2_IN | PIN3_IN | PIN4_IN | PIN5_IN | PIN6_IN | PIN7_IN;


#define PIN0_PULLUP    0x01
#define PIN1_PULLUP    0x02
#define PIN2_PULLUP    0x04
#define PIN3_PULLUP    0x08
#define PIN4_PULLUP    0x10
#define PIN5_PULLUP    0x20
#define PIN6_PULLUP    0x40
#define PIN7_PULLUP    0x80
#define PIN1_7_PULLUP  0xFF

#define PIN0_NOPULL    0x00
#define PIN1_NOPULL    0x00
#define PIN2_NOPULL    0x00
#define PIN3_NOPULL    0x00
#define PIN4_NOPULL    0x00
#define PIN5_NOPULL    0x00
#define PIN6_NOPULL    0x00
#define PIN7_NOPULL    0x00
//PORTA = PIN0_PULLUP | PIN1_PULLUP | PIN2_NOPULL | PIN3_NOPULL | PIN4_NOPULL | PIN5_NOPULL | PIN6_NOPULL | PIN7_NOPULL;


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


int pins = 8;
int repeat = 4;
int x = 0;

int main(void)
{
	/*int*/ pins = 8;
	/*int*/ repeat = 4;
	
	DDRD =  PIN0_OUT   | PIN1_OUT   | PIN2_OUT   | PIN3_OUT   | PIN4_OUT   | PIN5_OUT   | PIN6_OUT   | PIN7_OUT;
	PORTD = PIN0_HIGH  | PIN1_HIGH  | PIN2_HIGH  | PIN3_HIGH  | PIN4_LOW   | PIN5_LOW   | PIN6_LOW   | PIN7_LOW;

	DDRB =  PIN0_IN    | PIN1_IN    | PIN2_IN    | PIN3_IN    | PIN4_IN    | PIN5_IN    | PIN6_IN    | PIN7_IN;
	PORTB = PIN0_NOPULL| PIN1_PULLUP| PIN2_PULLUP| PIN3_PULLUP| PIN4_NOPULL| PIN5_NOPULL| PIN6_NOPULL| PIN7_NOPULL;


	/*int*/ x = 2^PIN1_HIGH;
	/**/
	for(int pin = 0; pin < pins; pin++){
		//		gpioSetPinMode(PD, 0, MODE_OUTPUT, LOW);
		gpioSetPinMode(PD, pin, MODE_OUTPUT, HIGH);
	}
	/**/

	while (1)
	{
		/*
		for(int pin = 0; pin < pins; pin++){
			for(int i = 0; i < repeat; i++){
				gpioTogglePin(PD, pin);
				_delay_ms(delay);
			}
		}
		*/
		if(PINB&(1<<PINB0) ){
			gpioSetPin(PD, PIND0, HIGH);
		}else{
			gpioSetPin(PD, PIND0, LOW);
		}
		
		
	}
}


