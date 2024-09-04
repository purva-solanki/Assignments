//EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS. WRITE A C PROGRAM TO CONVERT IT INTO NUMBR OF DAYS,HOURS AND MINUTES
#include<stdio.h>
int main ()
{
  int tpseconds = 31558150;
  int days = tpseconds/86400;
  int hours = (tpseconds - (days*86400))/3600;
  int minutes = (tpseconds - (days*86400)-(hours*3600))/60;
  printf("time periods is %d days , %d hours and %d minutes" ,days, hours,minutes);

  return 0;



}
