//PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL LETTER , SMALL CASE LETTER , A DIGIT OR A SPECIAL SYMBOL
#include<stdio.h>
int main()
{
  char p;
  printf ("enter character p :");
  scanf("%c",&p);

  int i=p;
  ("i>=65 && i=<90") ? printf("%c is capital letter",p) : ("i>=97 && i=<122") ? printf("%c is small letter",p) : ("i>=48 && i=<57") ? printf("%c is a digit" ,p) : printf ("%c is special symbol",p);

  return 0;





}