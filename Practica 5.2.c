#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main ()
{
	int a,j,i,y,x; 
	int arregloa[10];
	int arreglob[10];
	for(i=0 ; i<10; i++)
	{
	srand(time(NULL));
	x=rand();
	x=arregloa[i];
    printf("%d",arregloa[i]);
    printf(" ");
    }
    printf("\n");
    	for(j=0 ; j<10; j++)
	{
	srand(time(NULL));
	y=rand();
	y=arregloa[i];
    printf("%d",arreglob[j]);
    printf(" ");
    }
    return 0;
}
