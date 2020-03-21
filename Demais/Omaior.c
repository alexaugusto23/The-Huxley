//O maior

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float a;
float b;
float c;

int MaiorAB ;
int maior;

int main() {

scanf("%f %f %f",&a,&b,&c);

MaiorAB = (a+b+abs(a-b))/2;
maior = (MaiorAB+c+abs(MaiorAB-c))/2;

printf("%d eh o maior",maior);

printf("\n");
}








