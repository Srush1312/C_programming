#include<stdio.h>
#include<stdlib.h>

int Maximum(int iNo1,int iNo2,int iNo3) 
{
    if((iNo1>iNo2)||(iNo1>iNo3))
    {
        return iNo1;
    }
    else if(iNo2>iNo1)||(iNo2>iNo3)
    {
        return iNo2;
    }
    else(iNo3>iNo1)||(iNo3>iNo2)
    {
        return iNo3;
    }
}
int main()
{
    int ivalue1=0,ivalue2=0,ivalue3=0;
    int iResult=0;
    
    printf("Enter First Number:\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number:\n");
    scanf("%d",&ivalue2);

    printf("Enter Third Number:\n");
    scanf("%d",&ivalue3);

    iResult=Maximum(ivalue1,ivalue2,ivalue3);
    printf("Maximum is:%d\n",iResult);

    return EXIT_SUCCESS;
}