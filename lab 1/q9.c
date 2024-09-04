//PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND
#include<stdio.h>
int main()
{
  int hr , min , sec , tsec ;
  printf("enter hr :");
  scanf("%d" ,&hr);
  printf("enter min :");
  scanf("%d" ,&min);
  printf("enter sec :");
  scanf("%d",&sec);

  tsec = (hr*3600) + (min*60) + (sec) ;

  printf ("%d is the total seconds",tsec);

  return 0;

}