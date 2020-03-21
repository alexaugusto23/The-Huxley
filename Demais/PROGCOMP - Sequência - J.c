#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float nota1;
float nota2;
int pesodois = 2;
int pesotres = 3;
double notafinal;


int main() {

    scanf("%f\n",&nota1);
    scanf("%f",&nota2);

    notafinal = ((nota1*pesodois)+ (nota2*pesotres))/ (pesodois+pesotres);

    printf("%.2f\n",notafinal);


}
