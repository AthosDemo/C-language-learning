#include <stdio.h>

int main(void)
{
    int dividend, divisor , quotient ,remainder;

    printf("Enter the dividend:");
    scanf("%d",&dividend);
    printf("Enter the divisor:");
    scanf("%d",&divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;
    if (remainder)
        printf("%d divided by %d is %d remainder %d",dividend,divisor,quotient,remainder);
    else
        printf("%d dividend by %d is %d",dividend,divisor,quotient);

    return 0;
}