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


#define USART_BAUDRATE 9600 // Desired Baud Rate
#define BAUD_PRESCALER (((F_CPU / (USART_BAUDRATE * 16UL))) - 1)

#define ASYNCHRONOUS (0<<UMSEL00) // USART Mode Selection

#define DISABLED    (0<<UPM00)
#define EVEN_PARITY (2<<UPM00)
#define ODD_PARITY  (3<<UPM00)
#define PARITY_MODE  DISABLED // USART Parity Bit Selection

#define ONE_BIT (0<<USBS0)
#define TWO_BIT (1<<USBS0)
#define STOP_BIT ONE_BIT      // USART Stop Bit Selection

#define FIVE_BIT  (0<<UCSZ00)
#define SIX_BIT   (1<<UCSZ00)
#define SEVEN_BIT (2<<UCSZ00)
#define EIGHT_BIT (3<<UCSZ00)
#define DATA_BIT   EIGHT_BIT  // USART Data Bit Selection

#define RX_COMPLETE_INTERRUPT         (1<<RXCIE0)
#define DATA_REGISTER_EMPTY_INTERRUPT (1<<UDRIE0)


#include "main.h"

void USART_Init(unsigned char baud);
void USART_Transmit(unsigned char data);


#endif /* USART_H_ */


