//Use asterisks to create various triangle patterns
#include <stdio.h>

int main(void)
{

    int n;
    int i,j;
    printf("Please enter the number of numeric pyramid layers (less than 50)");
    scanf("%d",&n);

    for( i=1; i<=n;i++)
    {
        for(j= n-i;  j >= 1;j--)
        {
            printf(" ");
        }
        for(j= 1;j<=(2*(i-1)+1);j++)
        {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}