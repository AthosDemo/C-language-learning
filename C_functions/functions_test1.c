#include <stdio.h>

//Function declaration
int max(int num1, int num2);

int main()
{
    //Local variable definition
    int a = 100;
    int b = 200;
    int ret;

    //Call the function to get the maximum value
    ret = max(a,b);

    printf("Max value is: %d",ret);

    return 0;
}

//The function returns the greater of the two numbers
int max(int num1,int num2)
{
    //Loacl variable declaration
    int result;

    if( num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}