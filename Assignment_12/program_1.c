/*
    output 1:
    Enter number: 1018
    8
    1
    0
    1

    Output 2:
    text
    Enter number: -1018
    8
    1
    0
    1

    Output 3:
    text
    Enter number: 9000
    0
    0
    0
    9
*/

#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("0\n");
        return;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);

        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}
