'''#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float nota1,nota2,nota3;
float media;

int main() {

    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;
    
    if (media >= 7){printf("aprovado");}
    else if (media  >=3 && media < 7){printf("prova final");}
    else if(media < 3) {printf("reprovado");}
}
'''

nota1 = float (input ())
nota2 = float (input ())
nota3 = float (input ())

media = (float(nota1)+float(nota2)+float(nota3))/3
print (media)

if media >= 7:
      print("aprovado")

if media >=3 and media < 7:
      print("prova final")

if media < 3:
      print("reprovado")
      
      
