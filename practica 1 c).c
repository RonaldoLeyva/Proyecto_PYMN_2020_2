#include <stdio.h>
#include <stdlib.h>

int main() {
	float peso,estatura,imc,edad;
	char nombre[30];
	printf("Nombre=");
	scanf("%s",&nombre);
	printf("Ingrese su edad=");
	scanf ("%f",&edad);
	printf("Ingrese el peso=");
	scanf ("%f",&peso);
	printf("Ingrese su estatura=");
	scanf ("%f",&estatura);
	imc=(peso)/(estatura*estatura);
	printf("Tu Nombre es=%s\n",nombre);
	printf ("la edad es= %.f\n",edad);
	printf ("El peso es= %.f\n",peso);
	printf("Tu Indice de masa corporal es= :%f\n",imc);
	return 0;
}
