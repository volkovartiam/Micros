/*
 * Run_LEDs_V2.c
 *
 * Created: 28.05.2025 20:45:13
 * Author : Artem
 */ 

//F_CPU должна задаваться перед подключаемыми библиотеками для задержки в железе
#define F_CPU 16000000L

#include <avr/io.h>
#include <util/delay.h>

//F_CPU должна задаваться после подключаемыми библиотеками для задержки в Proteus
//#define F_CPU 16000000L

#define PORTD7 7
#define PORTD6 6
#define PORTD5 5
#define PORTD4 4
#define PORTD3 3
#define PORTD2 2
#define PORTD1 1
#define PORTD0 0
 
#define OUT(x) (1<<x)
#define IN(x) (0<<x)

#define LOW(x) (0<<x)
#define HIGH(x) (1<<x)

#define delay 500

int main(void)
{
	/*
	//Инициализация 1-й способ
	DDRD = 0xFF;
	PORTD = 0b00000000;
	
	//Инициализация 2-й способ
	DDRD |= (1<<PORTD0)|(1<<PORTD1)|(1<<PORTD2)|(1<<PORTD3)|(1<<PORTD4)|(1<<PORTD5)|(1<<PORTD6)|(1<<PORTD7);
	PORTD |= (0<<PORTD0)|(0<<PORTD1)|(0<<PORTD2)|(0<<PORTD3)|(0<<PORTD4)|(0<<PORTD5)|(0<<PORTD6)|(0<<PORTD7);
	*/
	//Инициализация 3-й способ
	DDRD |=  OUT(PORTD0)|OUT(PORTD1)|OUT(PORTD2)|OUT(PORTD3)|OUT(PORTD4)|OUT(PORTD5)|OUT(PORTD6)|OUT(PORTD7);
	PORTD |= HIGH(PORTD0)|HIGH(PORTD1)|HIGH(PORTD2)|HIGH(PORTD3)|HIGH(PORTD4)|HIGH(PORTD5)|HIGH(PORTD6)|HIGH(PORTD7);
	
	
	PORTD |= (1<<(PORTD2));		//ON
	_delay_ms(delay);
	PORTD &= ~(1<<(PORTD2));	//OFF
	_delay_ms(delay);
	
	while (1)
	{
		for(char i = 0; i<=7; i++){
			PORTD = (1<<i);
			PORTD = ~PORTD;
			_delay_ms(delay);

			PIND = (1<<i);
			_delay_ms(delay);

			PORTD &= ~(1<<i);
			_delay_ms(delay);
			
			PIND = (1<<i);
			_delay_ms(delay);
		}
	}
	
}


