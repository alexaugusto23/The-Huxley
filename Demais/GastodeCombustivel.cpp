//GastodeCombustivel

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

const float kmcarro = 12;
double calculo;
int horas;
int kmrodado;

using namespace std;

int main(){

cin>>horas>>kmrodado;

calculo = (kmrodado/kmcarro)*horas;

cout<<fixed<<setprecision(3)<<calculo<<endl;

system("pause");

}
