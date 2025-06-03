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


struct Segment {
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

struct Segment def_seg;
/**/
void init_struct_default_segments(){
	
	def_seg._pin_A = pin_A;
	def_seg._pin_B = pin_B;
	def_seg._pin_C = pin_C;
	def_seg._pin_D = pin_D;
	def_seg._pin_E = pin_E;
	def_seg._pin_F = pin_F;
	def_seg._pin_G = pin_G;
	def_seg._pin_DP = pin_DP;
		
	def_seg._PORT_A = PORT_A;
	def_seg._PORT_B = PORT_B;
	def_seg._PORT_C = PORT_C;
	def_seg._PORT_D = PORT_D;
	def_seg._PORT_E = PORT_E;
	def_seg._PORT_F = PORT_F;
	def_seg._PORT_G = PORT_G;
	def_seg._PORT_DP = PORT_DP;
}
/**/

//void init_seg_struct(struct Segment& def_seg){
//void init_seg_struct(struct Segment def_seg){
void init_seg_struct(){
	
	set_Anode_Or_Cathode;
	
	#define set_struct(PORT, PIN) gpioInitPinModeAndValue( PORT,  PIN,  MODE_OUTPUT,  LOW )
	
	set_struct(def_seg._PORT_A,  def_seg._pin_A);
	set_struct(def_seg._PORT_B,  def_seg._pin_B);
	set_struct(def_seg._PORT_C,  def_seg._pin_C);
	set_struct(def_seg._PORT_D,  def_seg._pin_D);
	set_struct(def_seg._PORT_E,  def_seg._pin_E);
	set_struct(def_seg._PORT_F,  def_seg._pin_F);
	set_struct(def_seg._PORT_G,  def_seg._pin_G);
	set_struct(def_seg._PORT_DP,  def_seg._pin_DP);


	/*
	gpioInitPinModeAndValue(def_seg._PORT_A,  def_seg._pin_A,  MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue(def_seg._PORT_B,  def_seg._pin_B,  MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue(def_seg._PORT_C,  def_seg._pin_C,  MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue(def_seg._PORT_D,  def_seg._pin_D,  MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue(def_seg._PORT_E,  def_seg._pin_E,  MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue(def_seg._PORT_F,  def_seg._pin_F,  MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue(def_seg._PORT_G,  def_seg._pin_G,  MODE_OUTPUT,  INIT_STATE);
	gpioInitPinModeAndValue(def_seg._PORT_DP, def_seg._pin_DP, MODE_OUTPUT,  INIT_STATE);
	*/
}




