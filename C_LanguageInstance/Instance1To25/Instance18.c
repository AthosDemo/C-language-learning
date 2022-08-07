// To determine leap year

#include <stdio.h>

int main(void)
{
    int year_num;
    printf("Please enter the year:");
    scanf("%d",&year_num);
    if(year_num % 100 == 0)
    {
        if(year_num % 400 == 0)
        {
            printf("It's leap year.");
        }
        else
        {
            printf("It's not leap year.");
        }
    } 
    else if( year_num % 4 == 0)
    {
        printf("It's leap year.");
    } 
    else
    {
        printf("It's not leap year.");
    }  
    return 0;
}