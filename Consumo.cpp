// Consumo
#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>


float kml;
int x;
float y;

using namespace std;

int main() {


cin>>x>>y;

kml = x/y;

cout<<fixed<<setprecision(3)<<kml<<" km/l"<<endl;

}
