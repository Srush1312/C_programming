//Enter number: 5
//Factorial of number is: 120
//Enter number: -5
//Factorial of number is :120
//Enter number: 4
//Factorial of number is 24

#include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}