// PROGCOMP - Sequencia - H
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int dist_percorridakm;
float quant_litrogastkm;
float litrosdecomb_gastos;

using namespace std;

int main() {


cin>>dist_percorridakm;
cin>>quant_litrogastkm;


litrosdecomb_gastos = dist_percorridakm*quant_litrogastkm;

cout<<fixed<<setprecision(2)<<litrosdecomb_gastos<<endl;

}
