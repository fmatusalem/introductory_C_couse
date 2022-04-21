#include <stdio.h>
#include <stdlib.h>

int main()
{

printf("a 1 2 3 4 5 6 7 8 9 10\n");

char str[200]="b 1 2 3 4 5 6 7 8 9 10";
printf("%s\n",str);

int i=1;

printf("c ");

while(i<11)
{
printf("%d ",i);
i++;
}

printf("\n");

i=1;
printf("d ");

do
{printf("%d ",i);
i++;}
while(i<11);




printf("\n");

printf("e ");
for(i=1;i<11;i++){
printf("%d ",i);


}

printf("\n");

    return 0;
}


//aayshams098@gmail.com
