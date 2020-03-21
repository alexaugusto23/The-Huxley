//Areademultiplos

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float a;
float b;
float c;

double pi = 3.14159;
double triangulo;
double circulo;
double trapezio;
double quadrado;
double retangulo;

int main() {

scanf("%f %f %f",&a,&b,&c);

triangulo = (a*c)/2;
circulo = (c*c)*pi;
trapezio = ((a+b)*c)/2;
quadrado = b*b;
retangulo = a*b;


printf("TRIANGULO: %.3f\n",triangulo);
printf("CIRCULO: %.3f\n",circulo);
printf("TRAPEZIO: %.3f\n",trapezio);
printf("QUADRADO: %.3f\n",quadrado);
printf("RETANGULO: %.3f",retangulo);

printf("\n");
}





