import random

L = []

def Bibliotecario(L, n):
    comparacao = movimentacao = 0
    for i in range(1, n):
        k = i
        comparacao += 1 
        while k > 0 and L[k] < L[k-1]:
            if k != i:
                comparacao += 1
            L[k], L[k-1] = L[k-1], L[k]
            k = k - 1
            movimentacao += 1
    print(f'{L}, comparações={comparacao}, movimentação={movimentacao}')

for i in range(20000):
    L.append(i)
random.shuffle(L)
Bibliotecario(L, 20000)

#teste: comparações=99791513, movimentação=99791507 duração = 22 segundos
