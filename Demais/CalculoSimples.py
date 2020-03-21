# CalculoSimples

soma = float

codum,numpecaum,valorpecaum, = input().split(" ")
codum = int (codum)
numpecaum = int (numpecaum)
valorpecaum = float (valorpecaum)

coddois,numpecadois,valorpecadois, = input().split(" ")
coddois = int (coddois)
numpecadois = int (numpecadois)
valorpecadois = float (valorpecadois)

soma = (numpecaum*valorpecaum)+(numpecadois*valorpecadois)

print("VALOR A PAGAR: R$ %.2f"%soma)




