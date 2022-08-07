//The user enters a character to determine whether the character is a letter

#include <stdio.h>

int main(void)
{
    char c;
    printf("Please enter a character:");

    scanf("%c",&c);

    if (c >='a' && c <='z' || c >='A' && c<= 'Z')
    {
        printf("The character you enter is letter");
    }
    else
    {
        printf("The character you enter is not letter");
    }

    return 0;
}