#include <stdio.h>

int main(void)
{
    int V;
    int *Pt1;
    int **Pt2;

    V = 100;

    // Gets the address of V
    Pt1 = &V;

    //Get the address of Pt1 using the & operator
    Pt2 = & Pt1;

    //Use printf to get the value
    printf("var = %d\n",V);
    printf("Address V is : %p\n",V);
    printf("Pt1 = %p\n",Pt1);
    printf("*Pt1 = %d\n",*Pt1);
    printf("Pt2 = %p\n",Pt2);
    printf("**Pt2 = %d\n",**Pt2);

    return 0;
}