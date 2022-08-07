#include <stdio.h>

int main(void)
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;
    long longType;
    long long longLongType;
    long double longDoubleType;

    printf("Sizeof int: %ld bytes\n",sizeof(integerType));
    printf("Size of long: %ld bytes\n",sizeof(longType));
    printf("Size of long long: %ld\n",sizeof(longLongType));
    
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of long double: %ld bytes\n",sizeof(longDoubleType));
    
    printf("Size of char: %ld bytes\n",sizeof(charType));

    return 0;
}