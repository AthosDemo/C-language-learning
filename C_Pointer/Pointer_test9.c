#include <stdio.h>

//Function declaration
double getAverage(int *arr, int size);

int main(void)
{
    //An integer array with five elements
    int balance[5] = {1000,2,3,17,50};
    double avg;

    //Pass a pointer to the array as an argument
    avg = getAverage( balance , 5);

    //Output return value
    printf("Average value is : %f\n",avg);

    return 0;
}

double getAverage(int *arr,int size)
{
    int i,sum = 0;
    double avg;

    for ( i = 0; i< size; ++i)
    {
        sum += arr[i];
    }

    avg = (double)sum /size;

    return avg;
}