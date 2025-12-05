#2. Exercício: O Leiloeiro Econômico 

import random
comparacao = troca = 0
L = []

def Leiloreiro(L, n):
    global comparacao, troca
    for i in range(n):
        menor = i
        for k in range(i+1, n):
            comparacao += 1
            if L[k] < L[menor]:
                troca += 1
                menor = k
        L[i], L[menor] = L[menor], L[i]
        print(f'{L[i]} - {L[menor]}')
    #print(f"{L} comparação={comparacao}, troca={troca}")

#for i in range(10):
#    Leiloreiro(L, i+1, random.randint(1,20))
for i in range(20000):
    L.append(random.randint(1, 1000000))

L = [29, 10, 14, 37, 14]
Leiloreiro(L, 5)
a = 1999900000
print(f"{L} comparação={comparacao}, troca={troca}")



# comparação=199990000, troca=169331, 19s

