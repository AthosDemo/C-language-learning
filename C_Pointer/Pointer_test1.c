#include <stdio.h>

int main()
{
    int var_runoob = 10;
    int *p; //Defining pointer variables
    p = &var_runoob;

    printf("var_runoob variable address： %p\n",p);
    return 0;
}