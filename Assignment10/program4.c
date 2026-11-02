/*
  Enter temperature in Fahrenheit: 10
  Temperature in Celsius = -12.222222 
  
  Enter temperature in Fahrenheit: 10
  Temperature in Celsius = -12.222222
*/

#include <stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * (5.0 / 9.0);
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius = %lf", dRet);

    return 0;
}
