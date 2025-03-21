#include "student.h"
//--------------------------------------------------------------------------
void printStudent (student *st_ptr)
{
  printf("%-30s%d курс\t%d лет\n", st_ptr->nm, st_ptr->course, st_ptr->age);
}
//--------------------------------------------------------------------------
void printStudentvoid (void *st_ptr)
{
  typedef struct
  {
    char nm[60];
    unsigned char age;
    unsigned char course;
  } stdn;
  printf("%s,\t%d курс,\t%d лет\n", ((stdn*)st_ptr)->nm, ((stdn*)st_ptr)->course, ((stdn*)st_ptr)->age);
}
//--------------------------------------------------------------------------
void addStudent (student *res_st, unsigned int *student_counter,
                 char *ch, unsigned int cr, unsigned int ag)
{
  strcpy(res_st->nm, ch);
  res_st->course = cr;
  res_st->age = ag;
  (*student_counter)++;
}
//--------------------------------------------------------------------------
void addCourse (student *st)
{
  st->course++;
}
//--------------------------------------------------------
void addAge (student *st)
{
  st->age++;
}
//--------------------------------------------------------
void modifyName (student *st, char *ch)
{
  strcpy(st->nm, ch);
}
//--------------------------------------------------------
void deletePos (student *st_list, unsigned int pos, unsigned int *student_counter)
{
  for(unsigned int i=pos;i<*student_counter-1;i++)
  {
    strcpy(st_list[i].nm, st_list[i+1].nm);
    st_list[i].age = st_list[i+1].age;
    st_list[i].course = st_list[i+1].course;
  }
  (*student_counter)--;
}
//--------------------------------------------------------
