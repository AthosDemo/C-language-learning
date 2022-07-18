#include <stdio.h>

int main(void)
{
    //Loacl variable defination
    int a = 10 ;

    //Do loop execution
    do
    {
        if( a == 15 )
        {
            //Skip the iteration
            a = a + 1;
            continue;
        }
        printf("The value of a is %d\n",a);
        a++;
    } while ( a < 20 );

    return 0;
}