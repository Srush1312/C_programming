/*
Input :12
Factors: 1 + 2 + 3 + 4 + 6 = 16
Non-factors: 5 + 7 + 8 + 9 + 10 + 11 = 50
Output: 16 - 50 = -34
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}

