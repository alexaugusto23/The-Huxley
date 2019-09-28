//Calculo do IMC

#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float massa;
float altura;
float imc;

using namespace std;

int main() {


cin>>massa>>altura;

altura = (altura * altura);
imc = (massa/altura);

cout<<fixed<<setprecision(2)<<imc<<endl;

}
