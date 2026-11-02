/*
    Enter area in square feet: 5
    Area in square meter is 0.464515

    Enter area in square feet: 7
    Area in square meter is 0.650321
*/
#include <stdio.h>

double SquareMeter(int iValue)
{
    double dResult = 0.0;

    // Convert square feet into square meter
    dResult = iValue * 0.092903;

    return dResult;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf\n", dRet);

    return 0;
}
