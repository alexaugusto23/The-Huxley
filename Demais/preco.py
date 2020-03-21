preco = float (input('Preço: '))
quantidade = int (input('Quantidade: '))
total = preco * quantidade
if total > 150.00:
    total = total * 0.9
print(total)    
