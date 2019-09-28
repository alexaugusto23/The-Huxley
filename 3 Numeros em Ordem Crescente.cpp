#include <iostream>
#include <iomanip>
#include <math.h>
int n1,n2,n3,aux;
using namespace std;

int main(){


	cin>>n1>>n2>>n3;

	if(n1>n2){
		aux=n1;
		n1=n2;
		n2=aux;
	}
	if(n2>n3){
		aux=n2;
		n2=n3;
		n3=aux;
	}
	if(n1>n2){
		aux=n1;
		n1=n2;
		n2=aux;
	}

	cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n3<<endl;

	return 0;
}
