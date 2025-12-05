Algoritmo "Ex5"
// 
//  
// Descrição   : Somando a quantidade de números dentro de um dado intervalo
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 4/14/2025
Var
num, inter1, inter2, inter3, inter4:inteiro



Inicio
//Zerando os valores para a adicão posterior
num <- 0
inter1 <- 0
inter2 <- 0
inter3 <- 0
inter4 <- 0

leia(num)

//Decisão e adição para cada intervalo
enquanto (num >= 0) faca
  se ((num >= 0) e (num<= 25)) entao
     inter1 <- inter1 + 1
  senao
       se (num <= 50) entao
          inter2 <- inter2 + 1
       senao
            se (num <= 75) entao
               inter3 <- inter3 + 1
            senao
                 se(num <= 100) entao
                      inter4 <- inter4 + 1
                 fimse
            fimse
       fimse
  fimse
  leia(num)
fimenquanto

//Saída de Dados
escreval("Total de [0, 25]: ", inter1)
escreval("Total de [26, 50]: ", inter2)
escreval("Total de [52, 75]:",inter3)
escreval("Total de [76, 100]:", inter4)

Fimalgoritmo