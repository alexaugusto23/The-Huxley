#Areademultiplos

pi = float (3.14159)
triangulo = float
circulo = float
trapezio = float
quadrado = float
retangulo = float

a,b,c = input().split(" ")
a = float (a)
b = float (b)
c = float (c)

triangulo = (a*c)/2
circulo = (c*c)*pi
trapezio = ((a+b)*c)/2
quadrado = b*b
retangulo = a*b

print("TRIANGULO: %.3f"%triangulo)
print("CIRCULO: %.3f"%circulo)
print("TRAPEZIO: %.3f"%trapezio)
print("QUADRADO: %.3f"%quadrado)
print("RETANGULO: %.3f"%retangulo)






