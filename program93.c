#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{ 
    int icnt=0;
    long int ifact=0;

    for(icnt=1,ifact=1;icnt<=iNo;icnt++)
    {
        ifact=ifact * icnt;
    }
    return ifact;
}
int main()
{
    int ivalue=0;
    long int iret=0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);

    iret=Factorial(ivalue);
    
    printf("Factorial is :%ld\n",iret);
    

    Factorial(ivalue);
    
    EXIT_SUCCESS;
}