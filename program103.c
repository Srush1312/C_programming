#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{ 
    int icnt=0,isum=0;

    for(icnt=1;icnt<=iNo/2;icnt++)
    {
        if((iNo%icnt)==0)
        {
           isum=isum=icnt;
        }
    }

    return isum;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);
    
   iret=SumFactors(ivalue);

   printf("Summation of factors:%d\n",iret);
    
    return EXIT_SUCCESS;
}  

//Time Complexity:O(N/2)