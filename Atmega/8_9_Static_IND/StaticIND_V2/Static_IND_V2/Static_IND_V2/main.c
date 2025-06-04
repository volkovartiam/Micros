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
	//Segments
	setCommonAnode(FALSE);
	show_segments_in_portD();
	init_seg();	
	*/

	struct Segment seg_1;

	seg_1._pin_A = 4;
	seg_1._pin_B = 5;
	seg_1._pin_C = 6;
	seg_1._pin_D = 7;
	seg_1._pin_E = 0;
	seg_1._pin_F = 1;
	seg_1._pin_G = 2;
	seg_1._pin_DP = 3;

	seg_1._PORT_A = PB;
	seg_1._PORT_B = PB;
	seg_1._PORT_C = PB;
	seg_1._PORT_D = PB;
	seg_1._PORT_E = PC;
	seg_1._PORT_F = PC;
	seg_1._PORT_G = PC;
	seg_1._PORT_DP = PC;
	
	setCommonAnodeStruct(FALSE);
	init_seg_struct(&seg_1);
	//show_seg_digit(9, &seg_1);
	_delay_ms(500);


	struct Segment seg_2;
	init_seg_struct_by_default(&seg_2);
	init_seg_struct(&seg_2);
	//show_seg_digit(9, &seg_2);
	_delay_ms(500);

    while (1) 
    {
		
		/*
		//Segments
		showDigits();
		_delay_ms(500);
		*/
		
		show_seg_digits(&seg_1);
		show_seg_digits(&seg_2);

    }
}




