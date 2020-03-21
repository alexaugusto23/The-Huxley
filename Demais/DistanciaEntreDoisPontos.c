// DistanciaEntreDoisPontos

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float distancia;
float distanciaraiz;
double xum;
double xdois;
double yum;
double ydois;

int main() {

scanf("%lf%lf\n",&xum,&yum);
scanf("%lf%lf",&xdois,&ydois);

distancia = ((xdois-xum)*(xdois-xum))+((ydois-yum)*(ydois-yum));
distanciaraiz = sqrt(distancia);

printf("%.4f",distanciaraiz);
printf("\n");
system("pause");

}






