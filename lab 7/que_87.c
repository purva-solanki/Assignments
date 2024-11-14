/* WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENTS AND DISPLAY THE INFORMATION OF THOSE STUDENTS WHOSE MARKS ARE 
GREATER THAN 500 (PASSING ARRAY OF STRUCTURE INTO FUNCTION)*/
#include<stdio.h> 
void passedStudents(int arr[]); 

int main()
{
    int students[10]; 
    for(int i =0; i <10; i++)
    {
        printf("Enter marks: ");
        scanf("%d",&students[i]);
    }
    passedStudents(students); 
}

void passedStudents(int arr[]) 
{
    for(int i =0; i <10; i++) 
    {
        if(arr[i] > 500)
        {
            printf("Student with roll no. %d has passed the examinations with %d marks\n ",i,arr[i]);
        }
    }
}
