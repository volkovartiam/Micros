/*
 * Static_IND_V2.c
 *
 * Created: 01.06.2025 17:47:27
 * Author : Artem
 */ 

#include <avr/io.h>


/*
 * StaticIND.c
 *
 * Created: 01.04.2025 8:03:42
 * Author : 589
 */ 





#include "main.h"


#define SIMULATING
#if defined(SIMULATING) 
#define DELAY_MS(n)    do {} while (0)
#else 
#define _delay_ms(n)    _delay_ms(n) 
#endif 
 
// Распиновка семисегментного индикатора 5161AS
// A - PD5
// B - PD4
// C - PD1
// D - PD2
// E - PD3
// F - PD6
// G - PD7
// DOT - PD0



/*
#define seg_A (1<<5)
#define seg_B (1<<4)
#define seg_C (1<<1)
#define seg_D (1<<2)
#define seg_E (1<<3)
#define seg_F (1<<6)
#define seg_G (1<<7)
#define seg_DOT (1<<0)
*/

#define seg_A 0
#define seg_B 1
#define seg_C 2
#define seg_D 3
#define seg_E 4
#define seg_F 5
#define seg_G 6
#define seg_DOT 7

#define PORT_seg_A PD 
#define PORT_seg_B PD
#define PORT_seg_C PD
#define PORT_seg_D PD
#define PORT_seg_E PD
#define PORT_seg_F PD
#define PORT_seg_G PD
#define PORT_seg_DOT PD


void gpioSetSEGMode(uint8_t port, uint8_t pin) {
	gpioSetPinModeNew(port, pin, MODE_OUTPUT, HIGH);
}

void gpioSetSEG(uint8_t port, uint8_t pin) {
	gpioSetPin(port, pin, LOW);
}


#define init_seg_A gpioSetSEGMode(PORT_seg_A, seg_A)
#define init_seg_B gpioSetSEGMode(PORT_seg_B, seg_B)
#define init_seg_C gpioSetSEGMode(PORT_seg_C, seg_C)
#define init_seg_D gpioSetSEGMode(PORT_seg_D, seg_D)
#define init_seg_E gpioSetSEGMode(PORT_seg_E, seg_E)
#define init_seg_F gpioSetSEGMode(PORT_seg_F, seg_F)
#define init_seg_G gpioSetSEGMode(PORT_seg_G, seg_G)
#define init_seg_DOT gpioSetSEGMode(PORT_seg_DOT, seg_DOT)


#define set_seg_A gpioSetSEG(PORT_seg_A, seg_A)
#define set_seg_B gpioSetSEG(PORT_seg_B, seg_B)
#define set_seg_C gpioSetSEG(PORT_seg_C, seg_C)
#define set_seg_D gpioSetSEG(PORT_seg_D, seg_D)
#define set_seg_E gpioSetSEG(PORT_seg_E, seg_E)
#define set_seg_F gpioSetSEG(PORT_seg_F, seg_F)
#define set_seg_G gpioSetSEG(PORT_seg_G, seg_G)
#define set_seg_DOT gpioSetSEG(PORT_seg_DOT, seg_DOT)




uint8_t segments[8] = {seg_A, seg_B, seg_C, seg_D, seg_E, seg_F, seg_G, seg_DOT };


void showDigits(void){
	for (int i = 0; i < 10; i++){
		segchar(i);
		_delay_ms(500);
	}
}


void segchar(unsigned char seg){
	switch (seg)
	{
		case 1: set_seg_B; set_seg_C; break;
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


void segchar_inv(unsigned char seg){
	switch (seg)
	{
		case 1: 
			set_seg_A; 
			set_seg_D; 
			set_seg_E;
			set_seg_F;
			set_seg_G;
			set_seg_DOT;
			break;
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


//In port D
void show_segments()
{
	int size = 	sizeof(segments)/sizeof(segments[0]);
	for (int i = 0; i < size; i++){
		PORTD = (1<<segments[i]);
		_delay_ms(500);
	}
}




int main(void)
{

	init_seg_A;
	init_seg_B;
	init_seg_C;
	init_seg_D;
	init_seg_E;
	init_seg_F;
	init_seg_G;
	init_seg_DOT;
	
	//show_segments();

    while (1) 
    {
		segchar(1);
		
    }
}




