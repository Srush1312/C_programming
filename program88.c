#include<stdio.h>
#include<stdlib.h>


int main()
{
    int ivalue=0;
    int icnt=0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);

    for(icnt=1;icnt<=ivalue;icnt++)
    {
        printf("%d\n",icnt);
    }

    EXIT_SUCCESS;
}