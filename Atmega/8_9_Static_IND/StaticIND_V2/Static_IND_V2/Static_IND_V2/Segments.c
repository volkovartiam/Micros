/*
 * 7Seg.c
 *
 * Created: 31.05.2025 14:18:44
 *  Author: Artem
 */ 

#include "Segments.h"

uint8_t segments[8] = {seg_A, seg_B, seg_C, seg_D, seg_E, seg_F, seg_G, seg_DP };

void show_segments_in_portD()
{
	DDRD = 0xFF;
	PORTD = 0x00;
	int size = 	sizeof(segments)/sizeof(segments[0]);
	for (int i = 0; i < size; i++){
		PORTD = ~(1<<segments[i]);
		//PORTD = (1<<segments[i]);
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
	
	def_seg._seg_A = seg_A;
	def_seg._seg_B = seg_B;
	def_seg._seg_C = seg_C;
	def_seg._seg_D = seg_D;
	def_seg._seg_E = seg_E;
	def_seg._seg_F = seg_F;
	def_seg._seg_G = seg_G;
	def_seg._seg_DP = seg_DP;
		
	def_seg._PORT_seg_A = PORT_seg_A;
	def_seg._PORT_seg_B = PORT_seg_B;
	def_seg._PORT_seg_C = PORT_seg_C;
	def_seg._PORT_seg_D = PORT_seg_D;
	def_seg._PORT_seg_E = PORT_seg_E;
	def_seg._PORT_seg_F = PORT_seg_F;
	def_seg._PORT_seg_G = PORT_seg_G;
	def_seg._PORT_seg_DP = PORT_seg_DP;
	
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


void init_seg(){
	
	gpioInitPinModeAndValue(def_seg._PORT_seg_A,  def_seg._seg_A,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_B,  def_seg._seg_B,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_C,  def_seg._seg_C,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_D,  def_seg._seg_D,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_E,  def_seg._seg_E,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_F,  def_seg._seg_F,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_G,  def_seg._seg_G,  MODE_OUTPUT,  HIGH);
	gpioInitPinModeAndValue(def_seg._PORT_seg_DP, def_seg._seg_DP, MODE_OUTPUT,  HIGH);
	
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





void segchar(int seg){
	switch (seg)
	{
		case 1: 
			set_seg_A(Y);
			set_seg_B(X); 
			set_seg_C(X); 
			set_seg_D(Y);
			set_seg_E(Y);
			set_seg_F(Y);
			set_seg_G(Y);
			set_seg_DP(Y);
			break;
		case 2: 
			set_seg_A(X);
			set_seg_B(X);
			set_seg_C(Y);
			set_seg_D(X);
			set_seg_E(X);
			set_seg_F(Y);
			set_seg_G(X);
			set_seg_DP(Y);
			break;
		case 3: 
			set_seg_A(X);
			set_seg_B(X);
			set_seg_C(X);
			set_seg_D(X);
			set_seg_E(Y);
			set_seg_F(Y);
			set_seg_G(X);
			set_seg_DP(Y);		
			break;
		case 4: 
			set_seg_A(Y);
			set_seg_B(X);
			set_seg_C(X);
			set_seg_D(Y);
			set_seg_E(Y);
			set_seg_F(X);
			set_seg_G(X);
			set_seg_DP(Y);
			break;
		case 5: 
			set_seg_A(X);
			set_seg_B(Y);
			set_seg_C(X);
			set_seg_D(X);
			set_seg_E(Y);
			set_seg_F(X);
			set_seg_G(X);
			set_seg_DP(Y);
			break;
		case 6: 
			set_seg_A(X);
			set_seg_B(Y);
			set_seg_C(X);
			set_seg_D(X);
			set_seg_E(X);
			set_seg_F(X);
			set_seg_G(X);
			set_seg_DP(Y);
			break;
		case 7: 
			set_seg_A(X);
			set_seg_B(X);
			set_seg_C(X);
			set_seg_D(Y);
			set_seg_E(Y);
			set_seg_F(Y);
			set_seg_G(Y);
			set_seg_DP(Y);
			break;
		case 8: 
			set_seg_A(X);
			set_seg_B(X);
			set_seg_C(X);
			set_seg_D(X);
			set_seg_E(X);
			set_seg_F(X);
			set_seg_G(X);
			set_seg_DP(Y);
			break;
		case 9: 
			set_seg_A(X);
			set_seg_B(X);
			set_seg_C(X);
			set_seg_D(X);
			set_seg_E(Y);
			set_seg_F(X);
			set_seg_G(X);
			set_seg_DP(Y);
			break;
		case 0: 
			set_seg_A(X);
			set_seg_B(X);
			set_seg_C(X);
			set_seg_D(X);
			set_seg_E(X);
			set_seg_F(X);
			set_seg_G(Y);
			set_seg_DP(Y);
			break;
	}
}

void showDigits(){
	for (int i = 0; i < 10; i++){
		segchar(i);
		_delay_ms(500);
		init_seg();
	}
}

