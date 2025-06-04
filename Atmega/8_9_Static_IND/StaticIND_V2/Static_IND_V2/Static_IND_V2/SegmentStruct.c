/*
 * 7Seg.c
 *
 * Created: 31.05.2025 14:18:44
 *  Author: Artem
 */ 

#include "SegmentStruct.h"



int X;
int Y;
int common_anode_struct = FALSE;

void setCommonAnodeStruct(int value){
	common_anode_struct = value;
	if(common_anode_struct){
		X = HIGH;
		Y = LOW;
		}else{
		X = LOW;
		Y = HIGH;
	}
}


void init_seg_struct_by_default(struct Segment* seg){

	seg->_pin_A = pin_A;
	seg->_pin_B = pin_B;
	seg->_pin_C = pin_C;
	seg->_pin_D = pin_D;
	seg->_pin_E = pin_E;
	seg->_pin_F = pin_F;
	seg->_pin_G = pin_G;
	seg->_pin_DP = pin_DP;
	
	seg->_PORT_A = PORT_A;
	seg->_PORT_B = PORT_B;
	seg->_PORT_C = PORT_C;
	seg->_PORT_D = PORT_D;
	seg->_PORT_E = PORT_E;
	seg->_PORT_F = PORT_F;
	seg->_PORT_G = PORT_G;
	seg->_PORT_DP = PORT_DP;
	
}


void init_seg_struct(struct Segment* seg){

	#define set_seg_pin(PORT, PIN) gpioInitPinModeAndValue( PORT,  PIN,   MODE_OUTPUT,  INIT_STATE);
	set_seg_pin( seg->_PORT_A,   seg->_pin_A);
	set_seg_pin( seg->_PORT_B,   seg->_pin_B);
	set_seg_pin( seg->_PORT_C,   seg->_pin_C);
	set_seg_pin( seg->_PORT_D,   seg->_pin_D);
	set_seg_pin( seg->_PORT_E,   seg->_pin_E);
	set_seg_pin( seg->_PORT_F,   seg->_pin_F);
	set_seg_pin( seg->_PORT_G,   seg->_pin_G);
	set_seg_pin( seg->_PORT_DP,  seg->_pin_DP);
}



void show_seg_digit(int digit, struct Segment* seg){
	
	#define A(Z) gpioSetPin(seg->_PORT_A, seg->_pin_A, (Z) )
	#define B(Z) gpioSetPin(seg->_PORT_B, seg->_pin_B, (Z) )
	#define C(Z) gpioSetPin(seg->_PORT_C, seg->_pin_C, (Z) )
	#define D(Z) gpioSetPin(seg->_PORT_D, seg->_pin_D, (Z) )
	#define E(Z) gpioSetPin(seg->_PORT_E, seg->_pin_E, (Z) )
	#define F(Z) gpioSetPin(seg->_PORT_F, seg->_pin_F, (Z) )
	#define G(Z) gpioSetPin(seg->_PORT_G, seg->_pin_G, (Z) )
	#define DP(Z) gpioSetPin(seg->_PORT_DP, seg->_pin_DP, (Z) )
	
	switch (digit)
	{
		case 0:
		A(X); B(X); C(X); D(X); E(X); F(X); G(Y); DP(Y);	break;
		case 1:
		A(Y); B(X); C(X); D(Y); E(Y); F(Y); G(Y); DP(Y); 	break;
		case 2:
		A(X); B(X); C(Y); D(X); E(X); F(Y); G(X); DP(Y); 	break;
		case 3:
		A(X); B(X); C(X); D(X); E(Y); F(Y); G(X); DP(Y);	break;
		case 4:
		A(Y); B(X); C(X); D(Y); E(Y); F(X); G(X); DP(Y); 	break;
		case 5:
		A(X); B(Y); C(X); D(X); E(Y); F(X); G(X); DP(Y); 	break;
		case 6:
		A(X); B(Y); C(X); D(X);	E(X); F(X); G(X); DP(Y);	break;
		case 7:
		A(X); B(X); C(X); D(Y); E(Y); F(Y); G(Y); DP(Y); 	break;
		case 8:
		A(X); B(X); C(X); D(X); E(X); F(X); G(X); DP(Y);	break;
		case 9:
		A(X); B(X); C(X); D(X); E(Y); F(X); G(X); DP(Y);	break;
	}
	
}


void show_seg_digits(struct Segment* seg){
	for (int i = 0; i < 10; i++){
		show_seg_digit(i, seg);
		_delay_ms(500);
	}
}



