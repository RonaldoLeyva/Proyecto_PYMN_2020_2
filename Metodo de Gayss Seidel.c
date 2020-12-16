#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}}; 
float b[3] = {27,-61.5,-21.5}; 
float E1,E2,E3,x11,x22,x33; 
float x1,x2,x3; 
int i,j;
int main()
{
for(j=0;j<5;j++)
{
    if(j==0){ 
        x1 = b[0]/A[0][0];
        x2 = ((-A[1][0]*x1)+b[1])/A[1][1];
        x3 = ((-A[2][0]*x1)-(A[2][1]*x2)+b[2])/A[2][2];
        printf("Metodo de Gaus Seidel\n" );
        printf("x1 La iteracion 1 es igual a %f\n",x1);
        printf("x2 La iteracion 1 es igual a %f\n",x2);
        printf("x3 La iteracion 1 es igual a %f\n",x3);
    }

    else {
        x11 = x1;
        x1 = ((-A[0][1]*x2)-(A[0][2]*x3)+b[0])/A[0][0];
        E1=fabs((x1-x11)/(x1))*100;
        x22 = x2;
        x2 = ((-A[1][0]*x1)-(A[1][2]*x3)+b[1])/A[1][1];
        E2=fabs((x2-x22)/(x2))*100;
        x33 = x3;
        x3 = ((-A[2][0]*x1)-(A[2][1]*x2)+b[2])/A[2][2];
        E3=fabs((x3-x33)/(x3))*100;
        printf("x1 La iteracion %d es igual a %f, Con un error del %f %%\n",j+1,x1,E1);
        printf("x2 La iteracion %d es igual a %f, Con un error del %f %%\n",j+1,x2,E2);
        printf("x3 La iteracion %d es igual a %f, Con un error del %f %%\n",j+1,x3,E3);
        }
    }
}
