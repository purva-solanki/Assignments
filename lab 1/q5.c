//PROGRAM TO SWAP TWO VARIABLES USING THIRD VARIABLE
#include<stdio.h>
int main ()
{
  int a , b , c ;
  printf("enter the value of a :");
  scanf("%d" ,&a);
  printf("enter the value of b :");
  scanf("%d",&b);

  c = b;
  b = a;
  a = c;

  printf ("value of a after swaping is %d and value of b after swaping is %d" , a,b);

  return 0;






}