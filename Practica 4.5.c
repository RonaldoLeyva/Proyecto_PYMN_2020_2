#include <stdio.h>
#include <stdlib.h>

int main() {
	float peso,estatura,imc;
	printf("Ingrese el peso=");
	scanf ("%f",&peso);
	printf("Ingrese su estatura=");
	scanf ("%f",&estatura);
	imc=(peso)/(estatura*estatura);
	printf("Tu Indice de masa corporal es= :%.2f\n",imc);
	if(imc<=18.5)
	{
		printf("Peso Bajo");
	}
	else
	{
		if(imc<=29.9)
		{
			printf("Peso normal");
		}
		else
		{
			if(imc<=29.9)
			{
				printf("Sobrepeso");
			}
			else
			{
				if(imc<=34.5)
				{
					printf("Obesidad tipo 1");
				}
				else
				{
					if(imc<=39.9)
					{
						printf("Obesidad tipo 2");
					}
					else
					{
						printf("Hiper obesidad");
					}
				}
			}
		}
	}
	return 0;
}











