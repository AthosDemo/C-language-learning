//Output the multiplication table using a nested for loop

#include <stdio.h>

int main(void)
{
    int i,j;
    int product_num;
    int count;

    for ( i = 1 ; i < 10 ; i++)
    {
        for ( j = 1 ; j < i+1 ; j++)
        {
            product_num = i * j;
            printf("%d X %d = %d  ",j,i,product_num);
            if (i == j)
            {
                printf("\n");
            }
        }
        
    }

    return 0;
}