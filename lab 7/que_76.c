// WRITE A FUNCTION TO CHECK WHETHER A NUBER IS EVEN OR ODD
#include<stdio.h>
void func(int a);
void func(int a)
{
    if ( a% 2 == 0)
    {
        printf(" a is even number");
    }
    else
    {
        printf("a is odd number");
    }


}

int main ()
{
    int a ;
    printf ("enter values of a :");
    scanf ("%d" ,&a);

    func(a);
    return 0;
}