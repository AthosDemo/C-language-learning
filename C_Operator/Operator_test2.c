#include <stdio.h>

int main()
{
    int c;
    int a = 10;
    c = a++;
    printf("Assignment before operation:\n");
    printf("The value of line 1 -c is %d\n",c);
    printf("The value of line 2 -a is %d\n",a);
    a = 10;
    c = a--;
    printf("The value of line 3 -c is %d\n",c);
    printf("The value of line 4 -a is %d\n",a);

    printf("Operation before assignment:\n");
    a = 10;
    c = ++a;
    printf("The value of line 5 -c is %d\n",c);
    printf("The value of line 6 -a is %d\n",a);
    a = 10;
    c = --a;
    printf("The value of line 7 -c is %d\n",c);
    printf("The value of line8 -a is %d\n",a);

}