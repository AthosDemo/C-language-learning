//Judge a prime number

#include <stdio.h>

int main(void)
{
    int prime_num;
    int i;
    int count = 0;

    printf("Please enter a number:");
    scanf("%d",&prime_num);
    for( i =2; i <= prime_num/2 ; i++)
    {
        if(prime_num % i == 0)
        {
            printf("%d isn't prime.",prime_num);
            count++;
            break;
        }
    }

    if(count == 0)
    {
        printf("%d is prime.",prime_num);
    }

    return 0;
    
}