/*
 * usart.h
 *
 * Created: 07.04.2025 20:55:05
 *  Author: Artem
 */ 



#ifndef USART_H_
#define USART_H_

//Скорость передачи зависит от тактовой частоты (для 16МГц см. стр.165)
// И регистра удвоения тактовой частоты
//Задается регистром UBRRN
#define BAUD_2400 416
#define BAUD_4800 207
#define BAUD_9600 103
#define BAUD_14400 68
#define BAUD_19200 51
#define BAUD_28800 34
#define BAUD_38_4K 25
#define BAUD_57_6K 16
#define BAUD_76_8K 12
#define BAUD_115_2K 8
#define BAUD_230_4K 3
#define BAUD_250K 3
#define BAUD_0_5K 1
#define BAUD_1M 0


#include "main.h"

void USART_Init( unsigned int speed);
void USART_Transmit( unsigned char data );


#endif /* USART_H_ */