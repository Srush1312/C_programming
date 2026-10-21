#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];  //limit of 29 letters in c language

    printf("Enter Your Name:\n");
    scanf("%s",sName);

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}