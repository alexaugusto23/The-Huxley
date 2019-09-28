// CalculoSimples

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int codum;
int numpecaum;
float valorpecaum;

int coddois;
int numpecadois;
float valorpecadois;

float soma;

int main() {

scanf("%d %d %f",&codum,&numpecaum,&valorpecaum);
scanf("%d %d %f",&coddois,&numpecadois,&valorpecadois);

soma = (numpecaum*valorpecaum)+(numpecadois*valorpecadois);

printf("VALOR A PAGAR: R$ %.2f",soma);
printf("\n");

}
