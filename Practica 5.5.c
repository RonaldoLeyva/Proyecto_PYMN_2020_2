#include<stdio.h>
int main ()
{
	int A[4][4];
	int i,j,b,l;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Ingrese un dato ");
			scanf("%d", &A[i][j]);
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
 
