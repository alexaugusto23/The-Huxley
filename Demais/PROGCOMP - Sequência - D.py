#PROGCOMP - Sequência - D

salario_novo = float
gratificacao = float(0.05)
impostos = float(0.07)


salario_base = float (input())

gratificacao = gratificacao*salario_base
impostos = impostos*salario_base

salario_novo = (salario_base+gratificacao-impostos)

print("novo: %.2lf"%salario_novo)
print("gratificacao: %.2f"%gratificacao)
print("imposto: %.2f"%impostos)


