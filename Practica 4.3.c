#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float a,b,c,d,x1,x2;
	printf("Aqui resolveremos su ecuacion cuadratica\n");
	
	printf("Ingrese el dato a=");
	scanf("%f",&a);
	
	printf("Ingrese el dato b=");
	scanf("%f",&b);
	
	printf("Ingrese el dato c=");
	scanf("%f",&c);
	
	if(a=0)
	{
		printf("Podemos continuar\n");
	}
	else
	{
		printf("No puede realizarse esta operacion\n");
	}
	{
		d=sqrt(b*b-(4*a*b));
	}
	if(d>0)
	{
		x1=((b*-1)+(d))/(2*a);
        x2=((b*-1)-(d))/(2*a);
        printf ("\t\El resultado de x1 es: %f",x1);
        printf ("\t\El resultado de x2 es: %f",x2);
	}
	else
	{
		printf("Error hay valores negaticos");
	}
	
	return 0;
}
