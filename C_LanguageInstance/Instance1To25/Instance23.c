//The Fibonacci sequence refers to the sequence 1,1,2,3,4,8,12,21,34...
//The sequence start with the third term, each of which is equal to the sum of the first two terms.

#include <stdio.h>

int main(void)
{
    int i, n, t1 =0, t2 =1 ,nextTerm;

    printf("Output several items:");

    scanf("%d",&n);

    printf("Fibonacci:");

    for ( i = 1; i <= n+1; i++)
    {
        if( t1 != 0)
        {
            printf("%d ",t1);
        }
        nextTerm = t1 +t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}