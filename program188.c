/*
    input : 4
    output: -4 -3 -2 -1 
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt=0;

    for(icnt=-iNo;icnt<=-1;icnt++)    //icnt<0
    {
        printf("%d\t",icnt);
    }

    printf("\n");
}

int main()
{
    int ivalue=0;

    printf("Enter the value:\n");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return EXIT_SUCCESS;
}