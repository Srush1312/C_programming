#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1,int iNo2) 
{
    float fAns=0.0f;
    //type casting
    fAns=((float)iNo1+(float)iNo2/2);

    return fAns;   
}
int main()
{
    int ivalue1=0,ivalue2=0;
    float fResult=0.0f;
    
    printf("Enter First Number:\n");

    scanf("%d",&ivalue1);

    printf("Enter Second Number:\n");
    scanf("%d",&ivalue2);

   iAns=Average(ivalue1,ivalue2);
   printf("Average is:%f\n",iAns);

    return EXIT_SUCCESS;
}