nome = input ("Seu nome: ")
sobrenome = input ("Seu sobrenome: ")
idade = int (input("Qual sua idade: "))

print("Ola %s" % (nome + ' ' + sobrenome))

if idade < 18:
	print ("Nads de deadpool")
else:
	print ("Seja bem vindo a toca do coelho %s" % (idade))