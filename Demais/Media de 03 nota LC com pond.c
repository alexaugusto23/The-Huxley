#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float a,b,c;
float media;

int main() {

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    media = (a*2+b*3+c*5)/10;

    printf("MEDIA = %.1f\n",media);

}

