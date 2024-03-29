#include <stdio.h>
#include <string.h>

//Define simple structures
struct
{
    unsigned int widthValidated;
    unsigned int heightValidated;
}   status1;

//Define the bit-field structure
struct
{
    unsigned int widthValidated: 1;
    unsigned int heightValidated: 1;
} status2;

int main()
{
    printf("Memory size occupied by status1 : %d\n",sizeof(status1));
    printf("Memory size occupied by status2: %d\n",sizeof(status2));

    return 0;
}