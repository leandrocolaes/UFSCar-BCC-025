array = []

n = int(input("Número de participantes: "))

for o in range(0, n):
    array.append(int(input("Informe o número do participante: ")))
k = int(input("Número sorteado: "))

def funcao(array, n, k, i):
    if (n == 1):
        print(array[0])
    else:
        if ((i + k) > (len(array)-1)):
            i = i + k - len(array) -1
            array.pop(i)
        else:
            array.pop(i+k)
        funcao(array, n-1, k, i+k)

funcao(array, n, k, 0)
