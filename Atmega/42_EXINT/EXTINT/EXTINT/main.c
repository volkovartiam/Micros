/*
 * EXTINT.c
 *
 * Created: 05.05.2025 14:04:20
 * Author : 589
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

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
Bits 7:0 Ц PCINT[23:16]?Pin Change Enable Mask

PCMSK1 - Pin Change Mask Register 1
Bits 6:0 Ц PCINT[14:8]?Pin Change Enable Mask

PCMSK0 - Pin Change Mask Register 0
Bits 7:0 Ц PCINT[7:0]?Pin Change Enable Mask
*/

#define INT1_LOW_LEVEL (0<<ISC11)|(0<<ISC10)
#define INT1_LOGICAL_CHANGE (0<<ISC11)|(1<<ISC10)
#define INT1_Falling (1<<ISC11)|(0<<ISC10)
#define INT1_Rising (1<<ISC11)|(1<<ISC10)

#define INT0_LOW_LEVEL (0<<ISC01)|(0<<ISC00)
#define INT0_LOGICAL_CHANGE (0<<ISC01)|(1<<ISC00)
#define INT0_Falling (1<<ISC01)|(0<<ISC00)
#define INT0_Rising (1<<ISC01)|(1<<ISC00)

#define INT0_Enable (1<<INT0)
#define INT1_Enable (1<<INT1)

#define LED_PIN (1<<PORTB5)

void port_init(void)
{
	DDRB |= LED_PIN;						//¬ключим ножку светодиода на выход					//0b00100000
	DDRD &= ~((1<<PORTD2)|(1<<PORTD3));		//¬ключим ножки INT0 и INT1 (PD2 и PD3)  на вход	//(0b00001100);   
	PORTD |= (1<<PORTD2)|(1<<PORTD3);		//ѕодт€нем резистор на ножках INT0 и INT1 (PD2 и PD3) к питанию	//0b00001100;
}

void interrupt_init(void)
{
	EICRA|= INT0_Falling|INT1_Falling;
	EIMSK|= INT0_Enable|INT1_Enable;
}

ISR(INT0_vect)
{
	PORTB |= LED_PIN;
}

ISR(INT1_vect)
{
	PORTB &= ~(LED_PIN);
}


int main(void)
{
	port_init();
	interrupt_init();
	sei();
	while (1)
	{
	}
}

