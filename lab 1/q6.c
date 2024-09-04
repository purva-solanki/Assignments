//PROGRAM TO SWAP THREE VARIABLES WITHOUT USING THIRD VARIABLE
#include<stdio.h>
int main ()
{
  int a , b ;
  printf("enter the value of a :");
  scanf("%d",&a);
  printf("enter the value of b :");
  scanf("%d",&b);

  a = a+b;
  b = a-b;
  a = a-b ;

  printf("value of a after swaping is %d and value of b after swaping is %d" ,a,b);

  return 0;

}