#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//----------------------------------------------
void menu(char c)
{
  char str[10] = {};
  printf("MENU%c\r\nEnter an item number:\r\n", c);
  while(1)
  {
    printf("1: item 1\r\n");
    printf("2: item 2\r\n");
    printf("3: item 3\r\n");
    printf("0: exit\r\n");
    scanf("%s", str);
    if(strlen(str)>1 || strlen(str)==0)
    {
      printf("Only one character is required\r\n");
      continue;
    }
    if(str[0]>'3' || str[0]<'0')
    {
      printf("You must enter only the proposed menu item\r\n");
      continue;
    }		
    if(str[0]=='0') break;
    switch (str[0])
    {
      case '1':
        printf("You have selected menu item 1\r\n");
        break;
      case '2':
        printf("You have selected menu item 2\r\n");
        break;
      case '3':
        printf("You have selected menu item 3\r\n");
        break;
    }
  }
}
//----------------------------------------------
int main()
{
  char str[10] = {};
menu1:
  while(1)
  {
    printf("MAIN MENU\r\n");
    printf("Enter an item number to select actions:\r\n");
    printf("1: item 1 menu\r\n");
    printf("2: item 2 menu\r\n");
    printf("3: item 3 menu\r\n");
    printf("0: exit\r\n");
    scanf("%s", str);
    if(strlen(str)>1 || strlen(str)==0)
    {
      printf("Only one character is required\r\n");
      goto menu1;
    }
    if(str[0]>'3' || str[0]<'0')
    {
      printf("You must enter only the proposed menu item\r\n");
      goto menu1;
    }
	if(str[0]=='0') break;
    switch (str[0])
    {
      case '1':
        printf("You have selected menu1\r\n");
        break;
      case '2':
        printf("You have selected menu2\r\n");
        break;
      case '3':
        printf("You have selected menu3\r\n");
        break;
    }
	menu(str[0]);
  }
  return 0; //Return an integer from a function
}