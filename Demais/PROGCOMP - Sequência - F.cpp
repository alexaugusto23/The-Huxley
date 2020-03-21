//PROGCOMP - Sequência - F
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int base;
int altura;
int areat;

using namespace std;

int main() {

cin>>base;
cin>>altura;

areat = (base * altura)/2;


cout<<fixed<<setprecision(2)<<areat<<endl;

}
