/*
    Input: 5
    Output: 8
    (4 * 2)

    Input: -5
    Output: 8
    (4 * 2)

    Input: 10
    Output: 3840
    (10 * 8 * 6 * 4 * 2)
*/
#include <stdio.h>

long long EvenFactorial(int iNo)
{
    long long iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 != 0)
    {
        iNo--;
    }

    for(iCnt = iNo; iCnt >= 2; iCnt = iCnt - 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    long long iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial is %lld\n", iRet);

    return 0;
}
