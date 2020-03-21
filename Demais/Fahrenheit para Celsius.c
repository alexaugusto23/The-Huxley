// Fahrenheit para Celsius
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float Fahrenheit,celsius;

int main() {

scanf("%f",&Fahrenheit);

celsius = (Fahrenheit - 32)/1.8;

printf("%.2f",celsius);
printf("\n");
system("pause");

}
