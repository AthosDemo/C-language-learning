//The user enters two numbers and finds the greatest common divisor of the two numbers

#include <stdio.h>

int main(void)
{
    int num1,num2;
    int count;
    printf("Please enter two numbers");
    
    scanf("%d %d",&num1,&num2);

    while (num2 != 0)
    {
         count = num1%num2;
         num1 = num2;
         num2 = count;
         printf("num1 = %d num2 = %d count = %d\n",num1,num2,count);
    }
    printf("The greatest common divisor of the two numbers is %d",num1);
    return 0;
    
}