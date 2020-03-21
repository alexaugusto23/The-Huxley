#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Aumento dos Trabalhadores

float sal_atual;
float somaa;
float somab;
float somac;

int main(){

scanf("%f",&sal_atual);

somaa = (sal_atual*1.10);
somab = (sal_atual*1.07);
somac = (sal_atual*1.05);

if (sal_atual > 500)
    {printf("%.2f",somaa);}
else if (sal_atual > 300 && sal_atual < 500)
    {printf("%.2f",somab);}
else
    {printf("%.2f",somac);}

return 0 ;
}









