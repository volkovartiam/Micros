/*
 * segment_ind.c
 *
 * Created: 30.04.2025 20:35:55
 *  Author: Artem
 */ 

#include "segment_ind.h"


void displayNumber(int number){
	SPI_transmit(~number);
}


void segchar(int seg)
{
	switch (seg)
	{
		case 1:
		displayNumber(249);
		break;
		case 2:
		displayNumber(164);
		break;
		case 3:
		displayNumber(176);
		break;
		case 4:
		displayNumber(153);
		break;
		case 5:
		displayNumber(146);
		break;
		case 6:
		displayNumber(130);
		break;
		case 7:
		displayNumber(248);
		break;
		case 8:
		displayNumber(128);
		break;
		case 9:
		displayNumber(144);
		break;
		case 0:
		displayNumber(192);
		break;
	}
}