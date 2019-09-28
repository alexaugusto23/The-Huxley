#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int aluguel = 30.00;
int kmaluguel = 0.01;
double valoratual;
double desconto;
double diasutilizado;
double kmsutilizados;

using namespace std;


int main() {

cin>>diasutilizado;
cin>>kmsutilizados;

valoratual = (diasutilizado * aluguel) + (kmaluguel * kmsutilizados);
desconto = valoratual * (0.1);

cout<<fixed<<setprecision(2)<<valoratual-desconto<<endl;

}
