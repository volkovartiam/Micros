/*
 * Dinamic_IND.c
 *
 * Created: 01.04.2025 15:04:22
 * Author : 589
 */ 


#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define F_CPU = 12000000L

void segchar(unsigned char seg);

unsigned char R1=0, R2=0, R3=0, R4=0;
unsigned char n_count=0;
int i = 1234;

void segchar(unsigned char seg)
{
	switch(seg)
	{
		case 1: PORTD = 0b11111001; break;
		case 2: PORTD = 0b10100100; break;
		case 3: PORTD = 0b10110000; break;
		case 4: PORTD = 0b10011001; break;
		case 5: PORTD = 0b10010010; break;
		case 6: PORTD = 0b10000010; break;
		case 7: PORTD = 0b11111000; break;
		case 8: PORTD = 0b10000000; break;
		case 9: PORTD = 0b10010000; break;
		case 0: PORTD = 0b11000000; break;
	}
}


void timer_ini(void)
{
	TCCR1B |= (1<<WGM12); // устанавливаем режим СТС (сброс по совпадению)
	TIMSK1 |= (1<<OCIE1A);	//устанавливаем бит разрешения прерывания 1ого счетчика по совпадению с OCR1A(H и L)
	OCR1AH = 0b00001111; //записываем в регистр число для сравнения
	OCR1AL = 0b01000010;
	//TCCR1B |= (1<<CS11);//установим делитель.
}
//--------------------------------------------

//--------------------------------------------
ISR (TIMER1_COMPA_vect)
{
	ledprint(i);
	change_i();
}


void ledprint(int number)
{
	int R0 = number%10;
	int R1 = number%100/10;
	int R2 = number%1000/100;
	int R3 = number/1000;

	int delayTimer = 5;
	
	segchar(R0);
	PORTB&=~(1<<PORTB0);
	PORTB|=(1<<PORTB0);
	_delay_ms(delayTimer);
/*

	segchar(R1);
	reset_ON_LED_0;
	reset_ON_LED_1;
	set_ON_LED_2;
	reset_ON_LED_3;
	_delay_ms(delayTimer);

	segchar(R2);
	reset_ON_LED_0;
	set_ON_LED_1;
	reset_ON_LED_2;
	reset_ON_LED_3;
	_delay_ms(delayTimer);
	
	segchar(R3);
	set_ON_LED_0;
	reset_ON_LED_1;
	reset_ON_LED_2;
	reset_ON_LED_3;
	_delay_ms(delayTimer);
	*/
}


void change_i(){
	if(i >= 9999){
		i = 0;
		} else {
		i++;
	}

}




int main(void)
{
	
	DDRD = 0xFF;
	PORTD = 0x00;
	
	DDRB = 0b00001111;
	PORTB = 0b00000000;

	
    /* Replace with your application code */
    while (1) 
    {
		

		/*	
		for (int i = 0; i < 10; i++)
		{
			segchar(i);
			_delay_ms(500);
		}
		*/
		
    }
}

