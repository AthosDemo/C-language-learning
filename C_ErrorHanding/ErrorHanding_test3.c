#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividend = 20;
    int divisor = 5;
    int quotient;

    if( divisor == 0){
        fprintf(stderr,"The divisor is 0. Exit the operation.");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"The value of the quotient variable is: %d\n",quotient);

    exit(EXIT_SUCCESS);
}