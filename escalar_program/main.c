#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    float a[3],b[3],product,c[3];

    printf("Enter the coordinates of the first vector, hit enter after each one.\n\n");
    for(i=0;i<3;i++)scanf("%f",&a[i]);
    for(i=0;i<3;i++)printf(" %.2f ",a[i]);



    printf("\nEnter the coordinates of the second vector, hit enter after each one.\n\n");
    for(i=0;i<3;i++)scanf("%f",&b[i]);
    for(i=0;i<3;i++)printf(" %.2f ",b[i]);

    product=a[0]*b[0]+a[1]*b[1]+a[2]*b[2];


    printf("\nThe scalar product of the vectors (%.2f,%.2f,%.2f) and (%.2f,%.2f,%.2f) is: %f \n\n",a[0],a[1],a[2],b[0],b[1],b[2],product);

    c[0]=a[1]*b[2]-a[2]*b[1];
    c[1]=a[2]*b[0]-a[0]*b[2];
    c[2]=a[0]*b[1]-a[1]*b[0];
	
    printf("\nThe vector product of the vectors (%.2f,%.2f,%.2f) and (%.2f,%.2f,%.2f) is: (%.2f,%.2f,%.2f) \n\n",a[0],a[1],a[2],b[0],b[1],b[2],c[0],c[1],c[2]);


    return 0;
}
