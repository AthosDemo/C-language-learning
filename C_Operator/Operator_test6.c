#include <stdio.h>

int main(void)
{
    int a = 21;
    int c;

    c = a;
    printf("Line1 - = operator instance,the value of c is %d\n",c);

    c += a;
    printf("Line2 - += operator instance,the value of c is %d\n",c);

    c -= a;
    printf("Line3 - -= operator instance,the value of c is %d\n",c);

    c *= a;
    printf("Line4 - *= operator instance,the value of c is %d\n",c);

    c /= a;
    printf("Line5 - /= operator instance,the value of c is %d\n",c);

    c = 200;
    c %= a;
    printf("Line6 - %= operator instance,the value of c is %d\n",c);

    c <<= 2;
    printf("Line7 - <<= operator instance,the value of c is %d\n",c);

    c >>= 2;
    printf("Line8 - >>= operator instance,the value of c is %d\n",c);

    c &= 2;
    printf("Line9 - &= operator instance,the value of c is %d\n",c);

    c ^= 2;
    printf("Line10 - ^= operator instance,the value of c is %d\n",c);

    c |= 2;
    printf("Line11 - |= operator instance,the value of c is %d\n",c);

    return 0;
}