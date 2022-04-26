#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    float a[3][3],det;

    printf("Enter the elements of the matrix, hit enter after each one.\n\n");
    for(i=0;i<3;i++){for(j=0;j<3;j++)scanf("%f",&a[i][j]);}


    for(i=0;i<3;i++){for(j=0;j<3;j++)printf("%0.2f ",a[i][j]); printf("\n");}

    det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);



    printf("\nThe determinand of the matrix is %f\n\n",det);
    return 0;
}
