/*
 * StaticIND.c
 *
 * Created: 01.04.2025 8:03:42
 * Author : 589
 */ 



#include <avr/io.h>
#include <util/delay.h>

#define F_CPU = 12000000L

/*
#ifdef SIMULATING
#define _delay_ms(n) (void)0
#else
#define _delay_ms(n) _delay_ms(n)
#endif
*/


#define SIMULATING
#if defined(SIMULATING) 
#define DELAY_MS(n)    do {} while (0)
#else 
#define DELAY_MS(n)    _delay_ms(n) 
#endif 


void segchar(unsigned char seg);
void showDigits(void);

void segchar(unsigned char seg){
	switch (seg)
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
/**/
void showDigits(void){
	for (int i = 0; i < 10; i++){
		segchar(i);
		DELAY_MS(500);
	}
}



int main(void)
{
    
	DDRD = 0xFF;
	PORTD = 0b00000000;
	
	DDRB = 0x00;
	PORTB = 0b00000001;
	
    while (1) 
    {
		
		if( !(PINB&0b00000001) ){
			showDigits();
		}
		/*
		for (int i = 0; i < 10; i++){
			segchar(i);
			_delay_ms(500);
		}
		*/
		
		
    }
}



