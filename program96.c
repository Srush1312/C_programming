#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("sizeof int:%zu\n",sizeof(int));
    printf("sizeof char:%zu\n",sizeof(char));
    printf("sizeof double:%zu\n",sizeof(double));
    printf("sizeof float:%zu\n",sizeof(float));
    printf("sizeof long int:%zu\n",sizeof(long int));
    printf("sizeof short int:%zu\n",sizeof(short int));
    printf("sizeof long double:%zu\n",sizeof(long double));

    return EXIT_SUCCESS;
}