#include <stdio.h>

//Global variable declaration
int g;

int main(void)
{
    //Local variable declaration
    int a,b;

    //Actual initialization
    a = 10;
    b = 20;
    g = a + b;

    printf("value of a =%d,b = %d and g = %d\n",a,b,g);

    return 0;
}