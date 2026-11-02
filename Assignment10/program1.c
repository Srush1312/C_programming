/*
    Enter radius: 5.3
    Area of circle is 88.2026

    Enter radius: 10.4
    Area of circle is 339.6224
*/
#include <stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %.4lf\n", dRet);

    return 0;
}
