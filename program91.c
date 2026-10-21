#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{ 
    int icnt=0,ifact=0;

    ifact=1;
    for(icnt=1;icnt<=iNo;icnt++)
    {
        ifact=ifact * icnt;
    }
    return ifact;
}
int main()
{
    int ivalue=0,iret=0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);

    iret=Factorial(ivalue);
    
    printf("Factorial is :%d\n",iret);
    

    Factorial(ivalue);
    
    EXIT_SUCCESS;
}