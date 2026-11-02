/*
    Enter distance: 5
    Distance in meters = 5000

    Enter distance: 12
    Distance in meters = 12000
*/

#include <stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters = %d", iRet);

    return 0;
}