// Fahrenheit para Celsius
#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float Fahrenheit,celsius;

using namespace std;

int main() {

cin>>Fahrenheit;

celsius = (Fahrenheit - 32)/1.8;

cout<<fixed<<setprecision(2)<<celsius<<endl;

system("pause");

}
