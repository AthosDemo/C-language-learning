//Determine the largest of the three numbers

#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Please enter three numbers separated by Spaces:");

    scanf("%d %d %d",&a,&b,&c);

    if( a > b )
    {
        if (a > c)
        {
            printf("%d is largest number.\n",a);
            if (b > c)
            {
                printf("%d is the second largest number.\n",b);
                printf("%d is the smallest number.\n",c);
            }
            else
            {
                printf("%d is the second largest number.\n",c);
                printf("%d is the smallest number.\n",b);
            }
        }
        else
        {
             printf("%d is largest number.\n",c);
             printf("%d is the second largest number.\n",a);
             printf("%d is the smallest number.\n",b);
        }
    }
    else
    {
        if(a>c)
        {
                printf("%d is largest number.\n",b);
                printf("%d is the second largest number.\n",a);
                printf("%d is the smallest number.\n",c);
        }
        else
        {
            if(b>c)
            {
                printf("%d is largest number.\n",b);
                printf("%d is the second largest number.\n",c);
                printf("%d is the smallest number.\n",a);
            }
            else
            {
                printf("%d is largest number.\n",c);
                printf("%d is the second largest number.\n",b);
                printf("%d is the smallest number.\n",a);
            }
        }
    }

    return 0;
}
