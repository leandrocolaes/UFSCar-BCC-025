Algoritmo "Ex6-informa dia da semana"
// 
//  
// Descrição   : Informa o dia da semana de acordo com a data
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 4/9/2025
Var
A, B, C, D, EE, F, G, H, I, J, dia, mes, ano: inteiro


Inicio
escreva("Informe o ano: ")
leia (ano)
escreva("Informe o mês: ")
leia(mes)
escreva("Informe o dia: ")
leia(dia)

A <- int((12-mes)/10))
B <- ano - A
C <- mes + (12*A)
D <- int(B/100)
EE <- int(D/4)
F <- 2 -D + EE
G <- int(365.25*B)
H <- int(30.6001*(C+1))
I <- F+G+H+ dia+5
J <- i%7

escolha J
        caso 0
             escreva("sabado")
        caso 1
             escreva("domingo")
        caso 2
             escreva("segunda")
        caso 3
             escreva("terça")
        caso 4
             escreva("quarta-feira")
        caso 5
             escreva("quinta-feira")
        caso 6
             escreva("sexta")
fimescolha

Fimalgoritmo