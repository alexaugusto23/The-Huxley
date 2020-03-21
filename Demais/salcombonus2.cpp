#include <iostream>
#include <math.h>
#include <iomanip>

float salbase;
float porc = 0.25;
float aumento;
float salarionovo;

using namespace std;

int main() {

    cin>>salbase;

    aumento = salbase * porc;
    salarionovo = salbase + aumento;

    cout<<fixed;
    cout<<setprecision(2)<<salarionovo<<endl;


	return 0;
}
