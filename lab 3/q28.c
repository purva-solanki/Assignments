//PROGRAN TO CHECK WHETHER A NO IS ARMSTRONG OR NOT
#include<stdio.h>
int main()
{
  int num , sum = 0 , q , tempnum ;
  printf("enter the number :");
  scanf("%d" ,&num);
  tempnum = num ;
  while (num!=0)
  {
    q = num%10;
    sum = sum + (q*q*q);
    num = num/10;
  
  }

  if (tempnum==sum)
  {
    printf("the given number is armstrong number");

  }
  else
  {
    printf("the given number is not armstrong number");

  }
  


  
  return 0;










}