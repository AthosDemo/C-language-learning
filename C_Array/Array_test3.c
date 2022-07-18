#include <stdio.h>

//Function declaration
double getAverage(int arr[],int size);

int main()
{
    //An integer array with five elements
    int balance[5] = {1000,2,3,17,50};
    double avg;

    //Pass a pointer to the array as an argument
    avg = getAverage( balance,5);

    //Output return value
    printf("The average is: %f",avg);

    return 0;
}

double getAverage(int arr[], int size)
{
    int i;
    double avg;
    double sum=0;

    for (i = 0; i < size; i++ )
    {
        sum += arr[i];
    }

    avg = sum / size;

    return avg;
}