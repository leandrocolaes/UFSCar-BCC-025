Algoritmo "Ex8"
// 
//  
// Descrição   : Seleciona o maior valor entre 100 números inteiros positivos e informa o index
// Autor(a)    : Lenadro Junio dos Santos Colaes
// Data atual  : 4/14/2025
Var
maior, i,index, num:inteiro


Inicio
maior <- -1
index <- 1
para i de 1 ate 100 faca
     escreva("Informe o número inteiro positivo: ")
     leia(num)
     se (maior < num) entao
        maior <- num
        index <- i
     fimse
fimpara

escreval("Maior número:",maior)
escreval("Index: ", index)

Fimalgoritmo