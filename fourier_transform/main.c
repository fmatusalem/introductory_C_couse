#include <math.h>
#include <stdio.h>

int main()
{
    FILE *input,*output;
    int i,j,k,N,P;
    char ch;


//openning file to read
input = fopen("sample.dat","r"); /* ASCII file to read */
if(!input)
{
printf( "Error openning sample.dat file\n");
exit(0);
}


//openning file to read
output = fopen("dft.dat","w"); /* ASCII file to write */
if(!output)
{
printf( "Error creating dft.dat file\n");
exit(0);
}


//find number of lines
N=0;
while ((ch = getc(input)) != EOF)
if(ch=='\n')N++;

printf("Number of sample points %d\n",N);

//put the file pointer at the beginning of the file again
rewind(input);

exit(0);

//number of Points in DFT
P=100;

float t[N];
double xn[N],Xkr[P],Xki[P],abs;   //Xkr = real part,   Xki=imaginary part

for(i=0;i<N;i++){
    fscanf(input,"%f",&t[i]);
    fscanf(input,"%lf",&xn[i]);}

//checking
for(i=0;i<N;i++){
    printf("%f ",t[i]);
    printf("%e\n",xn[i]);}


for(k=0;k<P;k++){
Xkr[k]=Xki[k]=0;

for(i=0;i<N;i++){
Xkr[k]=Xkr[k]+xn[i]*cos(2*M_PI*k*i/N);  //real part
Xki[k]=Xki[k]-xn[i]*sin(2*M_PI*k*i/N);   //imaginary part
}

printf("%e +i%e\n",Xkr[k],Xki[k]);
}

// calculate the frequency
float dt,freq;

dt=N/P;
freq=1/dt;

for(k=0;k<P;k++){

abs=sqrt(pow(Xkr[k],2)+pow(Xki[k],2));
fprintf(output,"%f %e\n",k*freq,abs);


}


        fclose(input);
        fclose(output);
    return 0;
}


//references
//https://pythonnumericalmethods.berkeley.edu/notebooks/chapter24.02-Discrete-Fourier-Transform.html
//https://www.geeksforgeeks.org/discrete-fourier-transform-and-its-inverse-using-c/
