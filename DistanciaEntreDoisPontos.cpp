// DistanciaEntreDoisPontos
#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float distancia;
float distanciaraiz;
double xum;
double xdois;
double yum;
double ydois;

using namespace std;

int main() {

cin>>xum>>yum;
cin>>xdois>>ydois;

distancia = ((xdois-xum)*(xdois-xum))+((ydois-yum)*(ydois-yum));
distanciaraiz = sqrt(distancia);

cout<<fixed<<setprecision(4)<<distanciaraiz<<endl;

system("pause");

}






