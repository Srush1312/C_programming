#include<stdio.h>
#include<stdlib.h>

int Maximum(int iNo1,int iNo2)
{ 
    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
       return iNo2;
    }
}

int main()
{
    int ivalue1=0,ivalue2=0,iResult=0;
    
    printf("Enter First Number:");
    scanf("%d",&ivalue1);

    printf("Enter Second Number:");
    scanf("%d",&ivalue2);

   iResult=Maximum(ivalue1,ivalue2);
   printf("Maximum number is:%d\n",iResult);

    return EXIT_SUCCESS;
}