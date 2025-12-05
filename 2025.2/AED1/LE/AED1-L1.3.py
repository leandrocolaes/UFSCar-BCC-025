matriz = []
result = ''
caminho = []
#coleta de dados

def caminhoPossivel (resultado):
    caminho = []
    if (len(resultado) == 1) and resultado[0] != 0:
        return None
    for i in resultado:
        if (i == 0):
            return
        else:
            if (type(i) == type(0)):
                return None

            caminho += [i[0], caminhoPossivel(i)]
    return caminho


k = int(input("Informe a ordem da matriz: "))
print("Digite a matriz: ")

for n in range(0, k):
    linha = []
    for m in range (0, k):
        linha += [int(input())]
    matriz += [linha]

def ex3 (posicao_n, posicao_m, matriz, result):

    if (posicao_n > (len(matriz[0])-1)) or (posicao_m > (len(matriz[0])-1)):
        return 5
    if matriz[posicao_n][posicao_m] ==  0:
        return 5
    if ((posicao_n*posicao_m) == (len(matriz[0])-1)*(len(matriz[0])-1)):
        return 0

    result =  [1, ex3(posicao_n+1, posicao_m, matriz, result)], [2 ,ex3(posicao_n+1, posicao_m+1, matriz, result)], [3 , ex3(posicao_n, posicao_m+1, matriz, result)]
    return caminhoPossivel(result)



print(ex3(0,0, matriz, []))
