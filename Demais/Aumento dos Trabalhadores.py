'''
Aumento dos Trabalhadores
300 > 7%
500 > 10%
5%

'''

sal_atual = float (input ())
somaa = float 
somab = float  
somac = float
somaa = sal_atual*1.10
somab = sal_atual*1.07
somac = sal_atual*1.05


if sal_atual > 500:
    print('%.2f'%somaa)
elif sal_atual > 300 and sal_atual < 500 :
    print('%.2f'%somab)
else:
    print('%.2f'%somac)     
    
    
