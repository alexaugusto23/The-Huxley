//O maior

#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float a;
float b;
float c;

int MaiorAB ;
int maior;

using namespace std;

int main() {

cin>>a>>b>>c;

MaiorAB = (a+b+abs(a-b))/2;
maior = (MaiorAB+c+abs(MaiorAB-c))/2;

cout<<maior<<" eh o maior"<<endl;

}








