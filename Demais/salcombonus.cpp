#include <iostream>
#include <iomanip>
#include <string>

char nomevend [60];
double salfixo;
double totalvendas;
double totalreceber;
double comissao;

using namespace std;

int main() {

 cin>>nomevend;
 cin>>salfixo>>setprecision(2);
 cin>>totalvendas>>setprecision(2);


 comissao = totalvendas*0.15;
 totalreceber = comissao + salfixo;

 cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<totalreceber<<endl;

}
