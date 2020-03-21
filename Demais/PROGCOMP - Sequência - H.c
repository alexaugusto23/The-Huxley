// PROGCOMP - Sequencia - H
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int dist_percorridakm;
float quant_litrogastkm;
float litrosdecomb_gastos;

scanf("%d",&dist_percorridakm);
scanf("%f",&quant_litrogastkm);

litrosdecomb_gastos = dist_percorridakm*quant_litrogastkm;

printf("%.2f",litrosdecomb_gastos);

}
