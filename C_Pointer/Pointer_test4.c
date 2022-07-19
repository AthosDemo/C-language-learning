#include <stdio.h>

const int MAX = 3;

int main(void)
{
    int var[] = {10,100,200};
    int i, *ptr;

    //The address of an array in a pointer
    ptr = var;
    for ( i = 0; i < MAX ; i++)
    {
        printf("Memory address: var[%d] = %p\n",i,ptr);
        printf("Stored value: var[%d] = %d\n",i,*ptr);

        //Pointer to the next position
        ptr++;
    }
    return 0;
}