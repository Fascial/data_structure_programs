#include <stdio.h>
#include <string.h>

struct student
{
  char name[10];
  int rollno;
  int marks;
  struct student *next;
};
void copy(char s[], char str[])
{
  int i = 0;
  int l = strlen(s);
  for (i = 0; i < l; i++)
  {
    str[i] = s[i];
  }
}

int main()
{
  struct student s1, s2, s3;
  char n[10] = "Student One";
  copy(n, s1.name);
  s1.rollno = 1;
  s1.marks = 100;
  char n1[10] = "Student Two";
  copy(n1, s2.name);
  s2.rollno = 2;
  s2.marks = 99;
  char n3[10] = "Student Three";
  copy(n3, s3.name);
  s3.rollno = 3;
  s3.marks = 98;
  s1.next = &s2;
  s2.next = &s3;
  s3.next = NULL;
  printf("%s %d %d\n", s1.name, s1.rollno, s1.marks);
  printf("%s %d %d\n", s1.next->name, s1.next->rollno, s1.next->marks);
  printf("%s %d %d\n", s1.next->next->name, s1.next->next->rollno, s1.next->next->marks);
  return 0;
}