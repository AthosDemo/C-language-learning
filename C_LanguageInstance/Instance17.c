// Solve quadratic equations of one variable

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a ,b , c;
    double delat;
    double x1, x2;
    char ch;
    do
    {

        
        
        printf("Please input the three coefficients of the quadratic equation of one variable:\n");
        
        printf("Please enter the coefficient A =\t");
        scanf("%lf",&a);
        
        printf("Please enter the coefficient b =\t");
        scanf("%lf",&b);
        
        printf("Please enter the coefficient c =\t");
        scanf("%lf",&c);
        
        delat = b*b-4*a*c;
        
        if(delat>0)
        {
            x1= ( -b+sqrt(delat) )/(2*a);;
            x2= ( -b-sqrt(delat) )/(2*a);;
            printf("There are 2 real solutions: x1 = %lf  x2 = %lf\n",x1,x2);
        }
        else if(delat==0)
        {
            x1=( -b+sqrt(delat) )/(2*a);;
            printf("There are 2 equal real solutions:x1=x2 = %lf\n",x1);
        }
        else
            printf("No real solution\n");

        printf("Do you want to continue?Y/N\n");
        scanf(" %c",&ch);
    }while(ch=='y'||ch=='Y');
    return 0;
}