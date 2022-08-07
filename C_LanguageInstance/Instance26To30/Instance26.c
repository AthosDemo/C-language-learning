//The factorial of a positive integer is the product of all positive integers less than or equal to the number, and the factorial of 0 is 1. The factorial of the natural number n is written as N.

#include <stdio.h>

int main(void)
{
    int factorial_num;
    int count;
    int result_num = 1;
    printf("Please enter the factorial required:");

    scanf("%d",&factorial_num);

    for (count = 1; count <= factorial_num; count++)
    {
        result_num *= count;
        printf("resul_num %d is %d\n",count,result_num);

    }
    printf("%d",result_num);

    return 0;
}

//WWhen I wrote the program of instance 26 about factorial, the first mistake was I didn't care about the influence of negative numbers, the second I ignored the 0! is 1, it is a big mistake.