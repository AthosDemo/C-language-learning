//Loop output 26 letters

#include <stdio.h>

int main(void)
{
    char C;
    char c ='a';
    for ( C = 'A'; C <= 'Z' ;C++)
    {
        printf("%c",C);
        printf("%c\n",c);
        c++;
    }
    return 0;
}

//I think the mere loop output of 26 letters is too dull, so I wrote a program loop output uppercase and lowercase letters