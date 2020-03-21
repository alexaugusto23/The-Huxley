//GastodeCombustivel

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float kmcarro = 12;
double calculo;
int horas;
int kmrodado;

int main(){

scanf("%d\n%d",&horas,&kmrodado);

calculo = (kmrodado/kmcarro)*horas;

printf("%.3lf",calculo);
printf("\n");
system("pause");

}
