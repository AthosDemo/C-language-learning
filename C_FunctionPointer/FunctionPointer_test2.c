#include <stdlib.h>
#include <stdio.h>

//callback function
void populate_array(int *array,size_t arraySize,int (*getNextValue)(void))
{
    for (size_t i= 0 ; i < arraySize; i++)
        array[i] = getNextValue();
}

//Get random value
int getNextRandomValue(void)
{
    return rand();
}

int main(void)
{
    int myarray[10];
    //GetNextRandomValue cannot be parenthesized or 
    //it will not compile because parenthesized means 
    //that the parameter is passed an int instead of a function pointer
    populate_array(myarray , 10 ,getNextRandomValue);
    for(int i = 0; i < 10; i++){
        printf("%d\n",myarray[i]);
    }
    
    return 0;
}