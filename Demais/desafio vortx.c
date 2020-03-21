// Desafio VxTel - Vortx

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int origem;
int destino;
int tempo;
int tempo2;
int plano;
float pmin;
float pmin2;
float SemFale;
float ComFale;


int main(){

printf("Digite a Origem: ");
scanf("%d",&origem);
printf("Digite o Destino: ");
scanf("%d",&destino);
printf("Digite o Tempo: ");
scanf("%d",&tempo);
printf("Digite 1 para Plano Falemais 30\n");
printf("Digite 2 para Plano Falemais 60\n");
printf("Digite 3 para Plano Falemais 120\n");
printf("Digite o Plano Falemais: ");
scanf("%d",&plano);


tempo2 = tempo;

if (origem == 11 && destino == 16){pmin = 1.90;}
else if (origem == 16 && destino == 11){pmin = 2.90;}
else if (origem == 11 && destino == 17){pmin = 1.70;}
else if (origem == 17 && destino == 11){pmin = 2.70;}
else if (origem == 11 && destino == 18){pmin = 0.90;}
else if (origem == 18 && destino == 11){pmin = 1.90;}
else {pmin = 0.0;}

pmin2 = pmin;

system("cls");

printf("Origem: ");
printf("%d\n",origem);
printf("Destino: ");
printf("%d\n",destino);
printf("Tempo: ");
printf("%d\n",tempo2);
printf("Plano: ");
printf("%d\n",plano);

if (plano == 1 && tempo > 30){tempo = tempo-(30);}
else if (plano == 2 && tempo > 60){tempo = tempo- (60);}
else if (plano == 3 && tempo > 120){tempo = tempo -(120);}
else {tempo = 0;}

ComFale = tempo * (pmin=pmin*0.1+pmin);
printf("ComFaleMais:");
printf("$ %.2f\n",ComFale);

SemFale = tempo2 * pmin2;
printf("SemFaleMais: ");
printf("$ %.2f\n",SemFale);


system("pause");


}

