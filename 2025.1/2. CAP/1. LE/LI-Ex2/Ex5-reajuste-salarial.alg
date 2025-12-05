Algoritmo "Ex5-reajuste-salarial"
// 
//  
// Descrição   : Reajuste de salário de acordo com a porcentagem estabelecida
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 08/04/2025
Var
sal, tax:real


Inicio
//Entrada de dados
escreva("Informe seu salario: ")
leia(sal)

//Classificando a taxa pelo salário
se((0<= sal) e (sal <=400))entao
     tax <- 1.15
senao
     se((sal > 400) e (sal <= 800))entao
          tax <- 1.12
     senao
          se ((sal > 800) e (sal <= 1200))entao
               tax <- 1.10
          senao
               se ((sal > 1200) e (sal <= 2000))entao
                    tax <- 1.07
               senao
                    se (sal > 2000)entao
                       tax <- 1.04
                    fimse
               fimse
          fimse
     fimse
fimse

//Saída de dados processados
escreval("Novo salario: ", (sal*tax):8:2)
escreval("Reajuste ganho: ", (sal*(tax-1)):5:2)
escreval("Em percentual: ", ((tax-1)*100):3:0, "%")

Fimalgoritmo