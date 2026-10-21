#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ULONG;

ULONG Factorial(int iNo)
{ 
    int icnt=0;
    ULONG ifact=0;

    for(icnt=1,ifact=1;icnt<=iNo;icnt++)
    {
        ifact=ifact * icnt;
    }
    return ifact;
}
int main()
{
    int ivalue=0;
    ULONG iret=0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);

    iret=Factorial(ivalue);
    
    printf("Factorial is :%lld\n",iret);
    

    Factorial(ivalue);
    
    EXIT_SUCCESS;
}