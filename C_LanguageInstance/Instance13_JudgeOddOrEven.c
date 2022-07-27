#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer:");
    scanf("%d",&number);

    if (number % 2 == 0)
        printf("It's even");
    else
        printf("It's odd.");

    return 0;
}