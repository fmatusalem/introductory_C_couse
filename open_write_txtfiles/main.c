#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *myfile, *input;
    int i,n;
    float a;
    char str[100],ch;



    myfile = fopen("myfile.txt","w"); /* ASCII file to written */
    if(!myfile)
    {
    printf( "Error creating myfile.txt file\n");
    exit(0);
    }

    fprintf(myfile,"This file is to write some numbers\n");

    printf("How is the size of the array do you want?\n");
    scanf("%d",&n);

    int m[n];

    printf("Enter the %d intergers numbers, hit enter after each one\n\n",n);

    for(i=0;i<n;i++)scanf("%d",&m[i]);

    for(i=0;i<n;i++)fprintf(myfile,"%d ",m[i]);

    fprintf(myfile,"\n\n");

    fclose(myfile);

    printf("\n\n");

    input = fopen("myfile.txt","r"); /* ASCII file to written */
    if(!input)
    {
    printf( "Error reading myfile.txt file\n");
    exit(0);
    }

    while ((ch = getc(input)) != EOF)    /*copia o arquivo 1 para outcar*/
       printf("%c",ch);



    fclose(input);
    return 0;
}
