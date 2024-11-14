//WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS . TEST THE FUNCTION FOR N = 5 , 10 AND 15
#include<stdio.h>
void fun( int n );
void fun ( int n )
{
    int first  = 0 , second  = 1 , next ;
    printf (" enter the number of terms :");
    scanf ("%d" ,&n);

    for ( int i = 1 ;i <= (n-2) ; i++)
    {
        if(i == 1)
        {
            printf("%d " ,first );

        }
        else if ( i == 2)
        {
            printf ("%d " ,second );
        }

        next = first + second;
        first = second;
        second = next ;

        printf ("%d " ,next );


        

    }

    
}

int main ()
{
    int n;
    fun(n);
}
