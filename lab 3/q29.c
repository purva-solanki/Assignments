//PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT
#include<stdio.h>
int main()
{
  int num , sum = 0 , q , tempnum ;
  printf("enter the number :");
  scanf("%d",&num);
  tempnum = num ;
  while( num != 0 )
  {
    q = num%10;
    sum = sum*10 + q;
    num = num/10;
  }

  if( tempnum == sum )

  {
   
   printf("the given number is a palindrom");
  
  }

  else 

  {
    printf("the given number is not a palindrom");
  }

  return 0;

}