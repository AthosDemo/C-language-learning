#include <stdio.h>

int max(int x, int y)
{
    return x > y ? x : y;
}

int main(void)
{
    //p is function pointer
    int (*p)(int,int) = & max;  // & can be omitted
    int a, b, c, d;

    printf("Please enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    //Equivalent to calling a function directly , d = max(max(a,b),c)
    d = p(p(a,b),c);

    printf("The biggest number are:%d\n",d);

    return 0;
}