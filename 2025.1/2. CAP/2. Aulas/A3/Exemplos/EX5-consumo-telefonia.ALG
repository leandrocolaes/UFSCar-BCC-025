Algoritmo "Ex4"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/7/2025
Var
minutos:inteiro
tax: real

Inicio
leia(minutos)

se (minutos < 200) entao
   tax <- 0.2
senao
     se(minutos <= 400) entao
                tax <- 0.18
     senao
          tax <- 0.15
fimse
fimse

escreval("totalizando: ", minutos*tax, " com taxa de: ", tax)


Fimalgoritmo