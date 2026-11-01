#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int iNo)
{
    int icnt=0;
    int isum=0;

    for(icnt=2;icnt<=iNo/2;icnt++)
    {
       if((iNo%icnt)==0) 
       {
          isum=isum+icnt;
       }
    }
    if(isum==0)
    {
        return true;
    }
    else
    {
        return false;
    }   
}

int main()
{
    int ivalue=0;
    bool bRet=false;

    printf("Enter Number:\n");
    scanf("%d",ivalue);

    bRet=CheckPrime(ivalue);

    if(bRet)
    {
        printf("It is prime Number\n");
    }
    else
    {
        printf("It is not a prime Number\n");
    }

    return EXIT_SUCCESS;
}
