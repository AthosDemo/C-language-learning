#include <stdio.h>

int main(void)
{
    int a;
    printf("Input integer number: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("Monday\n");
        break;
        case 2:printf("Tuesday\n");
        break;
        case 3:printf("Friday\n");
        break;
        case 4:printf("Thursday\n");
        break;
        case 5:printf("Friday\n");
        break;
        case 6:printf("Saturday\n");
        break;
        case 7:printf("Sunday\n");
        break;
        default:printf("error\n");
    }

    return 0;
}