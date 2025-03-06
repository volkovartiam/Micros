#ifndef LED_H_
#define LED_H_

#include "stm32f1xx_hal.h"
#include "main.h"

#define SA GPIO_PIN_0
#define SB GPIO_PIN_1
#define SC GPIO_PIN_2
#define SD GPIO_PIN_3
#define SE GPIO_PIN_4
#define SF GPIO_PIN_5
#define SG GPIO_PIN_6
#define SH GPIO_PIN_7

#define SA_SET HAL_GPIO_WritePin(GPIOA, SA, GPIO_PIN_SET);
#define SA_RESET HAL_GPIO_WritePin(GPIOA, SA, GPIO_PIN_RESET);
#define SB_SET HAL_GPIO_WritePin(GPIOA, SB, GPIO_PIN_SET);
#define SB_RESET HAL_GPIO_WritePin(GPIOA, SB, GPIO_PIN_RESET);
#define SC_SET HAL_GPIO_WritePin(GPIOA, SC, GPIO_PIN_SET);
#define SC_RESET HAL_GPIO_WritePin(GPIOA, SC, GPIO_PIN_RESET);
#define SD_SET HAL_GPIO_WritePin(GPIOA, SD, GPIO_PIN_SET);
#define SD_RESET HAL_GPIO_WritePin(GPIOA, SD, GPIO_PIN_RESET);
#define SE_SET HAL_GPIO_WritePin(GPIOA, SE, GPIO_PIN_SET);
#define SE_RESET HAL_GPIO_WritePin(GPIOA, SE, GPIO_PIN_RESET);
#define SF_SET HAL_GPIO_WritePin(GPIOA, SF, GPIO_PIN_SET);
#define SF_RESET HAL_GPIO_WritePin(GPIOA, SF, GPIO_PIN_RESET);
#define SG_SET HAL_GPIO_WritePin(GPIOA, SG, GPIO_PIN_SET);
#define SG_RESET HAL_GPIO_WritePin(GPIOA, SG, GPIO_PIN_RESET);
#define SH_SET HAL_GPIO_WritePin(GPIOA, SH, GPIO_PIN_SET);
#define SH_RESET HAL_GPIO_WritePin(GPIOA, SH, GPIO_PIN_RESET);

void segchar (uint8_t seg);

#endif /* LED_H_ */
