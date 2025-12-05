Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/14/2025
Var
cont, soma, num:inteiro
media: real


Inicio
soma  <- 0                                                     0
cont <- 0

repita (soma < 850)
         leia(num)
         soma <- soma + num
         cont <- cont + 1
ate(soma >= 850)

media <- soma/cont
escreva("Média = ",media)

Fimalgoritmo