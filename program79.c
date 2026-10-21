//input:5
//output:1+2+3+4+5=15

//input:8
//output:1+2+3+4+5+6+7+8=36

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int icnt=0;
    int isum=0;

    icnt=1;

    //isum=0+1
    isum=isum+icnt;
    icnt++; //2

   //isum+2:3
    isum=isum+icnt;
    icnt++;  //3

    //isum+3:6
    isum=isum+icnt;
    icnt++;  //4

    //isum+4:10
    isum=isum+icnt;
    icnt++;   //5

    //isum+5:15
    isum=isum+icnt;
    icnt++;  
    
    printf("%d\n",isum);    //15
   
    return EXIT_SUCCESS;
}
