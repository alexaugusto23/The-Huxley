'''
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double r ,   area,   pi = 3.14159  ;

void main()
{

scanf("%lf", &r);

area = pi*(r*r);

printf("A=%.4lf\n", area);

'''


raio = float (input())
pi=3.14159
area = pi*(raio*raio)
print('A={:.4f}'.format(area))

