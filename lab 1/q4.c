//PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIFRADE DEGREES

#include<stdio.h>
int main()
{
  float f,c;
  printf ("enter temperature in fahrenheit: ");
  scanf ("%f",&f);

  c = (f-32)*((float)5/9);

  printf("temperature in celcius is %f",c);

  return 0 ;







}