aux  = int

a,b = input().split(' ')

if (a>b):
    aux=a
    a=b
    b=aux

print(a,b)
