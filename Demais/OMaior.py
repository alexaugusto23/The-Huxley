# O Maior

MaiorAB = int
maior = int
a,b,c = input().split(" ")
a = int (a)
b = int (b)
c = int (c)

MaiorAB = (a+b+abs(a-b))/2
maior = (MaiorAB+c+abs(MaiorAB-c))/2

print("%d eh o maior"%maior)





