#include "led.h"

uint8_t R1=0, R2=0, R3=0, R4=0;
uint8_t delay = 5;

void ledprint(uint16_t number)
{
	R1 = number%10;
	R2 = number%100/10;
	R3 = number%1000/100;
	R4 = number/1000;

	LED_ON_1_SET;
	LED_ON_2_RESET;
	LED_ON_3_RESET;
	LED_ON_4_RESET;
	segchar(R4);
	HAL_Delay(delay);

	LED_ON_1_RESET;
	LED_ON_2_SET;
	LED_ON_3_RESET;
	LED_ON_4_RESET;
	segchar(R3);
	HAL_Delay(delay);

	LED_ON_1_RESET;
	LED_ON_2_RESET;
	LED_ON_3_SET;
	LED_ON_4_RESET;
	segchar(R2);
	HAL_Delay(delay);

	LED_ON_1_RESET;
	LED_ON_2_RESET;
	LED_ON_3_RESET;
	LED_ON_4_SET;
	segchar(R1);
	HAL_Delay(delay);

}


void segchar (uint8_t seg)
{
	switch(seg)
	{
		case 1:
			SA_RESET;SB_SET;SC_SET;SD_RESET;SE_RESET;SF_RESET;SG_RESET;SH_RESET;
			break;
		case 2:
			SA_SET;SB_SET;SC_RESET;SD_SET;SE_SET;SF_RESET;SG_SET;SH_RESET;
			break;
		case 3:
			SA_SET;SB_SET;SC_SET;SD_SET;SE_RESET;SF_RESET;SG_SET;SH_RESET;
			break;
		case 4:
			SA_RESET;SB_SET;SC_SET;SD_RESET;SE_RESET;SF_SET;SG_SET;SH_RESET;
			break;
		case 5:
			SA_SET;SB_RESET;SC_SET;SD_SET;SE_RESET;SF_SET;SG_SET;SH_RESET;
			break;
		case 6:
			SA_SET;SB_RESET;SC_SET;SD_SET;SE_SET;SF_SET;SG_SET;SH_RESET;
			break;
		case 7:
			SA_SET;SB_SET;SC_SET;SD_RESET;SE_RESET;SF_RESET;SG_RESET;SH_RESET;
			break;
		case 8:
			SA_SET;SB_SET;SC_SET;SD_SET;SE_SET;SF_SET;SG_SET;SH_RESET;
			break;
		case 9:
			SA_SET;SB_SET;SC_SET;SD_SET;SE_RESET;SF_SET;SG_SET;SH_RESET;
			break;
		case 0:
			SA_SET;SB_SET;SC_SET;SD_SET;SE_SET;SF_SET;SG_RESET;SH_RESET;
			break;
	}
}

void initSeg(void)
{
	SA_RESET;SB_RESET;SC_RESET;SD_RESET;SE_RESET;SF_RESET;SG_RESET;SH_RESET;
	//SA_SET;SB_SET;SC_SET;SD_SET;SE_SET;SF_SET;SG_SET;SH_SET;
}
