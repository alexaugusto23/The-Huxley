// #Algarismo da casa das unidades
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a,b;


int main(){

scanf("%d",&a);

b = a%10;

if (a < 0){b += -0;printf("%d",b);}
else {b *= 1;printf("%d",b);}

printf("\n");
system("pause");

return 0 ;
}



