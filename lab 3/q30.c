//PROGRAM TO REVERSE A GIVEN NUMBER
#include<stdio.h>
int main()
{
  int num , sum = 0 , q;
  printf("enter the number :");
  scanf("%d" ,&num);

  while (num!=0)
  {
    q = num%10;
    sum = sum*10 + q;
    num = num/10;
  }
  
  printf("reverse of given number is %d",sum);

  return 0;




}