#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input : integer,integer
//  Output : integer
//  Discription : performace addition
//  Date : 04/10/2026
//  Author : Srushti Bhagwan Holkar
//
////////////////////////////////////////////////////

int Addition(
                int iNo1,     //first input
                int iNo2      //second input
            )
{
    int iAns=0;

    iAns =iNo1+iNo2;   //Business Logic

    return iAns;
}

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

///////////////////////////////////////////////////
//
//  step5:Test the program
//  tested cases
//  input1    input2  output
//  10          11      21
//  11           0      11
//   0          11      11
//  -9          -9     -18
// -20          20       0
// -11         -23     -34
///////////////////////////////////////////////////