#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int pa = 0;
int pb = 0;
int pc = 0;
int soma;
float m;
float na;
float nb;
float nc;

using namespace std;

int main() {

cin>>na;
cin>>nb;
cin>>nc;

m = (na+nb+nc)/3;

if (na > m){pa = 1;}

if (nb > m){pb = 1;}

if (nc > m){pc = 1;}

soma = (pa+pb+pc);

cout<<soma<<endl;

system("pause");

}
