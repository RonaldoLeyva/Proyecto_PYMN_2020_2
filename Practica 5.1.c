#include<stdio.h>
int main ()
{
int i,j,a;
int arregloa[10];
int arreglob[10];
    for(i=0 ; i<10 ; i++)
  { 
     printf("Ingrese los datos del primer arreglo espacio %d ",i+1);
     scanf("%d",&arregloa[i]);
  }
     for(j=0 ; j<10 ; j++)
  { 
     printf("Ingrese los datos del segundo arreglo espacio %d ",j+1);
     scanf("%d",&arreglob[j]);
  }
  printf("Deseas imprimir los datos\n 1-SI 2-NO? ");
  scanf("%d", &a);
  if (a==1)
  {
  	for(i=0 ; i<10 ; i++)
  { 
     printf("%d",arregloa[i]);
     printf(" ");
  }
  printf("\n");
  	for(j=0 ; j<10 ; j++)
  { 
     printf("%d",arreglob[j]);
      printf(" ");
  }
  }
  return 0;
}
