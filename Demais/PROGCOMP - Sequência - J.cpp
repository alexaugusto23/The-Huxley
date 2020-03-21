#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float nota1;
float nota2;
int pesodois = 2;
int pesotres = 3;
double notafinal;

using namespace std;

int main() {

    cin>>nota1;
    cin>>nota2;

    notafinal = ((nota1*pesodois)+ (nota2*pesotres)) / (pesodois+pesotres);

    cout<<fixed<<setprecision(2)<<notafinal<<endl;


}
