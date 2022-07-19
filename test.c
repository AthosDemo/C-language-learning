#include <stdio.h>

int main(void)
{
    const char *names[] = {
                    "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
    };

    int i = 0;

    for ( i = 0; i < 4;i++)
    {
        printf("names[%d] = %p\n",i,names[i]);
        printf("names[%d] = %s\n",i,names[i]);
    }
    
}