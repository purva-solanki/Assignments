//READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE
#include<stdio.h>
int main()
{
  int n , flag ;
  printf("enter the number n :");
  scanf ("%d" ,&n);
  
  if(n==1)
  {
    printf("entered number is neiher prime nor composite");

  }

  else
  {
   if (n==2)
   {
     flag = 1;
   }

   if(n!=1 && n!=2)
   {
     for (int i= 2 ; i<n ; i++)
     {
       if(n%i==0)
       {
         flag = 0;
         break;

       }
       else
       {
         flag = 1;


       }




     }



   }

   if (flag  == 0)
   {
     printf("entered number is composite number");


   }

   return 0;
   
   





  }
  


  







}