/*
    Input: 5
    Output: -7
    (8 - 15)

    Input: -5
    Output: -7
    (8 - 15)

    Input: 10
    Output: 2895
    (3840 - 945)
*/
#include <stdio.h>

long long FactorialDiff(int iNo)
{
    long long iEvenFact = 1;
    long long iOddFact = 1;
    long long iDiff = 0;
    int iCnt = 0;
    int iNum = iNo;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    for(iCnt = iNum; iCnt >= 2; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    for(iCnt = iNum; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    iDiff = iEvenFact - iOddFact;

    return iDiff;
}

int main()
{
    int iValue = 0;
    long long iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %lld\n", iRet);

    return 0;
}
