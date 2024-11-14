//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
#include<stdio.h>
void fun(int N );
void fun(int N)
{
    int  sum = 0 , q , temp_num ;
    printf ("enter the number N ");
    scanf ("%d" ,&N);

    temp_num = N;

    while(N!=0)
    {
        q = N%10 ;
        sum = sum*10 + q;
        N = N/10 ;
    }

    if ( temp_num == sum)
    {
        printf (" N is palindrome");
    }
    else
    {
        printf (" N is not palindrome");
    }
    
}

int main()
{
    int N ;
    
    fun(N);
}
    

    

    
    

