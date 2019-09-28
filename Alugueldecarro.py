aluguel = float (30.00)
kmaluguel = float (0.01)
valoratual = float
desconto = float


diasutilizado = float (input())
kmsutilizados = float (input())


valoratual = (diasutilizado * aluguel) + (kmaluguel * kmsutilizados)
desconto = valoratual * (0.1)

print("%.2f"%(valoratual-desconto))

#Aluguel de carro
