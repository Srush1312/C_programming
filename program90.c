#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{ 
    int icnt=0,isum=0;
    for(icnt=1;icnt<=iNo;icnt++)
    {
        isum=isum+icnt;
    }
    return isum;
}
int main()
{
    int ivalue=0,iret=0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);

    iret=Summation(ivalue);
    
    printf("Summation is :%d\n",iret);
    

    Summation(ivalue);
    
    EXIT_SUCCESS;
}