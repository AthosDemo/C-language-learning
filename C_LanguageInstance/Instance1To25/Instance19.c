//The user enters a  number and determines whether it is positive, negative, or zero.

#include <stdio.h>

int main(void)
{
    double number;
    printf("Please enter a number:");
    scanf("%lf",&number);

    if (number > 0)
    {
        printf("The number you enter is positive");
    }
    else if (number < 0)
    {
        printf("The number you enter is negative");
    }
    else
    {
        printf("The number you enter is zero");
    }

    return 0;
}