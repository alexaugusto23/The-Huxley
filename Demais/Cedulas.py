#Cédulas
cem = int 
cinquenta= int 
vinte= int 
dez= int
cinco= int
dois= int
um= int
somaa=int
somab=int
somac=int

a = int (input())
'''
if a > 1 and a < 10:
    soma = (a//1)*1
if a >= 10 and a < 100:
    soma = (a//1)*10
if a >= 10 and a < 100:
    soma = (a//1)*100
'''    

somaa = a//100
print(somaa)

somab = (a-(somaa*100))//10
print(somab)

somac = (a-(somab*10))//10
print(somac)



'''
print(a)
print(cem,"nota(s) de R$ 100,00")
print(cinquenta,"nota(s) de R$ 50,00")
print(vinte,"nota(s) de R$ 20,00")
print(dez,"nota(s) de R$ 10,00")
print(cinco,"nota(s) de R$ 5,00")
print(dois,"nota(s) de R$ 2,00")
print(um,"nota(s) de R$ 1,00")
'''

