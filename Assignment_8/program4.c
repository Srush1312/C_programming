// Enter number: 2
//2    4    6    8    10    12    14    16    18  20  
//Enter number: 5
//5    10    15    20    25    30    35    40    45    50
//Enter number: -5
//5    10    15    20    25    30    35    40    45    50

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iCnt <= 10)
    {
        printf("%d\t", iNo * iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}