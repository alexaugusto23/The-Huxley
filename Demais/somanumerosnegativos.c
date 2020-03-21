#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float a,b,c,d,e;
int soma;
int valor0,valor1,valor2,valor3,valor4;

int main() {

    scanf("%f",&a);
    if (a<0) {(valor0=1);}
    else{(valor0=0);}

    scanf("%f",&b);
    if (b<0) {(valor1=1);}
    else{(valor1=0);}

    scanf("%f",&c);
    if (c<0) {(valor2=1);}
    else{(valor2=0);}

    scanf("%f",&d);
    if (d<0) {(valor3=1);}
    else{(valor3=0);}

    scanf("%f",&e);
    if (d<0) {(valor4=1);}
    else{(valor4=0);}

    /*printf("%.2f\n",a);
    printf("%.2f\n",b);
    printf("%.2f\n",c);
    printf("%.2f\n",d);
    printf("%.2f\n",d);
    */

    soma = valor0+valor1+valor2+valor3+valor4;

    printf("Foram digitados %d numeros negativos",soma);


}
