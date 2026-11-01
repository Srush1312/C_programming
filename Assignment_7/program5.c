//input:4
//output:4 8 12 16 20

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 1;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
