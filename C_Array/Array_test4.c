#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//A function that generates and returns random numbers
int *getRandom()
{
    static int r[10];
    int i;

    //Set the seeds
    srand((unsigned)time( NULL ));
    for ( i = 0; i < 10; ++i )
    {
        r[i] = rand();
        printf("r[%d] = %d\n",i,r[i]);
    }

    return r;
}

//The main function defined above is called
int main(void)
{
    //A pointer to an integer
    int *p;
    int i;

    p = getRandom();
    for ( i = 0; i < 10 ; i++ )
    {
        printf("*(p + %d) : %d\n",i,*(p + i));
    }

    return 0;
}