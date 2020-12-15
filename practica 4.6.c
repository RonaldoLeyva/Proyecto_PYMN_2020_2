#include<stdio.h>
#include<math.h>
#include<string.h>
main ()
{

    float total, p, s, c, l, cp, cs, cc, cl;

    printf ("Dame la cantidad que compro en perfumeria ");
    scanf("%f", & p);

    cp=p-(p*.20);

    printf ("\nDame la cantidad que compro en salchichoneria ");
    scanf("%f", & s);

    cs=s-(s*.40);

    printf ("\nDame la cantidad que compro en carniceria ");
    scanf("%f", & c);

    cc=c-(c*.20);

    printf ("\nDame la cantidad que compro en limpieza ");
    scanf("%f", & l);

    cl=l-(l*.35);

    total=cp+cs+cc+cl;

    printf("\n\n\nEl descuento de perfumeria es de $%f\n",cp);

    printf("\nEl descuento de salchichoneria es de $%f\n",cs);

    printf("\nEl descuento de carniceria es de $%f\n",cc);

    printf("\nEl descuento de limpieza es de $%f\n",cl);

    printf("\n\n\nEl total a pagar es de $%f", total);


}
