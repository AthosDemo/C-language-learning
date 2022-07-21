#include <stdio.h>

int main(void)
{
    char char1;
    printf("Enter the character you want to convert to ASCII:");
    scanf("%c",&char1);
    printf("The ASCII of the character %c you entered is %d",char1,char1);

    return 0;
}