/*
    input : 4
    output:1 * 2 * 3 * 4 *
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt=0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("%d\t",icnt);
    }

    printf("\n");
}

int main()
{
    int ivalue=0;

    print("Enter the value:\n");
    scanf("%d\t*\t",&ivalue);

    pattern(ivalue);

    return EXIT_SUCCESS;
}