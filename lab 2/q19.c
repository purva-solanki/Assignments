//PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDITIONAL OPERATOR
#include<stdio.h>
int main()
{
  char q;
  printf("enter a character : ");
  scanf("%c",&q);

  int i=q;
  (i >= 97 && i <= 122) ? printf ("%c is small case letter",q) : printf ("%c is not small case letter",q);

  return 0;






}