#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <math.h>

void main()
{
setlocale(LC_ALL,"portuguese");

int x ;
int a ;

printf("Digite a raiz: ");
scanf("%d", &x);

sqrt(x);
printf("\nRaiz = %f\n",x);

printf("\nDigite a potencia: ");
scanf("%d", &a);
x = pow(a,2);
printf("\nPotencia de %d = %d\n",a,x);


system ("pause");	
}






