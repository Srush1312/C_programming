#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue1=0,ivalue2=0,iResult=0;
    
    printf("Enter First Number:");
    scanf("%d",&ivalue1);

    printf("Enter Second Number:");
    scanf("%d",&ivalue2);

    if(ivalue1>ivalue2)
    {
        printf("Maximum Number is:%d\n",ivalue1);
    }
    else
    {
       printf("Maximum Number is:%d\n",ivalue2); 
    }

    return EXIT_SUCCESS;
}