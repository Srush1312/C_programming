//input:4
//output:1 3 5 7

#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int icnt=0;
    int isum=0;

    for(icnt=1;icnt<=iNo;icnt++)  //shorthand assigned operator
    {
        isum=isum*icnt;
    }

    return isum;

} 

int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter the frequency:\n");
    
    scanf("&d",&ivalue);

    iret=Summation(ivalue);

    printf("Summation is:%d\n",iret);

    return EXIT_SUCCESS;
}
