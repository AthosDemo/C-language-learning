//Identify vowels/consonants

#include <stdio.h>

int main(void)
{
    char c;

    int isLowercaseVowel, isUppercaseVowel;

    printf("Type in a letter:");
    scanf("%c",&c);

    isLowercaseVowel = ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c=='u');

    isUppercaseVowel = ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if( isLowercaseVowel || isUppercaseVowel)
    {
        printf("%c is vowel",c);
    }
    else{
        printf("%c is consonants",c);
    }

    return 0;
}