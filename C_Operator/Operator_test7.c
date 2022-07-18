#include <stdio.h>

int main(void)
{
    int a = 4;
    short b;
    double c;
    int *ptr;

    //Sizeof operator instance
    printf("Line 1 - the size of variable a is equal to %lu\n",sizeof(a));
    printf("Line 2 - the size of variable b is equal to %lu\n",sizeof(b));
    printf("Line 3 - the size of variable c is equal %lu\n",sizeof(c));

    // & and * operator instance
    ptr = &a; // 'ptr' now contains the address of 'a'
    printf("the value of a is %d\n",a);
    printf("ptr is %d\n",*ptr);

    //Ternary operator instance
    a = 10;
    b = ( a == 1)? 20: 30;
    printf("The value of b is %d",b);

    b = ( a == 10)? 20 : 30;
    printf("The value of b is %d\n",b);

    return 0;

}