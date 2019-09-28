#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int pa = 0;
int pb = 0;
int pc = 0;
int soma;
float m;
float na;
float nb;
float nc;

int main() {

scanf("%f\n",&na);
scanf("%f\n",&nb);
scanf("%f",&nc);

m = (na+nb+nc)/3;

if (na > m){pa = 1;}

if (nb > m){pb = 1;}

if (nc > m){pc = 1;}

soma = (pa+pb+pc);

printf("%d",soma);
printf("\n");
system("pause");

return;
}
