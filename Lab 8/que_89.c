//WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY . ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO THE FIRST ARRAY
#include<stdio.h>
int main()
{   
    int n;//declaration of variable to store the size of array
    //taking input for n
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr1[n]; // declaration of an integer type array of size n

    //taking input for the array
    for(int i =0; i <n; i++)
    {
        printf("Enter the element to be stored at index %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    int arr2[n]; //array to store elements of arr1
    for( int i = 0 ; i < n ; i++)
    {
       *(arr2+ i) = *(arr1 + n - i - 1);
    }
    for( int i = 0 ; i < n ; i++)
    {
        printf("%d\t" , arr2[i]);
    }

}