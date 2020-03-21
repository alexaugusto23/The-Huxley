'''
Triangulo

     /\
 a  /  \  c
   /    \
  /______\
     b

a >= b+c or
b >= a+c or 
c >= a+b or

a < b+c and
b < a+c and
c < a+b

'''

#versão1
a = float(input())
b = float(input())
c = float(input())

if a < b+c and b < a+c and c < a+b:
    print('formam um triagulo')
else:
    print('não formam um triagulo')


#versão2
a = float(input())
b = float(input())
c = float(input())

if a >= b+c or b >= < a+c or c >= a+b:
    print('não formam um triagulo')
else:
    print('formam um triagulo')
