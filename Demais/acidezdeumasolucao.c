
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float ph;

int main() {

scanf("%f",&ph);

if (ph<7) {printf("Acida\n");}
else if (ph>7) {printf("Basica\n");}
else {printf("Neutra\n");}

	return 0;
}
