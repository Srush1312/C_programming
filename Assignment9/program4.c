/*
Input: 5
Output: 15
(5 * 3 * 1)

Input: -5
Output: 15
(5 * 3 * 1)

Input: 10
Output: 945
(9 * 7 * 5 * 3 * 1)
*/
#include <stdio.h>

long long OddFactorial(int iNo)
{
    long long iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        iNo--;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt = iCnt - 2)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial is %lld\n", iRet);

    return 0;
}
