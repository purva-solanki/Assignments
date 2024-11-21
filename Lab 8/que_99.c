//WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE
#include<stdio.h>
int main()
{   int vowelCount =0;
    FILE *ptr;
    ptr = fopen('kavya.txt','r');
    char c  ;
    fscanf("%c",ptr);
    while(c != EOF)
    {
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': vowelCount++;
        }
        scanf("%c",&c);
    }
    fclose(ptr);
    printf("%d",vowelCount);
}
