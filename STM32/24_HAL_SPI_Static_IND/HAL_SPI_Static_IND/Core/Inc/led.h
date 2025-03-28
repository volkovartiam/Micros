#ifndef LED_H_
#define LED_H_

#include "main.h"

extern uint8_t aTxBuffer[1];
extern SPI_HandleTypeDef hspi1;

#define SA_SET 	 aTxBuffer[0]&=~0x01; HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SA_RESET aTxBuffer[0]|=0x01;  HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SB_SET 	 aTxBuffer[0]&=~0x02; HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SB_RESET aTxBuffer[0]|=0x02;  HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SC_SET 	 aTxBuffer[0]&=~0x04; HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SC_RESET aTxBuffer[0]|=0x04;  HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SD_SET 	 aTxBuffer[0]&=~0x08; HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SD_RESET aTxBuffer[0]|=0x08;  HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SE_SET   aTxBuffer[0]&=~0x10; HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SE_RESET aTxBuffer[0]|=0x10;  HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SF_SET   aTxBuffer[0]&=~0x20; HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SF_RESET aTxBuffer[0]|=0x20;  HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SG_SET   aTxBuffer[0]&=~0x40; HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SG_RESET aTxBuffer[0]|=0x40;  HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SH_SET   aTxBuffer[0]&=~0x80; HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()
#define SH_RESET aTxBuffer[0]|=0x80;  HAL_SPI_Transmit(&hspi1,(uint8_t*)aTxBuffer,1,5000); cs_strob()

#define cs_set() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET)
#define cs_reset() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET)
#define cs_strob() cs_reset();cs_set()

void segchar(uint8_t seg);
void initSegment();

#endif /* LED_H_ */
