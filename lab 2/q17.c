//PROGRAM TO READ THREE NOS AND PRINT MAX USING LOGICAL OPERATOR.
#include<stdio.h>
int main ()
{
  int a , b , c ;
  printf("enter value of a, b and c");
  scanf("%d" ,&a);
  scanf("%d",&b);
  scanf("%d",&c);

  (a>b && a>c) ? printf("%d",a): (b>a && b>c) ? printf("%d",b) : printf ("%d" ,c);

  return 0;







}