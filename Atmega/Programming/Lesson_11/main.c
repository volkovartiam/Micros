#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
/*
  int n, m, res;
  printf("Please enter an integer (n)\r\n");
  scanf("%d", &n);
  printf("Please enter an integer (m)\r\n");
  scanf("%d", &m);
  res = (n > m) ? n : m;
  printf("The maximum number of entered: %d", res);
*/
/*
  int n, res;
  printf("Please enter an integer\r\n");
  scanf("%d", &n);
  res = (n >= 0) ? n : -n;
  printf("The modulus of the entered number is %d", res);
*/
/*
  int n;
  printf("Please enter an integer\r\n");
  scanf("%d", &n);
  printf("The number entered is %s than 10\r\n", (n > 10) ? "greater" : "less than or equal");
*/
/*

  int n;
  printf("Please enter an integer\r\n");
  scanf("%d", &n);
  printf("The number entered is %s10\r\n", (n > 10) ? "greater than " : (n == 10) ? "" : "less than ");
*/
  int n=0;
  char *strnum  = (char*) malloc(10);
  while((n>=0) && (n<=10))
  {
    printf("Please enter an integer\r\n");
		printf("To exit the program, enter a number greater than 10 ...\r\n");
    scanf("%d", &n);
    strnum = n == 0 ? "zero":
             n == 1 ? "one":
             n == 2 ? "two":
             n == 3 ? "three":
             n == 4 ? "four":
             n == 5 ? "five":
             n == 6 ? "six":
             n == 7 ? "seven":
             n == 8 ? "eight":
             n == 9 ? "nine":
             n == 10 ? "ten":
             "greater than 10 or less than 0";
    printf("The number entered is %s.\r\n", strnum);
  }
  return 0; //Return an integer from a function
}