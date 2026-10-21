
/*
    ----------------------------------
                operator &&
    ----------------------------------
    result1     result2    final result
    -----------------------------------
    true        true        true
    true        false       false
    false       true        false
    false       false       false
    -----------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo%3)==0 && ((iNo%5)==0))) 
    {
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