//Finde all the factors of an integer
#include <stdio.h>

int main(void)
{

int num;
int i;
int count;

printf("Please enter an integer:");
scanf("%d",&num);

for ( i =1 ; i <= num; i++ )
{
    count = num % i;
    if( count != 0)
    {
        continue;
    } 
    else
    {
        printf("%d ",i);
    }
}
printf("is %d's factors.",num);

return 0;
}