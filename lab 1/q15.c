// PROGRAM TO READ MARKS OF FIVE SUBJECTS AND PRINT DIVIISON
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter marks :");
    scanf("%d",&a);

    printf("Enter marks :");
    scanf("%d",&b);

    printf("Enter marks :");
    scanf("%d",&c);

    printf("Enter marks :");
    scanf("%d",&d);

    printf("Enter marks :");
    scanf("%d",&e);

    int totalmarks = a+b+c+d+e;
    int grade = totalmarks/100;

  switch (grade)
  { case 5: printf("A+");
            break;
    case 4 : printf("A");
            break;
    case 3 : printf("B");
            break;
    case 2 : printf("C");
            break;
    case 1 : printf("D");
            break;

    
  }


  return 0;


}