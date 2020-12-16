#include <stdio.h>
#include <stdlib.h>
//constantes//
#define PI 3.1416
#define R 1.3333
int main() {
	float radio,volumen;
	printf("Ingrese el radio del circulo= ");
	scanf ("%f",&radio);
	volumen=(R*PI)*(radio*radio*radio);
	printf("Tu Volumen es= :%f\n",volumen);
	return 0;
}
