#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,n,sum;

    printf("How is the size of the array do you want?\n");
    scanf("%d",&n);

    int x[n],y[n],a;

    printf("Enter the %d intergers numbers, hit enter after each one\n\n",n);

    for(i=0;i<n;i++)scanf("%d",&x[i]);

    //scanf("%d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4]);

    printf("\n\n");

    for(i=0;i<n;i++)printf("%d ",x[i]);
    //for(i=n-1;i>=0;i--)printf("%d ",x[i]);

    sum=0;

    for(i=0;i<n;i++)sum=sum+x[i];


    printf("\n\nThe sum of the numbers is: %d\n",sum);

    printf("\n\nThe average of the numbers is: %d\n",sum/n);


    y[0]=x[0];
    for(i=0;i<n;i++)if(y[0]>x[i])y[0]=x[i];

    printf("\nThe lower number is %d\n\n",y[0]);

for(j=0;j<n-1;j++){

    for(i=0;i<n-1;i++)if(x[i]>x[i+1]){a=x[i]; x[i]=x[i+1]; x[i+1]=a;}

    for(i=0;i<n;i++)printf("%d ",x[i]);
    printf("\n\n");
}

    return 0;
}
