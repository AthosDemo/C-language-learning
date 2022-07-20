#include <stdio.h>
#include <stdarg.h>

double average(int num,...)
{
    va_list valist;
    double sum = 0.0;
    int i;

    //Initialize valist for num parameters
    va_start(valist,num);

    //Access all parameters assigned to valist
    for ( i = 0; i < num; i++)
    {
        sum += va_arg(valist,int);
    }
    //Clean up the memory reserved for valist
    va_end(valist);

    return sum/num;
}

int main(void)
{
    printf("Average of 2,3,4,5 = %f\n", average(4,2,3,4,5));
    printf("Average of 5,10,15 = %f\n", average(3,5,10,15));

    return 0;
}