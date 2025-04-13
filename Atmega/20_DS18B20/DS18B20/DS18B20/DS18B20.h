/*
 * DS18B20.h
 *
 * Created: 12.04.2025 19:25:51
 *  Author: Artem
 */ 
#ifndef DS18B20_H_
#define DS18B20_H_

#include "main.h"

#define NOID 0xCC //���������� �������������
#define T_CONVERT  0x44 //��� ��������� �����������
#define READ_DATA 0xBE //�������� ������ ��������

#define PORTTEMP PORTB
#define DDRTEMP DDRB
#define PINTEMP PINB
#define BITTEMP 0

int dt_check(void); //������� �������������� ��������� ������� � �����������
char converttemp (unsigned int tt); //�������������� ����������� � �������

#endif /* DS18B20_H_ */