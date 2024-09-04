//ROGRAM TO CALCULATE GROSS SALARY.

#include<stdio.h>
int main ()
{
  int ta, da , basic, g;
  printf("enter ta: ");
  scanf ("%d",&ta);
  printf("enter da: ");
  scanf ("%d", &da);
  printf ("enter basic: ");
  scanf ("%d ",&basic);

  g = ta+da+basic ;

  printf(" %d is the gross_salary",g);


  return 0; 

}