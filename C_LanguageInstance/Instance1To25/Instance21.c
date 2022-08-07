//The sum of the natural numbers from 1 to N

#include <stdio.h>

int main(void)
{
    int number,sum;
    printf("Please enter an integer");
    
    scanf("%d",&number);

    if( number <=0)
    {
        printf("Input error.");
    }
    else
    {
        sum = (1+number)*number/2;
        printf("The sum from 1 to N is %d",sum);
    }

    return 0;
    

}