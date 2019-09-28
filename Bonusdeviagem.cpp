#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float a;

using namespace std;

int main(){

cin>>a;
a = (a*0.75);

if (a < 2000.00)
    cout<<"ARGENTINA";
if (a >= 2000.00 && a <= 3000.00)
    cout<<"ESPANHA";
if (a > 3000.00)
    cout<<"ALEMANHA"<<endl;

return 0 ;
}
