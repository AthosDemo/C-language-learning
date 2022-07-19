#include <stdio.h>


int main(void)
{

    enum color { red = 1,green,blue};

    enum color favorite_color;

    //The user enters a number to select a color
    printf("Please enter your favorite color:");
    scanf("%u", &favorite_color);

    //Output result
    switch (favorite_color)
    {
        case red:
            printf("Your favorite color is red.");
            break;
        case green:
            printf("You favorite color is green");
            break;
        case blue:
            printf("Your favorite color is blue");
            break;
        default:
            printf("You didn't choose you favorite color");
    }

    return 0;
}