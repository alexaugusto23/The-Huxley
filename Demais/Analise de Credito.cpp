//Analise de Credito
#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float salario;
float comprometimento;

float parcela;
float percentual;

using namespace std;

int main(){

cin>>salario;
cin>>comprometimento;

percentual = salario *0.30;
parcela = percentual-comprometimento;

if (comprometimento > percentual){parcela = parcela - parcela;}
else {parcela;}

cout<<fixed<<setprecision(2)<<parcela<<endl;

return 0 ;
}















