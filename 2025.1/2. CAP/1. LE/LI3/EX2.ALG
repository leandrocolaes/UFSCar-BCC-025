Algoritmo "Ex2"
// 
//  
// Descrição   : Informe o maior número entre um conjunto de 10 números e informe se existe um número par
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 4/14/2025
Var
maior, par, num, n: inteiro

Inicio
maior <- 0
par <- 0

//Verificando o maior e se existe par
para n de 1 ate 10 faca
     leia(num)
     se (maior < num) entao
         maior <- num
     fimse
     se ((num%2 =0) e (par = 0)) entao
        par <- 1
     fimse
fimpara

//Saida de dados
escreval("Maior: ", maior)
se (par <> 0) entao
   escreva("Existe par")
senao
     escreva("Não exite par")
fimse

Fimalgoritmo