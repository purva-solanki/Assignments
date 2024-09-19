//READ A NUMBER N AND PRINT FACTOR OF N.
#include<stdio.h>
int main ()
{
  int N ;
  printf ("enter the number N : ");
  scanf ("%d" ,&N);

  for( int i = 1 ; i<=N  ; i++ )
  {
    if(N%i == 0)
    {
        printf ("%d ," ,i);
    }
  }
  
  return 0;




}