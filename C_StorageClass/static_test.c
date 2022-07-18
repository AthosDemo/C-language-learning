#include <stdio.h>

//function declaration
void func1(void);

static int count = 10; //The global variable -static is the default

int main()
{
    while (count--)
    {
        printf("before is %d\n",count);
        func1();
        printf("then is %d\n",count);

    }
    return 0;
}

void func1(void)
{
    /*'thingy' is a loacl variable of 'func1' -initialized only once
    *The 'thingy' value is not reset each time the function 'func1' is called
    */
   static int thingy = 5;
   thingy++;
   printf("thingy is %d, count is %d\n",thingy,count);
}