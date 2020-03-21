#Algarismo da casa das unidades

a = int (input())

b = a%10

if (a < 0):
    b += -10
    print(b)
else:
    b *= 1
    print(b)
    

