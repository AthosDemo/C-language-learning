#include <stdio.h>
#include <float.h>

int main()
{
    printf("The maximum number of bytes stored on float: %lu \n",sizeof(float));
    printf("The minimum number of float: %E \n ",FLT_MIN);
    printf("The maximum number of float: %E \n",FLT_MAX);
    printf("Precision values: %d\n",FLT_DIG);

    return 0;
}