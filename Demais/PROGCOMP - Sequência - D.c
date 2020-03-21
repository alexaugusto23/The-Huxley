// PROGCOMP - Sequência - D

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float salario_base;
double salario_novo;
float gratificacao = 0.05;
float impostos = 0.07;


int main() {

scanf("%f",&salario_base);

gratificacao = gratificacao*salario_base;
impostos = impostos*salario_base;

salario_novo = salario_base+gratificacao-impostos;

printf("novo: %.2lf\n",salario_novo);
printf("gratificacao: %.2f\n",gratificacao);
printf("imposto: %.2f\n",impostos);

}
