//PROGRAM TO CALCULATE OF TRIANGLE

#include<stdio.h>
int main ()
{
  float b , h ,area ;
  printf("enter the value of height:");
  scanf ("%f",&h); 
  printf("enter the value of base:");
  scanf("%f",&b);
  

  area = (float)1/2*(b*h) ;

  printf ("%f is the area" , area) ;

  return  0;

} 