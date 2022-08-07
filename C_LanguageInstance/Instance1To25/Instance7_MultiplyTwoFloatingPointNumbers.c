#include <stdio.h>

int main(void)
{
    float float1,float2,product;

    printf("Enter two floating point numbers:");
    scanf("%f %f",&float1,&float2);
    
    product = float1 * float2;
    printf("The product is %f",product);

    return 0;
}