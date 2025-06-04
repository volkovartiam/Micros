/*
 * Static_IND_V2.c
 *
 * Created: 01.06.2025 17:47:27
 * Author : Artem
 */ 

#include "main.h"


	
struct Segments {
	uint8_t _pin_A;
	uint8_t _pin_B;
	uint8_t _pin_C;
	uint8_t _pin_D;
	uint8_t _pin_E;
	uint8_t _pin_F;
	uint8_t _pin_G;
	uint8_t _pin_DP;
		
	uint8_t _PORT_A;
	uint8_t _PORT_B;
	uint8_t _PORT_C;
	uint8_t _PORT_D;
	uint8_t _PORT_E;
	uint8_t _PORT_F;
	uint8_t _PORT_G;
	uint8_t _PORT_DP;
};


void show_digit_str(int num, struct Segments* seg){
	gpioSetPin(seg->_PORT_A,  seg->_pin_A,  LOW );
	gpioSetPin(seg->_PORT_B,  seg->_pin_B,  LOW );
	gpioSetPin(seg->_PORT_C,  seg->_pin_C,  LOW );
	gpioSetPin(seg->_PORT_D,  seg->_pin_D,  LOW );
	gpioSetPin(seg->_PORT_E,  seg->_pin_E,  LOW );
	gpioSetPin(seg->_PORT_F,  seg->_pin_F,  LOW );
	
	gpioSetPin(seg->_PORT_G,  seg->_pin_G,  HIGH );
	gpioSetPin(seg->_PORT_DP, seg->_pin_DP,  HIGH );
	
	// A(X); B(X); C(X); D(X); E(X); F(X); G(Y); DP(Y);	break;
	
}


void init_segments(struct Segments* seg){
	gpioInitPinModeAndValue( seg->_PORT_A,   seg->_pin_A,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_B,   seg->_pin_B,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_C,   seg->_pin_C,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_D,   seg->_pin_D,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_E,   seg->_pin_E,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_F,   seg->_pin_F,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_G,   seg->_pin_G,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_DP,  seg->_pin_DP,  MODE_OUTPUT,  INIT_STATE);
	
}



void init_segments_ex_2(struct Segments seg){
	gpioInitPinModeAndValue( seg._PORT_A,   seg._pin_A,   MODE_OUTPUT,  INIT_STATE);
	/*
	gpioInitPinModeAndValue( seg->_PORT_B,   seg->_pin_B,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_C,   seg->_pin_C,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_D,   seg->_pin_D,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_E,   seg->_pin_E,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_F,   seg->_pin_F,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_G,   seg->_pin_G,   MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue( seg->_PORT_DP,  seg->_pin_DP,  MODE_OUTPUT,  INIT_STATE);
	*/
}




int main(void)
{
	/*	
	show_segments_in_portD();
	init_seg();
	*/

	
	struct Segments seg_1;
		
	seg_1._pin_A = pin_A;
	seg_1._pin_B = pin_B;
	seg_1._pin_C = pin_C;
	seg_1._pin_D = pin_D;
	seg_1._pin_E = pin_E;
	seg_1._pin_F = pin_F;
	seg_1._pin_G = pin_G;
	seg_1._pin_DP = pin_DP;
		
	seg_1._PORT_A = PORT_A;
	seg_1._PORT_B = PORT_B;
	seg_1._PORT_C = PORT_C;
	seg_1._PORT_D = PORT_D;
	seg_1._PORT_E = PORT_E;
	seg_1._PORT_F = PORT_F;
	seg_1._PORT_G = PORT_G;
	seg_1._PORT_DP = PORT_DP;
	
	init_segments(&seg_1);
	show_digit_str(0, &seg_1);





	struct Segments seg_2;

	seg_2._pin_A = 4;
	seg_2._pin_B = 5;
	seg_2._pin_C = 6;
	seg_2._pin_D = 7;
	seg_2._pin_E = 0;
	seg_2._pin_F = 1;
	seg_2._pin_G = 2;
	seg_2._pin_DP = 3;

	seg_2._PORT_A = PB;
	seg_2._PORT_B = PB;
	seg_2._PORT_C = PB;
	seg_2._PORT_D = PB;
	seg_2._PORT_E = PC;
	seg_2._PORT_F = PC;
	seg_2._PORT_G = PC;
	seg_2._PORT_DP = PC;

	init_segments(&seg_2);
	show_digit_str(0, &seg_2);

    while (1) 
    {
		
		/*
		showDigits();
		for (int i = 0; i < 10; i++){
			show_digit(i);
			_delay_ms(500);
		}
		/**/	
    }
}




