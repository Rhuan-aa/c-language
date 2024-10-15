matriz = []


for i in range(3):
    linha=[]
    for j in range(3):
        x = mat[i][j] + matpc[i][j]
        linha.append(x)
    matriz.append(linha)