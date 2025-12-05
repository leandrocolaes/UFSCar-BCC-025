Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/14/2025
Var
cod, qnt:inteiro
soma, tax:real


Inicio
soma <- 0
repita
      escreva("Insira o código do produto: ")
      leia(cod)
      se (cod <> 0)entao
         escreva("Insira a quantidade: ")
         leia(qnt)

               escolha cod
                 caso 1
                      tax <- 0.5
                 caso 2
                      tax <- 1
                 caso 3
                      tax <- 4
                 caso 5
                      tax <- 7
                 caso 9
                      tax <- 8

                      fimescolha

         soma <- soma + tax*qnt
      fimse

      
até (cod = 0)


escreva(soma)

Fimalgoritmo