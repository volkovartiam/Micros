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

#define INIT_STATE HIGH	// or LOW

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


#endif /* SEGMENTS_H_ */