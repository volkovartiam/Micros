#include "utils.h"
//----------------------------------------------
void int_to_binary(int x, char* in_str)
{
  char str_tmp[9] = {};
  unsigned char i, j, k;
  unsigned char bt[4] = {0};
  for (j=0; j<4; j++)
  {
    if(((x >> j*8)==0) && (j>0))   break;
    bt[j] = (unsigned char) (x >> j*8);
  }
  strcpy(in_str,"0b");
  for (k=0; k<j; k++)
  {
    for (i=0; i<8; i++)
    {
      switch ((bt[j-k-1] >> i) & 0b00000001)
      {
        case 1:  str_tmp[7-i] = '1'; break;
        case 0:  str_tmp[7-i] = '0'; break;
      }
    }
    strcat(in_str,str_tmp);
  }
}
//----------------------------------------------
