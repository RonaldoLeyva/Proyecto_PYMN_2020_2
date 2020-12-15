#include <stdio.h>
#include <stdlib.h>

int main() {
	int edad;
	printf("Dime tu Edad=");
	scanf("%d",&edad);
	if(edad>=18)
	{
		printf("Eres mayor de edad");
	}
	else
	{
		printf("Eres menor de edad");
	}
	return 0;
}
