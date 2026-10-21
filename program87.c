#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if((iNo%3)==0)
    {
        if((iNo%5)==0)
        {
           printf("it is divisible\n");
        }
        else
        {
            printf("it is not divisible\n");
        }
        
        printf("it is divisible\n");
    }
    else
    {
        printf("it is not divisible\n");
    }  
}

int main()
{
    int ivalue=0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);

    checkDivisible(ivalue);

    EXIT_SUCCESS;
}