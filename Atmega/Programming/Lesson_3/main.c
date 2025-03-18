/*
	Author: Ivanov Ivan
	Date: 2019.04.17
	Theme: Using comments in the C language
*/
#include <stdio.h>

int main()
{
	//Output a string to the console
	/*вывод строки*/printf("String: ");
	printf("%s\r\n","Hello, all World!!!"/*, " Ura!!!"*/);
	//Output character to console
	printf("Char: ");
	printf("%c\r\n",131);
#if 0
	//Output a signed integer to the console
	printf("Signed integer: ");
	printf("%d\r\n",3000000000);
	//Output a unsigned integer to the console
	printf("Unigned integer: ");
	printf("%u\r\n",3000000000);
	//Output a signed short integer to the console
	printf("Signed short: ");
	printf("%hd\r\n",40000);
	/*
	//Output a unsigned short integer to the console
	printf("Unsigned short: ");
	printf("%hu\r\n",40000);
	*/
	//Output a signed long integer to the console
	printf("Signed long: ");
	printf("%I64d\r\n",18446744073709551615);
	//Output a unsigned long integer to the console
	printf("Unsigned long: ");
	printf("%llu\r\n",18446744073709551615);
#endif
	//Outputting a floating-point number to the console
	printf("Float: ");
	printf("%f\r\n",12.456f);
	//Outputting a 64-bit floating-point number to the console
	printf("Double: ");
	printf("%lf\r\n",12345.67891);
	//Hex output to console
	printf("Hex: ");
	printf("0x%llX\r\n",3000000000);
	return 0; //Return an integer from a function
}