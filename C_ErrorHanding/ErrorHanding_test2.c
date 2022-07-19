#include <stdio.h>
#include <stdlib.h>


int main()
{
    int dividend = 20;
    int divisor = 0;
    int quotient;

    if( divisor == 0){
        fprintf(stderr,"If the divisor is 0,the operation exits...\n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"The value of the quotient variable is: %d\n", quotient);

    exit(0);
}