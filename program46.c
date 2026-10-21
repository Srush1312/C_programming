#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1,int iNo2,int iNo3) 
{
    float fAns=0.0f;
    //type casting
    fAns=((float)iNo1+(float)iNo2+(float)iNo3/3);

    return fAns;   
}
int main()
{
    int ivalue1=0,ivalue2=0,ivalue3=0;
    float fResult=0.0f;
    
    printf("Enter First Number:\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number:\n");
    scanf("%d",&ivalue2);

    printf("Enter Third Number:\n");
    scanf("%d",&ivalue3);

    fResult=Average(ivalue1,ivalue2,ivalue3);
    printf("Average is:%f\n",fResult);

    return EXIT_SUCCESS;
}