//WRITE A FUNCTION TO INTERCHANGE THE VALUE OF TWO VARIABLE SAY X AND Y
#include<stdio.h>
void fun(int x , int y);
void fun (int x , int y )
{
    printf("enter x :");
    scanf ("%d" ,&x);
    printf ("enter y :");
    scanf ("%d" ,&y);

    x = x+y;
    y = x - y ;
    x = x - y ;

    printf("value of x after swaping is %d and vale of y after swaping is %d" , x , y);

}

int main()
{
    int x , y ;
    fun(x , y );
    return 0;
}