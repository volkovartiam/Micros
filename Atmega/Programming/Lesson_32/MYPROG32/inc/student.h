#ifndef STUDENT_H_
#define STUDENT_H_
//------------------------------------------------
#include <stdio.h>
#include <string.h>
//------------------------------------------------
/*
struct student
{
  char nm[60];
  unsigned char age;
  unsigned char course;
};
*/
typedef struct
{
  char nm[60];
  unsigned char age;
  unsigned char course;
} student;
//------------------------------------------------
typedef struct
{
  student *st;
  void (*addCourse)(student *);
  void (*addAge)(student *st);
  void (*modifyName)(student *st, char *ch);
  void (*deletePos)(student *st_list, unsigned int pos, unsigned int *student_counter);
} student_list;
void printStudent (student *st_ptr);
void printStudentvoid (void *st_ptr);
void addStudent (student *res_st, unsigned int *student_counter,
                 char *ch, unsigned int cr, unsigned int ag);
void addCourse (student *st);
void addAge (student *st);
void modifyName (student *st, char *ch);
void deletePos (student *st_list, unsigned int pos, unsigned int *student_counter);
//------------------------------------------------
#endif /* STUDENT_H_ */
