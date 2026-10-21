/*
    step1:Understand the problem statement
    step2:Write the algorithm
    step3:Decide the programming language
    step4:Write the code
    step:Test the program
*/

///////////////////////////////////////////////////
//
//  step1:Understand the problem statement
//        user is going to enter any 2 integers   
//        and we have to perform addition 
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//
// step2:   write the algorithm
/*  
    START
        accept first number as No1
        accept first number as No2
        create the variable as Ans to store the result
        perform the addition
        display the result form Ans
    END    
*/
//
////////////////////////////////////////////////////

////////////////////////////////////////////////////
//
//  step3:Decide the programming language
//      We select the programming
//
////////////////////////////////////////////////////

////////////////////////////////////////////////////
//  
//  step4:Write the code
//
////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int ivalue1=0,ivalue2=0,iresult=0;

    printf("Enter first number:\n");
    scanf("%d",&ivalue1);

    printf("Enter second number:\n");
    scanf("%d",&ivalue2);

    iresult=ivalue1+ivalue2;      //Business Logic

    printf("Addition is:%d\n",iresult);     
    
    return 0;
}