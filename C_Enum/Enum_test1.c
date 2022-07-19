#include <stdio.h>

enum DAY
{
    MON = 1, TUE , WED , THU , FRI , SAT ,SUN
} day;
int main(void)
{
    //Iterate over enumeration elements
    for (day = MON ; day <= SUN ; day++){
        printf("Enumeration dlements: %d \n",day);
    }

    return 0;
}
