/*
 * _7Seg.h
 *
 * Created: 02.06.2025 20:40:09
 *  Author: Artem
 */ 


#ifndef SEGMENTS_H_
#define SEGMENTS_H_

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

#define COMMON_ANODE FALSE	//  or TRUE
#define INIT_STATE HIGH	// or LOW

#define A(X)     gpioSetPin(PORT_A, pin_A, (X) )
#define B(X)     gpioSetPin(PORT_B, pin_B, (X) )
#define C(X)	 gpioSetPin(PORT_C, pin_C, (X) )
#define D(X)	 gpioSetPin(PORT_D, pin_D, (X) )
#define E(X)	 gpioSetPin(PORT_E, pin_E, (X) )
#define F(X)	 gpioSetPin(PORT_F, pin_F, (X) )
#define G(X)	 gpioSetPin(PORT_G, pin_G, (X) )
#define DP(X)    gpioSetPin(PORT_DP, pin_DP, (X) )

#define set_A  	 gpioInitPinModeAndValue(PORT_A, pin_A, MODE_OUTPUT, INIT_STATE);
#define set_B  	 gpioInitPinModeAndValue(PORT_B, pin_B, MODE_OUTPUT, INIT_STATE);
#define set_C  	 gpioInitPinModeAndValue(PORT_C, pin_C, MODE_OUTPUT, INIT_STATE);
#define set_D 	 gpioInitPinModeAndValue(PORT_D, pin_D, MODE_OUTPUT, INIT_STATE);
#define set_E 	 gpioInitPinModeAndValue(PORT_E, pin_E, MODE_OUTPUT, INIT_STATE);
#define set_F 	 gpioInitPinModeAndValue(PORT_F, pin_F, MODE_OUTPUT, INIT_STATE);
#define set_G 	 gpioInitPinModeAndValue(PORT_G, pin_G, MODE_OUTPUT, INIT_STATE);
#define set_DP 	 gpioInitPinModeAndValue(PORT_DP, pin_DP, MODE_OUTPUT, INIT_STATE);

#define set_Anode_Or_Cathode setAnodeOrCathode()

void setAnodeOrCathode();


#endif /* SEGMENTS_H_ */