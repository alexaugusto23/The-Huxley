peson1 = (0)  
peson2 = (0)
peson3 = (0)
soma = int
media =float

n1 = float (input())
n2 = float (input())
n3 = float (input())

media = (n1+n2+n3)/3

if n1 >= media or n2 >= media or n3 >= media:
    peson1 = 1 

if n2 >= media:
    peson2 = 1    

if n3 >= media:
    peson3 = 1
    
soma =peson1+peson2+peson3

print(soma)

