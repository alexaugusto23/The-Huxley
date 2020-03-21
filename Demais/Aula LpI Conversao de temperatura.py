'''entrada = (input())

if entrada =='C' or entrada =='c':
    c = float (input())
    conv1 = (c-32)*5/9
    print (conv1)
else:
   

    if entrada =='F' or entrada =='f':
        f = float (input())
        conv2 = (f*9/5)+32
        print (conv2)

    else:
        print('O valor é invalido')

'''
'''
entrada = (input())

if entrada =='C' or entrada =='c':
    c = float (input())
    conv1 = (c-32)*5/9
    print (conv1)
elif entrada =='F' or entrada =='f':
        f = float (input())
        conv2 = (f*9/5)+32
        print (conv2)

else:
    print('O valor é invalido')
'''      
'''
temp = float (input('temperatura: '))    
conv = input('Opção de conversão ')

if conv == 'F' or conv == 'f':
    x = (temp*9/5)+32
    print (x)
else:

    if conv == 'C' or conv == 'c':
        x = (temp-32) * 5/9
        print (x)
    else:
        print('O valor é invalido')
'''        

def temperatura ():

    temp = float (input('temperatura: '))    
    conv = input('Opção de conversão ')

    if conv == 'F' or conv == 'f':
        x = (temp*9/5)+32
        print (x)
    if conv == 'C' or conv == 'c':
        x = (temp-32) * 5/9
        print (x)

    if conv != 'F' and conv != 'f' and conv != 'C' and conv != 'c':
        print('O valor é invalido')

    return
