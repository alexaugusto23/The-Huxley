#include <stdio.h>
#include <math.h>
#include <stdlib.h>

char nomevend;
double salfixo;
double totalvendas;
double totalreceber;
double comissao;

int main() {

 scanf("%s\n",&nomevend);
 scanf("%lf\n",&salfixo);
 scanf("%lf",&totalvendas);

 comissao = totalvendas*0.15;
 totalreceber = comissao + salfixo;
 printf ("TOTAL = R$ %.2lf\n",totalreceber );

}
