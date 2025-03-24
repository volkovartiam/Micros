#include "main.h"
#include "arith.h"
#include "utils.h"
#include "student.h"
//----------------------------------------------
unsigned char student_counter = 0;
//----------------------------------------------
float res;
float yf, zf;
//----------------------------------------------

//----------------------------------------------
void print_str(const char *c_str);
void print_chars(const char *c_str);
void print_uint32_arr(const unsigned int *p_uint, unsigned int len);
//----------------------------------------------
int main(int argc, char *argv[])
{
  printf("argument count = %d\n", argc);
  for(int i=0; i<argc; i++)
  {
    printf("%d: %s\n", i+1, argv[i]);
  }
  if((argc<3) || (strlen(argv[1])>2) ||\
      ((argv[1][1] != 'p') && (argv[1][1] != 'c') && (argv[1][1] != 'a')) ||\
      (atoi(argv[2])==0))
  {
    printf("-p - поиск по номеру позиции\n");
    printf("-c - поиск по курсу\n");
    printf("-a - поиск по возрасту\n");
    return 0;
  }
  student st[20];
  unsigned int st_cnt = 0;
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Иванов Иван Иванович", 2, 18);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Петров Петр Иванович", 1, 18);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Петрова Елена Павловна", 4, 22);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Попов Иван Сергеевич", 3, 22);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Васильев Федор Николаевич", 5, 24);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Саблин Виктор Петрович", 2, 18);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Веселкин Алексей Алексеевич", 2, 18);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Трухин Сергей Сергеевич", 5, 23);
  for(int i=0; i<st_cnt; i++) {printf("%d\t", i); printStudent(st+i);}
  int n = atoi(argv[2]);
  printf("n = %d\n", n);
  if(argv[1][1]=='p')
  {
    if(n>=st_cnt)
    {
      printf("Позиция не найдена\n");
      return 0;
    }
    printStudent(st+n);
  }
  else
  {
    int cnt = 0;
    for(int i=0; i<st_cnt; i++)
    {
      if(((argv[1][1]=='c') && (st[i].course == (unsigned char)n)) ||\
          ((argv[1][1]=='a') && (st[i].age == (unsigned char)n)))
      {
        printStudent(st+i);
        cnt++;
      }
    }
    if(!cnt)
    {
      printf("Позиция не найдена\n");
    }
  }
  return 0; //Return an integer from a function
}
//--------------------------------------------------------
void print_str(const char *c_str)
{
  printf("%s\n",c_str);
}
//--------------------------------------------------------
void print_chars(const char *c_str)
{
  int i=0;
  while(c_str[i])
  {
    printf("%c\n",c_str[i]);
    i++;
  }
}
//--------------------------------------------------------
void print_uint32_arr(const unsigned int *p_uint, unsigned int len)
{
  int i=0;
  while(len)
  {
    printf("0x%08X\n",p_uint[i]);
    len--;
    i++;
  }
}
//--------------------------------------------------------
