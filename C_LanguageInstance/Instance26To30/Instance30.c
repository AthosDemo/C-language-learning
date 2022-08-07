//Let n be any natural number. If the numbers of N are arranged in reverse,
// the natural number N1 is equal to N, then N is called a palindrome number. 
//For example, if n=1234321, n is a palindrome number. But if n=1234567, then n is not a palindrome.

#include <stdio.h>

int main(void)
{
    int num_before;
    int num_after;
    int num;
    printf("Enter a number");
    scanf("%d",&num_before);
    num = num_before;
    while( num_before != 0)
    {
        
        num_after += ( num_before % 10);

        

        if(num_before > 10)
        {
            num_after *= 10;
        }

        num_before /= 10;

         printf("Before %d, after %d\n",num_before,num_after);
    }

    printf("Before %d, after %d\n",num,num_after);

    if( num_after == num)
    {
        
        printf("%d is a palindrome number.\n",num);
    }
    else
    {
        printf("%d isn't a palindrome number.\n",num);
    }

    return 0;
}