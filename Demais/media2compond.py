'''#include <stdio.h>
#include <math.h>

double notaa;
double notab;
double media;

int main() {

 scanf("%lf\n", &notaa);
 scanf("%lf", &notab);

 media = (notaa*3.5+notab*7.5)/11;

 printf("MEDIA = %.5lf\n",media);

return 0;
}
'''

media = float
notaa = float (input())
notab = float (input())

media = (notaa*3.5+notab*7.5)/11

print("MEDIA = {:.5f}".format(media))
