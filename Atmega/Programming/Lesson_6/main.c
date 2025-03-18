#include <stdio.h>

int main()
{
  int i=10;
  //------------------------
  while(0)
  {
    printf("i = %d\r\n", i);
    i--;
  }
  //------------------------
  printf("=========================\r\n");
  i = 10;
  do
  {
    printf("i = %d\r\n", i);
    i--;
  } while(0);
  //------------------------
  printf("=========================\r\n");
  for(i=0; i<10; i++)
  {
    printf("i = %d\r\n", i);
  }
  //------------------------
  return 0; //Return an integer from a function
}