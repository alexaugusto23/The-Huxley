// CalculoSimples

#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int codum;
int numpecaum;
float valorpecaum;

int coddois;
int numpecadois;
float valorpecadois;

float soma;

using namespace std;

int main() {

cin>>codum>>numpecaum>>valorpecaum;
cin>>coddois>>numpecadois>>valorpecadois;

soma = (numpecaum*valorpecaum)+(numpecadois*valorpecadois);

cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<soma<<endl;


}
