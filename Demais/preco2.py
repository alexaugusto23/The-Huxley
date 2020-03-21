preco = float (input('Preço: '))
quantidade = int (input('Quantidade: '))
total = preco * quantidade
if total > 200.00 and quantidade > 5:
    total = total * 0.9
print(total)    
