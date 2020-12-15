#include <stdlib.h>
#include <stdio.h>
int main(void){
const int dim=4;
int i,j,fil,col;
float MatA[dim][dim],MatB[dim][dim];
printf("Programa que suma matrices:\n\n");
printf("Introduzca el tamano de las matrices:\n\n Filas:"); scanf("%i", &fil);
printf(" Columnas: "); scanf("%i", &col);

printf("\n\nIntroduca los datos de la Matriz A:\n");
for(i=1;i<=fil;i++)
{
for(j=1;j<=col;j++)
{
printf("\nIntroduzca la coordenada (%i,%i): ",i,j); scanf("%f", &MatA[i][j]);
}
}

printf("\n\n\nIntroduca los datos de la Matriz B:\n");
for(i=1;i<=fil;i++)
{
for(j=1;j<=col;j++)
{
printf("\nIntroduzca la coordenada (%i,%i): ",i,j); scanf("%f", &MatB[i][j]);
}
}

for(i=1;i<=fil;i++)
{
for(j=1;j<=col;j++) MatA[i][j]=MatA[i][j]+MatB[i][j]; 
}

printf("\n\nLa matriz resultado es:\n\n");
for(i=1;i<=fil;i++)
{
for(j=1;j<=col;j++) printf("%10f",MatA[i][j]);
printf("\n");
}
return 0;
}
