#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,arms_num,count=1,num1,num2=0;

    printf("Please enter a number:");
    scanf("%d",&arms_num);

    num1 = arms_num;

    while(num1 > 10)
    {
        num1 /= 10;
        count++;
    }
    printf("count = %d\n",count);
    num1 = arms_num;
    for(i =0; i <count;i++)
    {
        num2 += ( pow(num1 % 10,count));
        num1 /= 10;
        printf(" num1 %d, num2 %d\n",num1,num2);
    }

    printf("num2 = %d\n",num2);

    if(num2 == arms_num)
    {
        printf("%d is armstrong.",arms_num);
    }
    else
    {
        printf("%d isn't armstrong",arms_num);
    }

    return 0;
}