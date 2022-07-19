#include <stdio.h>

int main(void)
{
    //An integer array with five elements
    double balance[5] = {1000.0,2.0,3.4,17.0,50.0};
    double *p;
    int i;

    p = balance;

    //Prints the value of each element in the array
    printf("Use the array value of the pointer\n");
    for ( i = 0; i < 5 ; i++)
    {
        printf("*(p + %d) : %f\n",i,*( p + i ));
    }

    printf("Use balance as an array value for the address\n");
    for( i = 0; i < 5; i++)
    {
        printf("*(balance + %d): %f\n",i,*(balance + i));
    }

    return 0;
}