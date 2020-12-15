#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
float funcion1(float x);
float derivada(float x);
float errorporcentual(float x, float y);

int main(){
	float a,b,xi,tolerancia,raiz=0, error,xi2,e;
	int i=0;
printf(" Ingresa el valor inicial\n");
	scanf("%f",&xi);
	printf(" Ingresa el margen de error o tolerancia de error ");
	scanf("%f",&tolerancia);
		
	do{
		a=funcion1(xi);
      	b=derivada(xi);
      		


	raiz=xi-(a/b);	
		e=errorporcentual(raiz, xi2);
		
		if(e>tolerancia){
			xi=raiz;
			xi2=xi;	
		}
		
			i++;
		
		printf(" iteracion %d  %f\n",i,raiz);
	}while(e>tolerancia);
	
	printf(" la raiz aproximada es %f",raiz);	
return 0;	
}



float funcion1(float x){
	
	return exp(-x)-x;
	
}


float derivada(float x){
	
	return -exp(-x)-1;

}
float errorporcentual ( float x, float y){
	
	
	return fabs ((x-y)/x)*100;
}

