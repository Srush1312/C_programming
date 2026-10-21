#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1,int iNo2) 
{
    float fAns=0.0f;

    fAns=(iNo1+iNo2/2);

    return fAns;   
}
int main()
{
     int ivalue1=0,ivalue2=0;
     float fResult=0.0f;
    
    printf("Enter First Number:");

    scanf("%d",&ivalue1);

    printf("Enter Second Number:");
    scanf("%d",&ivalue2);

   iResult=Average(ivalue1,ivalue2);
   printf("Minimum number is:%f\n",iResult);

    return EXIT_SUCCESS;
}