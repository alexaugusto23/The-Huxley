// Comabem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float valorgasto;
float comissao;
float total;

int main() {

comissao = 10;
comissao = comissao/100;

scanf("%f",&valorgasto);

total = ((valorgasto*comissao) + valorgasto);

printf("%.2f",total);

printf("\n");
system("pause");

}
