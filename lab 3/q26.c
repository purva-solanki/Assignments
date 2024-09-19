//PROGRAM TO PRINT SUM OF ALL EVEN AND ODD NUMBERS BETWEEN 1 TO N.
#include<stdio.h>
int main()
{
  int evensum , oddsum , n;
  printf("enter the value of n :");
  scanf("%d",&n);
      evensum = 0;
    oddsum = 0;
  for(int i =1; i <=n; i++) 
  { 

    
    if(i%2==0)
    {
      evensum = evensum + i;
    }

    if(i%2!=0)
    {
        oddsum = oddsum + i;
    }
  }
    printf("sum of even numbers is %d \n",evensum);
    printf("sum of odd numbers is %d \n",oddsum);


  }




    






