/*
 * Static_IND_V2.c
 *
 * Created: 01.06.2025 17:47:27
 * Author : Artem
 */ 

#include "main.h"

int main(void)
{
	/*	
	show_segments_in_portD();
	init_seg();
	*/
	
	//struct Segment segment;
	init_struct_default_segments();
	init_seg_struct();

    while (1) 
    {
		
		/*
		showDigits();
		for (int i = 0; i < 10; i++){
			show_digit(i);
			_delay_ms(500);
		}
		/**/	
    }
}




