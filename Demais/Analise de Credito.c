//Analise de Credito
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float salario;
float comprometimento;

float parcela;
float percentual;

int main(){

scanf("%f",&salario);
percentual = salario *0.30;
scanf("%f",&comprometimento);

parcela = percentual-comprometimento;

if (comprometimento > percentual){parcela = parcela - parcela;}
else {parcela;}

printf("%.2f",parcela);
printf("\n");

return 0 ;
}















