//input:4
//output:4 3 2 1

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int icnt=0;

    for(icnt=iNo;icnt>=1;icnt--)
    {
        printf("%d\t",icnt);
    }

    printf("\n");

} 

int main()
{
    int ivalue=0;

    printf("Enter the frequency:\n");
    
    scanf("&d",&ivalue);

    Display(ivalue);

    return EXIT_SUCCESS;
}
