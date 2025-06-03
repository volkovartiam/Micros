/*
 * 7Seg.c
 *
 * Created: 31.05.2025 14:18:44
 *  Author: Artem
 */ 

#include "Segments.h"

int X;
int Y;

void setAnodeOrCathode(){
	if(COMMON_ANODE){
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
		if(COMMON_ANODE){
			PORTD = (1<<segments[i]);
		}else{
			PORTD = ~(1<<segments[i]);
		}
		_delay_ms(500);
	}
}



void init_seg(){
	set_Anode_Or_Cathode;  
	set_A; set_B; set_C; set_D; set_E; set_F; set_G; set_DP;
}

void show_digit(int seg){
	switch (seg)
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







struct segment
{
	uint8_t _seg_A;
	uint8_t _seg_B;
	uint8_t _seg_C;
	uint8_t _seg_D;
	uint8_t _seg_E;
	uint8_t _seg_F;
	uint8_t _seg_G;
	uint8_t _seg_DP;
	
	uint8_t _PORT_seg_A;
	uint8_t _PORT_seg_B;
	uint8_t _PORT_seg_C;
	uint8_t _PORT_seg_D;
	uint8_t _PORT_seg_E;
	uint8_t _PORT_seg_F;
	uint8_t _PORT_seg_G;
	uint8_t _PORT_seg_DP;
};

 
struct segment def_seg;
void init_struct_default_segments(){
	
	def_seg._seg_A = pin_A;
	def_seg._seg_B = pin_B;
	def_seg._seg_C = pin_C;
	def_seg._seg_D = pin_D;
	def_seg._seg_E = pin_E;
	def_seg._seg_F = pin_F;
	def_seg._seg_G = pin_G;
	def_seg._seg_DP = pin_DP;
		
	def_seg._PORT_seg_A = PORT_A;
	def_seg._PORT_seg_B = PORT_B;
	def_seg._PORT_seg_C = PORT_C;
	def_seg._PORT_seg_D = PORT_D;
	def_seg._PORT_seg_E = PORT_E;
	def_seg._PORT_seg_F = PORT_F;
	def_seg._PORT_seg_G = PORT_G;
	def_seg._PORT_seg_DP = PORT_DP;
	
	/*
	gpioInitPinModeAndValue(def_seg._PORT_seg_A,  def_seg._seg_A,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_B,  def_seg._seg_B,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_C,  def_seg._seg_C,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_D,  def_seg._seg_D,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_E,  def_seg._seg_E,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_F,  def_seg._seg_F,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_G,  def_seg._seg_G,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_DP, def_seg._seg_DP, MODE_OUTPUT,  HIGH);
	*/
	init_seg();
}


void init_seg_struct(){
	
	gpioInitPinModeAndValue(def_seg._PORT_seg_A,  def_seg._seg_A,  MODE_OUTPUT,  X);
	gpioInitPinModeAndValue(def_seg._PORT_seg_B,  def_seg._seg_B,  MODE_OUTPUT,  X);
	gpioInitPinModeAndValue(def_seg._PORT_seg_C,  def_seg._seg_C,  MODE_OUTPUT,  X);
	gpioInitPinModeAndValue(def_seg._PORT_seg_D,  def_seg._seg_D,  MODE_OUTPUT,  X);
	gpioInitPinModeAndValue(def_seg._PORT_seg_E,  def_seg._seg_E,  MODE_OUTPUT,  X);
	gpioInitPinModeAndValue(def_seg._PORT_seg_F,  def_seg._seg_F,  MODE_OUTPUT,  X);
	gpioInitPinModeAndValue(def_seg._PORT_seg_G,  def_seg._seg_G,  MODE_OUTPUT,  X);
	gpioInitPinModeAndValue(def_seg._PORT_seg_DP, def_seg._seg_DP, MODE_OUTPUT,  X);
	
	/*
	gpioInitPinModeAndValue(PORT_seg_A, seg_A, MODE_OUTPUT, HIGH);
	gpioInitPinModeAndValue(PORT_seg_B, seg_B, MODE_OUTPUT, HIGH);
	gpioInitPinModeAndValue(PORT_seg_C, seg_C, MODE_OUTPUT, HIGH);
	gpioInitPinModeAndValue(PORT_seg_D, seg_D, MODE_OUTPUT, HIGH);
	gpioInitPinModeAndValue(PORT_seg_E, seg_E, MODE_OUTPUT, HIGH);
	gpioInitPinModeAndValue(PORT_seg_F, seg_F, MODE_OUTPUT, HIGH);
	gpioInitPinModeAndValue(PORT_seg_G, seg_G, MODE_OUTPUT, HIGH);
	gpioInitPinModeAndValue(PORT_seg_DP, seg_DP, MODE_OUTPUT, HIGH);
	*/
}




