#include <stdio.h>

int main()
{
    int a = 5;
    int b = 20;
    int c;

    if ( a && b)
    {
        printf("Line 1 - Condition true\n");
    }
    if ( a || b)
    {
        printf("Line 3 -Condition true\n");
    }
    //Change the value of a and b
    a = 0;
    b = 20;
    if ( a && b)
    {
        printf("Line 3 -Condition true\n");
    }
    else
    {
        printf("Line 4 -Condition false\n");
    }
    if ( !( a && b))
    {
        printf("Line 4 - Condition true\n");
    }
}