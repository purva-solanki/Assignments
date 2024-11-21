//WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
#include<stdio.h>
int main()
{
    int n ;
    printf(" enter number of integers : ");
    scanf("%d" ,&n);

    //printing integers

    int arr[n];
    int *ptr = arr ;
    for(int i = 0 ; i < n ; i++)
    {
        printf("enter nummber :\n");
        scanf("%d" , ptr + i);
    }

    int max_integer = *ptr ;
    for ( int i = 1 ; i < n ; i++)
    {
        if( max_integer < *(ptr+i))
        {
            max_integer = *(ptr+i);
        }
    }

    printf(" the greatest number is %d\n" , max_integer);

    return 0;

}