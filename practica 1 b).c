#include <stdio.h>
#include <stdlib.h>
//constantes//
#define G 9.8
int main() {
	float fuerza,masa;
	printf("Ingrese la masa= ");
	scanf ("%f",&masa);
	fuerza=(masa*G);
	printf("La fuerza ejercida es= :%f\n",fuerza);
	return 0;
}
