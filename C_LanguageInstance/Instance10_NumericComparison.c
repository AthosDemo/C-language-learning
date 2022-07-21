#include <stdio.h>

int main(void)
{
    int num1,num2;
    printf("Enter two numbers for comparison:");
    scanf("%d %d",&num1,&num2);

    if( num1 > num2)
        printf("%d is greater than %d",num1,num2);
    else if( num1 == num2 )
        printf("%d is equal %d",num1,num2);
    else
         printf("%d is greater than %d",num2,num1);
}