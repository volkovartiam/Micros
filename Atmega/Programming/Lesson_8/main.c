#include <stdio.h>

int main()
{
	int n;
  	printf("Please enter an integer ");

	scanf("%d", &n);
	if(n < 10){
		printf("You have entered a number less than 10\r\n");
	}
	else
	{
		printf("You entered a number greater than or equal to 10\r\n");
	}

	return 0; //Return an integer from a function
}