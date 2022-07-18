#include <stdio.h>

//The variables x and y are defined outside the function
int x;
int y;
int addtwonum()
{
    //Declare variables x and y inside the function as external variables
    extern int x;
    extern int y;
    //给外部变量（全局变量）x 和 y 赋值
    x = 1;
    y = 2;
    return x+y;
}

int main()
{
    int result;
    //Call the function addtwonum
    result = addtwonum();

    printf("result is: %d",result);
    return 0;
}