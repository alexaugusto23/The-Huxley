#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int aluguel = 30.00;
float kmaluguel = 0.01;
double valoratual;
double desconto;
float diasutilizado;
float kmsutilizados;




int main() {


scanf("%f\n",&diasutilizado);
scanf("%f",&kmsutilizados);

valoratual = (diasutilizado * aluguel) + (kmaluguel * kmsutilizados);
desconto = valoratual * (0.1);

printf("%.2lf\n",valoratual-desconto);

	return 0;
}
