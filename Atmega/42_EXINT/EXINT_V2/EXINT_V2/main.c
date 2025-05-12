/*
 * EXINT_V2.c
 *
 * Created: 12.05.2025 19:55:30
 * Author : Artem
 */ 



/*
EICRA - external interrupt control register A
ISC1[1:0] (ISC11, ISC10) - interrupt sense control 1
ISC0[1:0] (ISC01, ISC00) - interrupt sense control 0

EIMSK - external interrupt mask register
INT1 - External Interrupt Request 1 Enable
INT0 - External Interrupt Request 0 Enable

EIFR - External Interrupt Flag Register
INTF1 - external interrupt flag 1
INTF0 - external interrupt flag 0

PCICR - pin change interrupt control register
PCIE2 - Pin Change Interrupt Enable 2 (Any change on any enabled PCINT[23:16] pin will cause an interrupt)
PCIE1 - Pin Change Interrupt Enable 1 (Any change on any enabled PCINT[14:8] pin will cause an interrupt)
PCIE0 - Pin Change Interrupt Enable 0 (Any change on any enabled PCINT[7:0] pin will cause an interrupt)

PCIFR - pin change interrupt flag register
PCIF2 - ?Pin Change Interrupt Flag 2
PCIF1 - ?Pin Change Interrupt Flag 1
PCIF0 - ?Pin Change Interrupt Flag 0

PCMSK2 - Pin Change Mask Register 2
Bits 7:0 – PCINT[23:16]?Pin Change Enable Mask

PCMSK1 - Pin Change Mask Register 1
Bits 6:0 – PCINT[14:8]?Pin Change Enable Mask

PCMSK0 - Pin Change Mask Register 0
Bits 7:0 – PCINT[7:0]?Pin Change Enable Mask
*/


#include <avr/io.h>
#include <avr/interrupt.h>


int main(void)
{
	DDRB |= (1<<PORTB5);	
	PORTB |= (1<<PORTB5);	
	
	DDRD |= 0xFF;
	PORTD |= 0x00;
		
	PCICR |=  (1 << PCIE0);
	PCMSK0  |= (1 << PCINT0);
	
	sei();
	
    while (1) 
    {
    }
}


ISR(PCINT0_vect){
	if(PINB & (1<<PINB0) ){
		PIND = 0XFF;
	}
}

