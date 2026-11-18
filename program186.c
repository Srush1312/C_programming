/*
    input : 4
    output: 0 1 2 3 4
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt=0;

    for(icnt=0;icnt<=iNo;icnt++)
    {
        printf("%d\tt",icnt);
    }

    printf("\n");
}

int main()
{
    int ivalue=0;

    printf("Enter the value:\n");
    scanf("%d\t*\t",&ivalue);

    Pattern(ivalue);

    return EXIT_SUCCESS;
}