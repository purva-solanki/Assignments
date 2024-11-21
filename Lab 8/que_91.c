/*WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF
 AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER*/
 #include<stdio.h>
 int main()
 {
    int n ;
    printf(" enter the number :");
    scanf("%d" ,&n);
    int *ptr = &n ;

    //printing square of number
    printf(" square of number is %d\n" , *(ptr)* (*(ptr)));

    //printing cube of number
    printf(" cube of number is %d\n" , *(ptr)* (*(ptr))*(*(ptr)));
    return 0 ;
}
