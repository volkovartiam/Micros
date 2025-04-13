/*
 * twi.h
 *
 * Created: 12.04.2025 19:25:09
 *  Author: Artem
 */ 

#ifndef TWI_H_
#define TWI_H_

#include "main.h"

void I2C_Init (void); //������������� i2c
void I2C_StartCondition(void); //�������� ������� START
void I2C_StopCondition(void); //�������� ������� STOP
void I2C_SendByte(unsigned char c); //�������� ����� � ����
void I2C_SendByteByADDR(unsigned char c,unsigned char addr); //�������� ����� � ���� �� ���������� �� ������
unsigned char I2C_ReadByte(void); //������ ����
unsigned char I2C_ReadLastByte(void); //������ ��������� ����


#endif /* TWI_H_ */