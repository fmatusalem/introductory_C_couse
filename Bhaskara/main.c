#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float a,b,c,x1,x2,delta;

    printf("Input the coefficients of quadratic equation a, b and c,\n");
    printf("ax^2+bx+c=0\n");
    printf("Input a:");
    scanf("%f",&a);
    printf("Input b:");
    scanf("%f",&b);
    printf("Input c:");
    scanf("%f",&c);

    printf("\n\nThe equation is %.2fx^2+%.2fx+%.2f=0\n\n",a,b,c);

    delta=pow(b,2)-4*a*c;

    printf("delta is %f\n",delta);

    if(delta<0) printf("\nThe equation has no solution in real numbers!!\n");

    else {

    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);

    printf("The solution is x1= %f and x2= %f\n\n",x1,x2);


    }

    return 0;
}
