#include <stdio.h>
#include <stdlib.h>

int main() {
	int op;
	float casado,soltero,i1,i2,i3,i4;
	printf("Seleccione su estado civil\n");
	printf("1 = soltero\n");
	printf("2 = casado\n");
	scanf("%d",&op);
	switch (op)
	{
		case 1: printf("Ingrese su salario=");
		        scanf("%f",&soltero);
		        if(soltero<32000)
		        {
		        	i1=((soltero*.10));
		        	printf("Sus impuestos a pagar con 10 porciento de tasa son=%.2f",i1);
				}
				else
				{
					i2=((soltero*.25));
		        	printf("Sus impuestos a pagar con 25 porciento de tasa son=%.2f",i2);
				}
				break;
				
		case 2: printf("Ingrese su salario=");
		        scanf("%f",&casado);
		        if(casado<64000)
		        {
		        	i3=((casado*.10));
		        	printf("Sus impuestos a pagar con 10% de tasa son=%.2f",i3);
				}
				else
				{
					i4=((casado*.25));
		        	printf("Sus impuestos a pagar con 25% de tasa son=%.2f",i4);
				}
				break;
	
	}
	return 0;
}
