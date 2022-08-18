//ouatput data from 1 to 100 in 10X10 matrix format
#include <stdio.h>

int main(void)
{
    int i,j;

    for (i=1;i<100;i+=10)
    {
        for(j=i;j<(10+i);j++)
        {
            printf("%4d",j);
        }
        printf("\n");
    }

    return 0;

}