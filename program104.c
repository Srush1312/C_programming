#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
{ 
    int icnt=0,isum=0;

    for(icnt=1;icnt<=iNo/2;icnt++)
    {
        if((iNo%icnt)==0)
        {
           isum=isum=icnt;
        }
    }

    if (isum==iNo)
    {
        printf("it is perfrct number\n");
    }
    else
    {
        printf("it is not perfect number\n");
    }
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);
    

   CheckPerfect(ivalue);
    
    return EXIT_SUCCESS;
}  

//Time Complexity:O(N/2)