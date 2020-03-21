#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Aumento dos Trabalhadores

float sal_atual;
float somaa;
float somab;
float somac;

using namespace std;

int main(){

cin>>sal_atual;

somaa = (sal_atual*1.10);
somab = (sal_atual*1.07);
somac = (sal_atual*1.05);

if (sal_atual > 500)
    {cout<<fixed<<setprecision(2)<<somaa<<endl;}
else if (sal_atual > 300 && sal_atual < 500)
    {cout<<fixed<<setprecision(2)<<somab<<endl;}
else
    {cout<<fixed<<setprecision(2)<<somac<<endl;}

return 0 ;
}








