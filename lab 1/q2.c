/*PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND
CALCULATE TOTAL AND PERCENTAGE.*/

#include<stdio.h>
int main ()
{
    int maths,physics,chemistry,english,hindi,total;
    printf("Enter marks of maths :");
    scanf("%d",&maths);

      printf("Enter marks of physics: ");
    scanf("%d",&physics);
 
   printf("Enter marks of chemistry:  ");
    scanf("%d",&chemistry);
     
   printf("Enter marks of english ");
    scanf("%d",&english);
 

   printf("Enter marks of hindi");
    scanf("%d",&hindi);
   
   total = maths + physics + chemistry + english + hindi ;


   float percentage ;

   percentage = (total*100)/500 ;
   

   printf(" %f is the percentage" ,percentage);

 

  return 0;








}
