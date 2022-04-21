#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* function declaration */
float area(float r);

int main()
{

float r,A,C;

printf("Input the radius of the circle: ");
scanf("%f",&r);

printf("r = %f\n",r);





C=2*M_PI*r;

//printf("pi is: %f\n\n",M_PI);
printf("The perimeter of the circle is: %f\n\n",C);



A=M_PI*pow(r,2);
//printf("The area of the circle is: %f\n\n",A);

//printf("r = %f\n",r);

//A=area(r);
printf("The area of the circle is: %f\n\n",A);





    return 0;
}



