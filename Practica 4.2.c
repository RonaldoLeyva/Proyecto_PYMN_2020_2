#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Ingrese un numero=");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("tu numero es par=%d",n);
	}
	else
	{
		printf("tu numero es impar=%d",n);
	}
	return 0;
}
