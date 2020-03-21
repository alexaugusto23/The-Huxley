#include<iostream>
#include <iomanip>

float a;
float b;
float c;

double media;


using namespace std();

int main(){
 cin>>a;
 cin>>setprecision(1);
 cin>>b;
 cin>>setprecision(1);
 cin>>c;
 cin>>setprecision(1);

media = (a*2+b*3+c*5)/10;

 cout<<"MEDIA = "<<fixed<<setprecision(1)<<media<<endl;
  return 0;

}
