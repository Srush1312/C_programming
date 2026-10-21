#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>   //boolean is not a data type in c 

bool CheckEven(int iNo)   
{
    if((iNo % 2)==0)
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
    scanf("%d",&ivalue);

    bRet=CheckEven(ivalue);

    if(bRet==true)
    {
        printf("It is Even\n");
    }
    else
    {
        printf("It is Odd\n");
    }

    return EXIT_SUCCESS;
}