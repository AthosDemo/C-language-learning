#include <stdio.h>
#include "addtwonum.c" //调用其他文件

//Define two global variables
int x = 1;
int y = 2;
int addtwonum();
int main(void)
{
    int result;
    result = addtwonum();
    printf("result is :%d\n",result);
    return 0;
}