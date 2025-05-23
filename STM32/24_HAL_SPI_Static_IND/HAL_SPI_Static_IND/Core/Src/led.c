#include "led.h"


void initSegment(){
  cs_set();
  aTxBuffer[0]=0xFF;
  HAL_SPI_Transmit (&hspi1, (uint8_t*)aTxBuffer, 1, 5000);
  cs_strob();
}

void segchar (uint8_t seg)
{
  switch(seg)
  {
	case 1: SA_RESET; SB_SET;   SC_SET;   SD_RESET; SE_RESET; SF_RESET; SG_RESET; SH_RESET; break;
	case 2: SA_SET;	  SB_SET;   SC_RESET; SD_SET;   SE_SET;   SF_RESET; SG_SET;   SH_RESET; break;
	case 3:	SA_SET;   SB_SET;   SC_SET;   SD_SET;   SE_RESET; SF_RESET; SG_SET;   SH_RESET; break;
	case 4:	SA_RESET; SB_SET;   SC_SET;   SD_RESET; SE_RESET; SF_SET;   SG_SET;   SH_RESET; break;
	case 5:	SA_SET;   SB_RESET; SC_SET;   SD_SET;   SE_RESET; SF_SET;   SG_SET;   SH_RESET; break;
	case 6:	SA_SET;   SB_RESET; SC_SET;   SD_SET;   SE_SET;   SF_SET;   SG_SET;   SH_RESET; break;
	case 7:	SA_SET;   SB_SET;   SC_SET;   SD_RESET; SE_RESET; SF_RESET; SG_RESET; SH_RESET; break;
	case 8:	SA_SET;   SB_SET;   SC_SET;   SD_SET;   SE_SET;   SF_SET;   SG_SET;   SH_RESET; break;
	case 9:	SA_SET;   SB_SET;   SC_SET;   SD_SET;   SE_RESET; SF_SET;   SG_SET;   SH_RESET; break;
	case 0:	SA_SET;   SB_SET;   SC_SET;   SD_SET;   SE_SET;   SF_SET;   SG_RESET; SH_RESET; break;
  }

}
