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

#define seg_A 0
#define seg_B 1
#define seg_C 2
#define seg_D 3
#define seg_E 4
#define seg_F 5
#define seg_G 6
#define seg_DP 7

#define PORT_seg_A PD
#define PORT_seg_B PD
#define PORT_seg_C PD
#define PORT_seg_D PD
#define PORT_seg_E PD
#define PORT_seg_F PD
#define PORT_seg_G PD
#define PORT_seg_DP PD

#define X LOW
#define Y HIGH

#define set_seg_A(X)    gpioSetPin(PORT_seg_A, seg_A, (X) )
#define set_seg_B(X)    gpioSetPin(PORT_seg_B, seg_B, (X) )
#define set_seg_C(X)	gpioSetPin(PORT_seg_C, seg_C, (X) )
#define set_seg_D(X)	gpioSetPin(PORT_seg_D, seg_D, (X) )
#define set_seg_E(X)	gpioSetPin(PORT_seg_E, seg_E, (X) )
#define set_seg_F(X)	gpioSetPin(PORT_seg_F, seg_F, (X) )
#define set_seg_G(X)	gpioSetPin(PORT_seg_G, seg_G, (X) )
#define set_seg_DP(X)   gpioSetPin(PORT_seg_DP, seg_DP, (X) )

#define set_seg_A(Y)    gpioSetPin(PORT_seg_A, seg_A, (Y) )
#define set_seg_B(Y)    gpioSetPin(PORT_seg_B, seg_B, (Y) )
#define set_seg_C(Y)	gpioSetPin(PORT_seg_C, seg_C, (Y) )
#define set_seg_D(Y)	gpioSetPin(PORT_seg_D, seg_D, (Y) )
#define set_seg_E(Y)	gpioSetPin(PORT_seg_E, seg_E, (Y) )
#define set_seg_F(Y)	gpioSetPin(PORT_seg_F, seg_F, (Y) )
#define set_seg_G(Y)	gpioSetPin(PORT_seg_G, seg_G, (Y) )
#define set_seg_DP(Y)   gpioSetPin(PORT_seg_DP, seg_DP, (Y) )


//struct segment

// #define set_seg_A(Y)    gpioSetPin(segment.PORT_seg_A, segment.seg_A, (Y) )
/*#define set_seg_B(Y)    gpioSetPin(PORT_seg_B, seg_B, (Y) )
#define set_seg_C(Y)	gpioSetPin(PORT_seg_C, seg_C, (Y) )
#define set_seg_D(Y)	gpioSetPin(PORT_seg_D, seg_D, (Y) )
#define set_seg_E(Y)	gpioSetPin(PORT_seg_E, seg_E, (Y) )
#define set_seg_F(Y)	gpioSetPin(PORT_seg_F, seg_F, (Y) )
#define set_seg_G(Y)	gpioSetPin(PORT_seg_G, seg_G, (Y) )
#define set_seg_DP(Y)   gpioSetPin(PORT_seg_DP, seg_DP, (Y) )
*/


#endif /* SEGMENTS_H_ */