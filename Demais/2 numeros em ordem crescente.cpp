# include <iostream>
# include <iomanip>

using namespace std;

int main(){

	int n1,n2,aux;

	cin>>n1>>n2;

	if(n1>n2){
		aux=n1;
		n1=n2;
		n2=aux;
	}

	cout<<n1<<" "<<n2<<endl;

	return 0;
}
