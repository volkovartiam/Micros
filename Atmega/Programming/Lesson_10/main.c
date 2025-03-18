#include <stdio.h>
#include <string.h>

int main()
{
  int n = 0;
  while(1)
  {
    printf("Enter an integer of 10, 20, 25, 30, 40, or 50\r\n");
    scanf("%d", &n);
    switch(n)
    {
      case 10:
        printf("You entered number 10.\r\n");
        break;			
      case 20:
      case 25:
        printf("You entered number 20 or 25.\r\n");
        break;			
      case 30:
        printf("You entered number 30.\r\n");
        break;
      case 40:
        printf("You entered number 40.\r\n");
        break;
      case 50:
        printf("You entered number 50.\r\n");
        break;
      default:
        printf("The entered number does not match with any of the proposed.\r\n");
        return 0;
    }
  }
  return 0; //Return an integer from a function
}