#include <stdio.h>
#include <stdlib.h>

int main()
{

float i,j;  //declare two variables of type float, decimal point

printf("Input the first number: ");
scanf("%f",&i);

printf("Input the second number: ");
scanf("%f",&j);

printf("i =  %5.3f\nj = %5.3f\n\n",i,j);



printf("Sum of the above two numbers = %4.2f\n",i+j);

system("pause");  //to avoid the program to close instantly
return 0;
}
