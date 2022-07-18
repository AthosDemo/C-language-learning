#include <stdio.h>

int main(void)
{
    //Loacl variable defination
    int a = 10;

    //Do loop execution
    LOOP:do
    {
        if ( a == 15)
        {
            // Sikp the iteration
            a = a + 1;
            goto LOOP;
        }
        printf("The value of a is: %d\n",a);
        a++;

    } while ( a < 20 );

    return 0;
    
}