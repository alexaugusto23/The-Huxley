#include <stdio.h>

int main(){

	int n1,n2,aux;

	scanf("%d %d",&n1,&n2);

	if(n1>n2){
		aux=n1;
		n1=n2;
		n2=aux;
	}

	printf("%d %d",n1,n2);

	return 0;
}
