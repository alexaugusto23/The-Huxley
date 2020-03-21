#include<iostream>
#include <iomanip>
using namespace std;
double raio,area,pi =3.14159;
int main(){
  cin>>raio;
  cin>>setprecision(2);
  area = pi*(raio*raio);
  cout<<"A="<<fixed<<setprecision(4)<<area<<endl;
  return 0;

}


