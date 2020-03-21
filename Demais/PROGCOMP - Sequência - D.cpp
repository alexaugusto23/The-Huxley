// PROGCOMP - Sequência - D

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float salario_base;
double salario_novo;
float gratificacao = 0.05;
float impostos = 0.07;

using namespace std;

int main() {

cin>>salario_base;

gratificacao = gratificacao*salario_base;
impostos = impostos*salario_base;

salario_novo = salario_base+gratificacao-impostos;

cout<<fixed<<setprecision(2)<<"novo: "<<salario_novo<<endl;
cout<<fixed<<setprecision(2)<<"gratificacao: "<<gratificacao<<endl;
cout<<fixed<<setprecision(2)<<"imposto: "<<impostos<<endl;

}
