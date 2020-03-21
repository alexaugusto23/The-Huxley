#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int numb;
int horas;
float sal;
float hxs;

int main (){

cin>>numb;
cin>>horas;
cin>>sal;

hxs = horas * sal;

cout<<"NUMBER = "<<numb<<endl;
cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<hxs<<endl;
}
