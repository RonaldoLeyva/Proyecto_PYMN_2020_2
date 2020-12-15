#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main ()
{
	int A[4][4];
	int i,j,b,l,x;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			srand(time(NULL));
        	x=rand();
	        x=A[i][j];
		}
	}
	
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ", A[i][j]);
		
		}
			printf("\n");
	}
	
	return 0;
}
