/*
	Author: Ivanov Ivan
	Date: 2019.04.17
	Theme: Using comments in the C language
*/
#include <stdio.h>

int main()
{
	char c1, c2;
	unsigned char c3;
	short ns1;
	unsigned short ns2;
	int ni1;
	unsigned int ni2;
	long nl1;
	unsigned long nl2;
	long long nll1;
	unsigned long long nll2;
	float f;
	double d;
	c1 = 'r';
	c2 = -115;
	c3 = 195;
	ns1 = -31511;
	ns2 = 63699;
	ni1 = -2011242517;
	ni2 = 4000000000;
	nl1 = -2011242517;
	nl2 = 4000000000;
	nll1 = -8446744073709551615;
	nll2 = 18446744073709551234ULL;
	f = 12.456f;
	d = 1.5364e-20;
	//output to the console data of various types
	printf("Char symbol: ");
	printf("%c\r\n",c1);
	printf("Signed char: ");
	printf("%hd\r\n",c2);
	printf("Unsigned char: ");
	printf("%hd\r\n",c3);
	printf("Signed short: ");
	printf("%hd\r\n",ns1);
	printf("Unsigned short: ");
	printf("%hu\r\n",ns2);
	printf("Signed integer: ");
	printf("%d\r\n",ni1);
	printf("Unigned integer: ");
	printf("%u\r\n",ni2);
	printf("Signed long: ");
	printf("%ld\r\n",nl1);
	printf("Unsigned long: ");
	printf("%lu\r\n",nl2);
	printf("Signed long long: ");
	printf("%I64d\r\n",nll1);
	printf("Unsigned long long: ");
	printf("%I64u\r\n",nll2);
	printf("Float: ");
	printf("%f\r\n",f);
	printf("Double: ");
	printf("%.24lf\r\n",d);
	printf("Hex: ");
	printf("0x%X\r\n",ni2);
	
	return 0; //Return an integer from a function
}