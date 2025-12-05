Algoritmo "Ex9"
// 
//  
// Descrição   : Informa o imposto de renda de acordo com uma table a pré estabelecida
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atu      al  : 4/9/2025
Var
sal, Nsal:real


Inicio
//Entrada de dados
escreva("Informe seu salário: ")
leia(sal)

//Calcula o valor do imposto de renda
se (sal <= 2000) entao
   escreval("Isento")
senao
     se (sal <= 3000)entao
        Nsal <- (sal-2000)*0.08
     senao
          se (sal <= 4500) entao
             Nsal <- 1000*0.08 + (sal-3000)*0.18
          senao
               Nsal <- 1000*0.08 + 1500*0.18 + (sal-4500)*0.28
          fimse
     fimse
fimse

//Saidade dados
escreval("R$ ", Nsal:6:2)


Fimalgoritmo