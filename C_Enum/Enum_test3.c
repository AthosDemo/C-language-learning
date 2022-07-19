#include <stdio.h>

int main(void)
{

    enum day
    {
        saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
    } workday;

    int a = 1;
    enum day weekend;
    weekend = ( enum day ) a;
    // weekend = a; false
    printf("weekend: %d",weekend);
    return 0;
}