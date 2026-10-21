#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{ 
    int icnt=0,isum=0;

    return (isum==iNo);
    
    
}
int main()
{
    int ivalue=0;
    int iret=0;
    bool bret=false;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);
    
   bret=CheckPerfect(ivalue);

   if(bret==true)
   {
        printf("it is perfect number\n");
   }
   else
   {
        printf("it is not a perfect number\n");
   }
    
    return EXIT_SUCCESS;
}  

//Time Complexity:O(N/2)