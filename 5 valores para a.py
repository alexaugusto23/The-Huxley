'''
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float a,b,c,d,e;
int soma;
int valor0,valor1,valor2,valor3,valor4;

int main() {

    printf("Digite um valor:\n",a);
    scanf("%f",&a);
    
    printf("Digite um valor:\n",b);
    scanf("%f",&b);
    
    printf("Digite um valor:\n",c);
    scanf("%f",&c);
    
    printf("Digite um valor:\n",d);
    scanf("%f",&d);
    
    printf("Digite um valor:\n",e);
    scanf("%f",&e);


    if (a<0) {(valor0=1);}
    else{(valor0=0);}
            if (b<0) {(valor1=1);}
            else{(valor1=0);}
                    if (c<0) {(valor2=1);}
                    else{(valor2=0);}
                            if (d<0) {(valor3=1);}
                            else{(valor3=0);}
                                    if (e<0) {(valor4=1);}
                                    else{(valor4=0);}

    soma = valor0+valor1+valor2+valor3+valor4;
    
        
    printf("Foram digitados %d numeros negativos",soma);

}'''


valora = int
valorb = int
valorc = int
valord = int
valore = int
soma = int

a = float(input ("Digite um valor: \n"))
b = float(input ("Digite um valor: \n"))
c = float(input ("Digite um valor: \n"))
d = float(input ("Digite um valor: \n"))
e = float(input ("Digite um valor: \n"))



if a<0:
      valora =  1
else:
      valora =  0

if b<0:
      valorb =  1
else:
      valorb =  0

if c<0:
      valorc =  1 
else:
      valorc =  0
      
if d<0:
      valord =  1
else:
      valord =  0
      
if e<0:
      valore =  1
else:
      valore =  0
      

soma = int(valora) + int(valorb) + int(valorc) + int(valord) + int(valore)

print("Foram digitados " ,soma, "numeros negativos")

# print("Foram digitados %d" %soma, "numeros negativos")

