''' crie um programa que receba como entrada um número natural e exiba os
cincos naturais posteriores a ele. Faça a validação da entrada, ou seja verifique
se o número dado é natural.'''

n = int (input ('n: '))
while n < 0 :
    print ('Dgite novamente')
    n = int (input ('n: '))

# n <- 10 | 11 12 13 14 15
cont = n+1
while cont <= n+5:
    print(cont)
    cont = cont +1

# n <- 10 | 11 12 13 14 15
cont = n-1
while cont <= n-5:
    print(cont)
    cont = cont -1


