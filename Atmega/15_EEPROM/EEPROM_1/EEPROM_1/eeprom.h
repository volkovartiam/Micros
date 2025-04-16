/*
 * eeprom.h
 *
 * Created: 07.04.2025 12:52:18
 *  Author: 589
 */ 


#ifndef EEPROM_H_
#define EEPROM_H_


#include "main.h"


void EEPROM_write(unsigned int uiAddress, unsigned char ucData);	//�����
unsigned char EEPROM_read(unsigned int uiAddress);					//������

void EE_write_data_by_address(unsigned char ucData, unsigned int uiAddress);
void EE_erase_by_address(unsigned int uiAddress);

/*
void EEPROM_write_word(unsigned int uiAddress, uint16_t ucData); //����� 2�-�������� ��������
uint16_t EEPROM_read_word(unsigned int uiAddress); //������ 2�-�������� ��������
void EEPROM_write_dword(unsigned int uiAddress, uint32_t ucData); //����� 4�-�������� ��������
uint32_t EEPROM_read_dword(unsigned int uiAddress); //������ 4�-�������� ��������
void EEPROM_write_string(unsigned int uiAddress, char str1[]); //����� ������
const char* EEPROM_read_string(unsigned int uiAddress, unsigned int sz); //������ ������
*/

#endif /* EEPROM_H_ */