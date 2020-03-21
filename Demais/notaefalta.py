def situacao_aluno():
    nota = float(input('Nota: '))
    faltas = int (input('faltas: '))
    if nota >= 7 and faltas < 5:
        print('aprovado')
    else:
        print('reprovado')
    return        
    
   
