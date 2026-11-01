#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int icnt=0;
    bool bFlag=false;

    for(icnt=2,bFlag=true;icnt<=iNo/2;icnt++)
    {
       if((iNo%icnt)==0) 
       {
          bFlag=false;
       }
    }
    return bFlag;
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
