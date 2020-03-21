# AC5 Ex 2

RA =int(input('Digite seu RA: '))
x = 0

while RA > 0:
    x=x+RA%10
    RA=RA/10
print(x)    
