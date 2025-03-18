#include <stdio.h>
#include <string.h>

int main()
{
//  unsigned char i, j;
/*
  int n[6];
  n[0] = 10; n[1] = 25; n[2] = 33; n[3] = 71; n[4] = 54; n[5] = 99;
  for (i=0;i<6;i++) printf("%d ", n[i]);
*/
/*
  int n[6] = {10, 25, 33, 71, 54, 99};
  for (i=0;i<6;i++) printf("%d ", n[i]);
*/
/*
  int n[6] = {0};
  for (i=0;i<6;i++) printf("%d ", n[i]);
*/
/*
  int n[6] = {18};
  for (i=0;i<6;i++) printf("%d ", n[i]);
*/
/*
  int n[6] = {18,-35,60};
  for (i=0;i<6;i++) printf("%d ", n[i]);
*/
/*
  char str1[10] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
  for (i=0;i<10;i++) printf("%d ", str1[i]);
  printf("\r\n");
  for (i=0;i<10;i++) printf("%c ", str1[i]);
  printf("\r\n");
  printf(str1);
*/
/*
  char str1[] = "Hello!";
  for (i=0;i<7;i++) printf("%d ", str1[i]);
  printf("\r\n");
  for (i=0;i<7;i++) printf("%c ", str1[i]);
  printf("\r\n");
  printf(str1);
*/
/*
  int n[3][4];
  n[0][0] = 10; n[0][1] = 25; n[0][2] = 33; n[0][3] = 71;
  n[1][0] = 45; n[1][1] = 77; n[1][2] = 44; n[1][3] = 18;
  n[2][0] = 38; n[2][1] = 84; n[2][2] = 21; n[2][3] = 99;
  for (i=0;i<3;i++)
  {
    for (j=0;j<4;j++)
    {
      printf("%d ", n[i][j]);
    }
    printf("\r\n");
  }
*/
/*
  int n[3][4] = {{10, 25, 33, 71},
                {45, 77, 44, 18},
                {38, 84, 21, 99}};
  for (i=0;i<3;i++)
  {
    for (j=0;j<4;j++)
    {
      printf("%d ", n[i][j]);
    }
    printf("\r\n");
  }
*/
/*
  char str1[3][30];
  strcpy(str1[0],"Hello World!\r\n");
  strcpy(str1[1],"Hi!\r\n");
  strcpy(str1[2],"Hello!\r\n");
  printf("%s%s%s",str1[0],str1[1],str1[2]);
*/
/*
  char str1[3][32] = {"Hello World!\r\n","Hi!\r\n","Hello!\r\n"};
  printf("%s%s%s",str1[0],str1[1],str1[2]);
*/
  char * str1[] = {"Hello World!\r\n","Hi!\r\n","Hello!\r\n"};
  printf("%s%s%s",str1[0],str1[1],str1[2]);






  return 0; //Return an integer from a function
}