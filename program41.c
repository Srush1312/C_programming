#include<stdio.h>
#include<stdlib.h>

void Maximum(int iNo1,int iNo2)
{ 
    if(iNo1>iNo2)
    {
        printf("Maximum Number is:%d\n",iNo1);
    }
    else
    {
       printf("Maximum Number is:%d\n",iNo2); 
    }
}

int main()
{
    int ivalue1=0,ivalue2=0,iResult=0;
    
    printf("Enter First Number:");
    scanf("%d",&ivalue1);

    printf("Enter Second Number:");
    scanf("%d",&ivalue2);

    Maximum(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}