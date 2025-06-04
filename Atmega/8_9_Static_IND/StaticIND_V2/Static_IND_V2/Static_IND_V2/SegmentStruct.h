/*
 * SegmentStruct.h
 *
 * Created: 02.06.2025 20:40:09
 *  Author: Artem
 */ 


#ifndef SEGMENTSTRUCT_H_
#define SEGMENTSTRUCT_H_

#include "GPIO.h"

#include <avr/io.h>
#include <util/delay.h>

#define pin_A 0
#define pin_B 1
#define pin_C 2
#define pin_D 3
#define pin_E 4
#define pin_F 5
#define pin_G 6
#define pin_DP 7

#define PORT_A PD
#define PORT_B PD
#define PORT_C PD
#define PORT_D PD
#define PORT_E PD
#define PORT_F PD
#define PORT_G PD
#define PORT_DP PD

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


#define INIT_STATE HIGH	// or LOW

/*
#define A(Z)     gpioSetPin(PORT_A, pin_A, (Z) )
#define B(Z)     gpioSetPin(PORT_B, pin_B, (Z) )
#define C(Z)	 gpioSetPin(PORT_C, pin_C, (Z) )
#define D(Z)	 gpioSetPin(PORT_D, pin_D, (Z) )
#define E(Z)	 gpioSetPin(PORT_E, pin_E, (Z) )
#define F(Z)	 gpioSetPin(PORT_F, pin_F, (Z) )
#define G(Z)	 gpioSetPin(PORT_G, pin_G, (Z) )
#define DP(Z)    gpioSetPin(PORT_DP, pin_DP, (Z) )

#define set_A  	 gpioInitPinModeAndValue(PORT_A, pin_A, MODE_OUTPUT, INIT_STATE);
#define set_B  	 gpioInitPinModeAndValue(PORT_B, pin_B, MODE_OUTPUT, INIT_STATE);
#define set_C  	 gpioInitPinModeAndValue(PORT_C, pin_C, MODE_OUTPUT, INIT_STATE);
#define set_D 	 gpioInitPinModeAndValue(PORT_D, pin_D, MODE_OUTPUT, INIT_STATE);
#define set_E 	 gpioInitPinModeAndValue(PORT_E, pin_E, MODE_OUTPUT, INIT_STATE);
#define set_F 	 gpioInitPinModeAndValue(PORT_F, pin_F, MODE_OUTPUT, INIT_STATE);
#define set_G 	 gpioInitPinModeAndValue(PORT_G, pin_G, MODE_OUTPUT, INIT_STATE);
#define set_DP 	 gpioInitPinModeAndValue(PORT_DP, pin_DP, MODE_OUTPUT, INIT_STATE);

#define set_Anode_Or_Cathode setCommonAnode()

void setCommonAnode();
*/


#endif /* SEGMENTSTRUCT_H_ */