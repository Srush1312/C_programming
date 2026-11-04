/*
    output:
    Please enter full name: srushti holkar
    Your name is srushti holkar
8*/

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf(" %29[^\n]", Name);

    printf("Your name is %s", Name);

    return 0;
}


