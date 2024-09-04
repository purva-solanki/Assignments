//PROGRAM TO READ TOTAL SECONDS AND CONVERT IT INTO TIME 
#include<stdio.h>
int main()
{
  int tsec;
  printf("enter tsec :");
  scanf ("%d" ,&tsec);

  int hours = tsec/3600;
  int mins =( tsec - (hours*3600))/60;
  int seconds = (tsec - (hours*3600)- (mins*60));

  printf("%d time is %d hours , %d mins and %d seconds ", tsec , hours , mins , seconds );

  return 0;





}