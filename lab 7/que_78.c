//WRITE A FUNCTION TO CHECK WHETHER IS ARMSTRONG OR NOT.
#include<stdio.h>
void fun( int n );
void fun ( int n )
{
    int   sum = 0 , q , temp_num ;
    printf ("enter value of n :");
    scanf ("%d" ,&n);

    temp_num = n ;

    while( n!= 0)
    {
        q = n%10;
        sum = sum + q*q*q ;
        n = n/10; 
    }
    
    if(temp_num == sum )
    {
        printf ("entered number is an armstrong number ");
    }
    else
    {
        printf("entered number is not an armstrong number ");
    }
    
}

int main()
{
    int n;
    fun(n);

}