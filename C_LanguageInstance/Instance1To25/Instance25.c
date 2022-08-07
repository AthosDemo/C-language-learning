//The user enters two numbers and finds the least common multiple of these two numbers.

#include <stdio.h>

int gcd(int m,int n);


int main(void)
{
    int num1,num2,least_common_multiple,count;
    printf("Please enters two numbers:");
    scanf("%d %d",&num1,&num2);

    if(num1 < num2)
    {
        count = num1;
        num1 = num2;
        num2 = num1;
    }

    count = gcd(num1,num2);

    least_common_multiple = (num1 * num2) / count;

    printf("The least common multiple of %d and %d is %d",num1,num2,least_common_multiple);
    return 0;
}

int gcd(int m,int n)
{
    if(m%n == 0) 
        return n;
    else 
        return gcd(n,m%n);
}