#include"Header.h"

////////////////////////////////////////////////////
//
//  Entry point of the application
//  
////////////////////////////////////////////////////
int main()
{
    int ivalue1=0,ivalue2=0,iresult=0;

    printf("Enter first number:\n");
    if(scanf("%d",&ivalue1)!=1)
    {
        fprintf(stderr,"unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter second number:\n");
    if(scanf("%d",&ivalue2)!=1)
    {
        fprintf(stderr,"unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }

    iresult=Addition(ivalue1,ivalue2);

    printf("Addition is:%d\n",iresult);     
    
    return EXIT_SUCCESS ;     //#define EXIT_SUCCESS 0
}

