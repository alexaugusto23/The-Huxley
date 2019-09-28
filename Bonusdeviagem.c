#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a;

int main(){

scanf("%d",&a);

if (a < 2000.00)
    printf("ARGENTINA");
if (a > 2000.00 && a < 3000.00)
    printf("ESPANHA");
if (a > 3000.00)
    printf("ALEMANHA");

printf("\n");

return 0 ;
}
