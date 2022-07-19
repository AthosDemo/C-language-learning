#include <stdio.h>

int main()
{
    int var = 20; //Declaration of actual variables
    int *ip;   //Declaration of pointer variables

    ip = &var; //Store the address of var in a pointer variable

    printf("var variable address: %p\n", &var);

    //The address stored in a pointer variablle
    printf("IP address where the variable is stored %p\n",ip);

    //Use pointers to access values
    printf("Value of the IP variable: %d\n",*ip);

    return 0;
}