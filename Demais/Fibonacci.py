'''
Exemplo

0 - 1 - 2 - 3 - 5
    T1  T2  T3
'''
print('-'*30)
print('Sequência de Fibonacci')
print('-'*30)
n = int (input('Quantos termos você quer mostar:'))
ant = 0
atual = 1
print('~'*30)
print('{} {}'.format(ant,atual), end=' ')
cont = 3
while cont <= n:
    prox = ant + atual
    print('{}'.format(prox), end=' ')
    ant = atual
    atual = prox
    cont += 1
print('FIM')







'''
n = int (input())
ant = 0
atual = 1
prox = 0
i = 0
for i in range (0,n):
    atual = atual + i
    ant = atual
    prox = prox + atual
    print(ant,atual,prox, end = ' ')

'''     
    
