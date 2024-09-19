//WRITE A C PROGRAM TO FIND THE VALUEO OF Y USING GIVEN DETAILS
#include<stdio.h>
#include<math.h>
int main()
{
   int x , y , n ;
   printf ("enter n :");
   scanf ("%d",&n);
   printf("enter x:");
   scanf("%d",&x);

   if(n==1)
   {
     y = 1+x;
     printf("value of y is %d",y);
   }

   if (n==2)
   {
     y = 1 + (x/n);
     printf ("the value of y is %d",y);
   }

   if(n<1 || n>3)
   {
     y = 1 + n*x;
     printf("value of y is %d",y);
   }

   if(n==3)
   {
    y = 1+ pow(x,n);
    printf("value of y is %d",y);
    
   }



   return 0;








}