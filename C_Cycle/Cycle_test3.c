#include <stdio.h>

int main(void)
{
    //Loacl variable definition
    int a = 10;

    //The DO loop is executed at least once before the condition is tested
    do
    {
        printf("The value of a is : %d\n",a);
        a = a + 1;
    }while( a < 20 );

    return 0;
}