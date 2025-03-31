/*
 * Timer.c
 *
 * Created: 31.03.2025 8:42:32
 * Author : 589
 */ 

#define F_CPU 12000000L

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int i = 0;

void timerInit(void){
	TCCR1B |= (1<<WGM12);		// устанавливаем режим —“— (сброс по совпадению)
	TIMSK1 |= (1<<OCIE1A);		//устанавливаем бит разрешени€ прерывани€ 1ого счетчика по совпадению с OCR1A(H и L)
	OCR1AH = 0b11111010;		//записываем в регистр число дл€ сравнени€
	OCR1AL = 0b01110010;
	TCCR1B |= (1<<CS12);		//установим делитель.
	//TCCR1B |= (1<<CS10);		//установим делитель.
}


ISR(TIMER1_COMPA_vect)
{
	if(i==0) {
		PORTD = 0b00000000;
	}
	if(i==1) {
		PORTD = 0b00000001;
	}
	if(i==2){
		i=-1;
	}
	i++;

}


int main(void)
{
	
	DDRD = 0xFF;
	PORTD = 0b00000000;
	timerInit();
	sei();
	
    while (1) 
    {
		/*
		PORTD = 0b00000000;
		_delay_ms(500);
		PORTD = 0b00000001;
		_delay_ms(500);
		*/
	}
	
}



