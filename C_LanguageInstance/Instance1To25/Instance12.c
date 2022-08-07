#include <stdio.h>

void swap1(float *a,float *b);
void swap2(float *a,float *b);

int main(void)
{
    float firstNumber,secondNumber;
    printf("Enter two float number:");
    scanf("%f %f",&firstNumber,&secondNumber);

    printf("Before change,firstNumber = %f\n",firstNumber);
    printf("Before change,secondNumber = %f\n",secondNumber);

    //swap1(&firstNumber,&secondNumber);
    swap2(&firstNumber,&secondNumber);
    printf("After change,firstNumber = %f\n",firstNumber);
    printf("Ater change,secondNumber = %f",secondNumber);

    return 0;
}

void swap1(float *a,float *b)
{
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

void swap2(float *a,float *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}