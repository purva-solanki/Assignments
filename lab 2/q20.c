//PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE
#include<stdio.h>
int main()
{
    float a,b ;
    char c;
    printf("enter value of a and b :");
    scanf("%f" ,&a);
    scanf("%f" ,&b);
    
    printf("enter the character: ");
    scanf(" %c", &c);

    switch(c)
    {
      case '+' : printf("%f",a+b);
               break;
      case '-' : printf("%f", a-b);
               break;
      case '*' : printf("%f",a*b);
               break ;
      case '/' : printf("%f",a/b);







    }



   return 0;







}