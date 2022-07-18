//Call a function by pasing a value
#include <stdio.h>

//Function declaration
void swap(int x,int y);

int main(void)
{
    //Loacl variable definition
    int a = 100;
    int b = 200;

    printf("The value of 'a' before  the swap: %d\n",a);
    printf("The value of 'b' before the swap: %d\n",b);

    swap(a,b);

    printf("The value of 'a' after the swap: %d\n",a);
    printf("The value of 'b' after the swap: %d\n",b);

    return 0;
}







//Function definition
void swap( int x,int y)
{
    int temp;

    temp =x; //Save the value of x
    x = y; //Assign y to x
    y = temp;//Assign temp to y


    return;
}