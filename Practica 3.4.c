#include <stdio.h>
#include <stdlib.h>

int main() {
	{
	int a=-1,s=1,r=0,n,i;
	system ("cls");
	printf("Ingrese el numero de repeticiones del ciclo\n");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	r=a+s;
    	printf("%d,",r);
    	a=s;
    	s=r;
	}
	system("pause");

}
	return 0;
}
