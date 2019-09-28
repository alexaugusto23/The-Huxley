// Esferavolume

#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>


double pi = 3.14159;
float raio;
double volume;

using namespace std;

int main() {

cin>>raio;
volume = (4/3.0)*pi*(raio*raio*raio);
cout<<fixed<<setprecision(3)<<"VOLUME = "<<volume<<endl;

}
