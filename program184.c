/*
    Input :     6
    Output :    1   2   3   4   5   6
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
}

int main()
{
    int ivalue=0;

    print("Enter the value:\n");
    scanf("%d\t",&ivalue);

    pattern(ivalue);

    return EXIT_SUCCESS;
}