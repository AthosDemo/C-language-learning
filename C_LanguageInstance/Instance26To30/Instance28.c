//The user enter a number and determines howmany digits the number is.
//I found a mistake; when I enter a number like 3.3, the program storage 3.299999, so I can't request how many its digits are.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[50];
    int i,j;
    int a,b;
    int count_integer =0;
    int count_decimals=0;  
    printf("Please enter a number:");

    // Converts input numbers to characters
    gets(c);

    // Get the valid character length
    j = strlen(c) - 1;

    //Get the partial number of integers
    for( i = 0 ; i <j ;i++)
    {
        if( c[i] != '.')
        {
            count_integer++;
        }
        else
        {
            //Gets the sequence number of a string starting with a small number
            a = i+1;
            break;
        }
    }

    for ( j ; j >= 0 ; j--)
    {
        if( c[j] != '0')
        {
            //Gets the ordinal number at the end of a valid decimal in a string
            b = j;
            break;
        }
    }

    //Get the partial number of decimals
    for ( a ; a <= b ;a++)
    {
        count_decimals++;
    }

    printf(c);
    printf("\nThe integer part of entering number digits is %d, and the decimals part of digits is %d",count_integer,count_decimals);
    return 0;
}