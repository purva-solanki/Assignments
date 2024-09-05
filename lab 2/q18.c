//PROGRAM TO READ THREE NO AND PRINT MAX USING CONDITIONAL OPERATOR
#include<stdio.h>
int main()
{ 
    
  int a , b  ,c ;
  printf("enter value of a :");
  scanf("%d" ,&a);
  printf("enter value of b :");
  scanf("%d",&b);
  printf("enter value of c:");
  scanf("%d",&c);

  ( a>b && a>c ) ? printf("%d" ,a) : ( b>a && b>c) ? printf("%d" ,b) : printf ("%d" ,c);

  return 0;







}