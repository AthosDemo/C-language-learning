#include <stdio.h>

int main(void)
{
    int add_num1,add_num2,sum;
    printf("Enter two integers to add:");
    scanf("%d %d",&add_num1,&add_num2);

    sum = add_num1 + add_num2;
    printf("The sum of two integers is %d",sum);
    return 0;
}