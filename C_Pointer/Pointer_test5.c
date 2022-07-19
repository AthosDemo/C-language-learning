#include <stdio.h>

const int MAX = 3;

int main()
{
    int var[] = {10,100,200};
    int i, *ptr;

    //The address of the first element in the pointer
    ptr = var;
    i = 0;
    while( ptr <= &var[MAX - 1])
    {
        printf("Memory address: var[%d] = %p\n",i,ptr);
        printf("Stored value: var[%d] = %d\n",i,*ptr);

        //The pointer points to aprevious position
        ptr++;
        i++;
    }

    return 0;
}