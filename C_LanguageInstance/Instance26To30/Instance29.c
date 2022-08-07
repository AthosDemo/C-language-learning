//Calculate a number to the NTH power, such as 2^3, whrere 2 is the base and 3 is the exponent.

#include <stdio.h>

int main(void)
{
    int base_num,exponent_num;
    long long result = 1;
    printf("Please enter the base number:");
    scanf("%d",&base_num);

    printf("Please enter the exponent number:");
    scanf("%d",&exponent_num);

    if( exponent_num >= 0)
    {
        while(exponent_num != 0)
        {
            result *= base_num;
            exponent_num--;
        }
        printf("The result is %lld",result);
    }
    else
    {
        printf("Error");
    }

    return 0;

}