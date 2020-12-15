#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
#include<conio.h>

float funcion2( float x);
float ep( float x, float y);




int main(){
	float x0= 3, x2, x1=-4, tolerancia=0.000001, error;
	int i=0;
	do{
	

x2 = x1 - ( (funcion2(x1)*(x0-x1)) / (funcion2(x0) - funcion2(x1)) );
error= ep(x1,x2);

x0=x1;
x1=x2;
i++;
printf (" iteracion%d %f \n",i,x2);
}while(error>tolerancia);

printf(" la raiz es %f",x2);
return 0;
	
}



float ep(float x, float y){
	
	return fabs((x-y)/x)*100;
}




float funcion2(float x){
	
	return pow(x,3)-2*x-5;
	
}
