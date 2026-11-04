/*
    Enter starting point: 23
    Enter ending point: 30

    Addition is 212

    Enter starting point: 10
    Enter ending point: 18

    Addition is 126

    Enter starting point: -10
    Enter ending point: 2

    Invalid range

*/

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart <= 0 || iEnd <= 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iValue1 > 0 && iValue2 > 0 && iValue1 <= iValue2)
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}