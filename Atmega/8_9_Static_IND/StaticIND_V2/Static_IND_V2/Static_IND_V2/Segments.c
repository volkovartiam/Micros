/*
 * 7Seg.c
 *
 * Created: 31.05.2025 14:18:44
 *  Author: Artem
 */ 

#include "Segments.h"

int X;
int Y;
int common_anode = FALSE;

void setCommonAnode(int value){
	common_anode = value;
	if(common_anode){
		X = HIGH;
		Y = LOW;
		}else{
		X = LOW;
		Y = HIGH;
	}
}

uint8_t segments[8] = {pin_A, pin_B, pin_C, pin_D, pin_E, pin_F, pin_G, pin_DP };

void show_segments_in_portD()
{
	DDRD = 0xFF;
	PORTD = 0x00;
	int size = 	sizeof(segments)/sizeof(segments[0]);
	for (int i = 0; i < size; i++){
		if(common_anode){
			PORTD = (1<<segments[i]);
		}else{
			PORTD = ~(1<<segments[i]);
		}
		_delay_ms(500);
	}
}


void init_seg(){
	set_A; set_B; set_C; set_D; set_E; set_F; set_G; set_DP;
}


void show_digit(int digit){
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


void showDigits(){
	for (int i = 0; i < 10; i++){
		show_digit(i);
		_delay_ms(500);
	}
}

