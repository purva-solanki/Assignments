// PROGRAM TO CALCULATE THE CUTOFF MARK OF A STUDENT 
#include<stdio.h>
int main ()
{
  float mathematics , physics , chemistry ,e , cm ;
  printf("enter the marks of mathematics :");
  scanf("%f",&mathematics);
  printf ("enter the marks of physics :");
  scanf("%f",&physics);
  printf("enter the marks of  chemistry :");
  scanf("%f",&chemistry);
  printf("enter marks of entrance examination :");
  scanf("%f",&e);

  cm = mathematics/2 + physics/2 + chemistry/2 + e ;

  printf ("%f is the cutoff marks" , cm);


  return 0;
   
}