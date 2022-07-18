#include <stdio.h>

int main(void)
{
    int n[10]; // n is an array of 10 integers
    int i,j;

    //Initialize an array element
    for ( i = 0; i < 10; i++ )
    {
        n[i] = i + 100; //Set element i to i + 100
    }

    //Prints the value of each element in the array
    for ( j = 0; j < 10 ; j++ )
    {
        printf("Element[%d] = %d\n",j,n[j]);
    }

    return 0;


}