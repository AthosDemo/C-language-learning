#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *par);

int main()
{
    unsigned long sec;

    getSeconds(&sec);

    //Output actual value
    printf("Number of seconds: %ld\n",sec);

    return 0;
}

void getSeconds(unsigned long *par)
{
    //Gets the current number of seconds
    *par = time( NULL);
    return ;
}