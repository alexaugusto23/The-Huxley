#include<iostream>
#include <iomanip>

double notaa;
double notab;
double media;


using namespace std;

int main(){
  cin>>notaa;
  cin>>setprecision(1);
  cin>>notab;
  cin>>setprecision(1);

  media = (notaa*3.5+notab*7.5)/11;

  cout<<"MEDIA = "<<fixed<<setprecision(5)<<media<<endl;
  return 0;

}
