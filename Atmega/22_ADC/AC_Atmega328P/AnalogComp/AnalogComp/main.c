/*
 * AnalogComp.c
 *
 * Created: 03.05.2025 19:17:53
 * Author : Artem
 */ 


#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


/*
In the above circuit diagram, the two input signals are connected to the AIN0 and AIN1 pins of PORTB.
The output of the comparator is shown by the LED which is connected to the PC7 pin (Pin No. 29).
When the AIN0 pin voltage is greater than the AIN1 pin voltage then the output LED will glow, otherwise LED will off.

https://www.electronicwings.com/avr-atmega/atmega1632-analog-comparator
Enable AIN1 for negative input, by clearing ACME bit of SFIOR register
Clear ACSR register.
Monitor ACO bit of ACSR register, and take decision accordingly.
*/


/*
ADCSRB - ADC control and status register B 
ACME - Analog Comparator Multiplexer Enable

ACSR  - Analog comparator control and status register
ACD - Analog comparator disable
ACBG - Analog comparator bandgap select
ACO - Analog comparator output
ACI - Analog comparator Interrupt Flag
ACIE - Analog comparator interrupås enable
ACIC - Analog comparator input capture enable
ACIS1, ACIS0 - - Analog comparator interrupt mode select

DIDR - Digital input disable register 1
AIN1D, AIN0D -  AIN1, AIN0 Digital input disable 
*/


int main()
{

	DDRB |= 0xFF;					/* Make pin 7 of PORTC is output */
	PORTB = 0x00;

	ADCSRB &= (1<<ACME);			/* Enable AIN1 for input */
	ACSR &= 0x00;					/* Clear ACSR register */
	
	//ACSR |= (1<<ACBG);				//Analog comparator bandgap select
	
	while(1)
	{
		if (ACSR & (1<<ACO)) {		/* Check ACO bit of ACSR register */
			PORTB = 0xFF;	
		}							/* Turn ON PB port */
		else {						/* If ACO bit is zero */
			PORTB = 0x00;			/* Then	turn OFF PC7 pin */
		}
	}
}

