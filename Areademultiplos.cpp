//Areademultiplos

#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float a;
float b;
float c;

double pi = 3.14159;
double triangulo;
double circulo;
double trapezio;
double quadrado;
double retangulo;

using namespace std;

int main() {

cin>>a>>b>>c;

triangulo = (a*c)/2;
circulo = (c*c)*pi;
trapezio = ((a+b)*c)/2;
quadrado = b*b;
retangulo = a*b;


cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<triangulo<<endl;
cout<<fixed<<setprecision(3)<<"CIRCULO: "<<circulo<<endl;
cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<trapezio<<endl;
cout<<fixed<<setprecision(3)<<"QUADRADO: "<<quadrado<<endl;
cout<<fixed<<setprecision(3)<<"RETANGULO: "<<retangulo<<endl;

}





