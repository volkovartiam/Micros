#ifndef LCD_H_
#define LCD_H_

#include "main.h"

//----------------------------------------
void LCD_ini(void);
void setpos(unsigned char x, unsigned y);
void str_lcd (char str1[]);
void clearlcd(void);
void sendcharlcd(unsigned char c);
//----------------------------------------
#define e1    PORTD|=0b00001000 // ��������� ����� E � 1
#define e0    PORTD&=0b11110111 // ��������� ����� E � 0
#define rs1    PORTD|=0b00000100 // ��������� ����� RS � 1 (������)
#define rs0    PORTD&=0b11111011 // ��������� ����� RS � 0 (�������)
//----------------------------------------

#endif /* LCD_H_ */