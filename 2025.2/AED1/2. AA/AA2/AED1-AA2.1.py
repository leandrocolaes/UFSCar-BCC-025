import random

copos = []
for  a in range(20000):
    copos.append(random.randint(0, 20))

def BubbleSort(L, n):
    comparacoes = trocas = 0
    for i in range(n-1, 0, -1):
        for j in range(0, i):
            comparacoes += 1
            if L[j] > L[j+1]:
                L[j], L[j+1] = L[j+1], L[j]
                trocas += 1
    print(f"{L} comparações = {comparacoes}, trocas = {trocas}", )



BubbleSort(copos, 20000)

#demorou 30 segundos
