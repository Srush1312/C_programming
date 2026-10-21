#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue=0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);

    if((ivalue%2)==0)
    {
        printf("It is Even Number");
    }
    else
    {
        printf("It is odd Number");
    }

    return EXIT_SUCCESS;
}