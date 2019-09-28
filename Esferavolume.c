// Esferavolume

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


double pi = 3.14159;
float raio;
double volume;

int main() {

scanf("%f",&raio);
volume = (4/3.0)*pi*(raio*raio*raio);
printf("VOLUME = %.3lf",volume);
printf("\n");
}
