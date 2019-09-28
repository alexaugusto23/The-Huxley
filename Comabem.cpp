// Comabem

#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float valorgasto;
float comissao;
float total;

using namespace std;

int main() {

comissao = 10;
comissao = comissao/100;

cin>>valorgasto;

total = ((valorgasto*comissao) + valorgasto);

cout<<fixed<<setprecision(2)<<total<<endl;

system("pause");

}
