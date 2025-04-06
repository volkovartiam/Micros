/*
 * usart.h
 *
 * Created: 04.04.2025 21:33:53
 *  Author: Artem
 */ 


#ifndef USART_H_
#define USART_H_

#include "main.h"

void USART_Init( unsigned int speed);
void USART_Transmit( unsigned char data );


#endif /* USART_H_ */