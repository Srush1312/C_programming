//Write a program which accepts a number from the user and:
//If the number is less than 50, print Small.
//If the number is greater than 50 and less than 100, print Medium.
//If the number is greater than 100, print Large.

#include <stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small");
    }
    else if (iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if (iNo > 100)
    {
        printf("Large");
    }
    else
    {
        printf("Number is 50 or 100");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}