#include <stdio.h>

int A = 10;
int B = 20;
char buy;
int sum,number;

int main(void)
{
    printf("Here are the goods and prices of our shop: \n item A is 10 yuan each; \n item B is 20 yuan each");
    printf("Please input your desired product(A or B)");
    scanf("%c",&buy);
    printf("Please enter the required quantity:\n");
    scanf("%d",&number);
    sum=buy=='A'?A*number:B*number;
    printf("The total for the %d %c item you need is %d yuan.",number,buy,sum);
    return 0;
}