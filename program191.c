/*
    input : 4
    output: -4 -3 -2 -1 
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt=0;

    for(icnt=-iNo;icnt<=iNo;icnt++)    //O(2N)
    {
        printf("%d\t",icnt);
    }

    printf("\n");
}

//Time Complexity O(2N)

int main()
{
    int ivalue=0;

    printf("Enter the value:\n");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return EXIT_SUCCESS;
}