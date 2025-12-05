Algoritmo "Ex8"
// 
//  
// Descrição   : Classificar o tipo de triângulo e verificar se forma um triângulo
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 09/04/2025
Var
l1, l2, l3: inteiro


Inicio
//Entrada de Dados
escreva("Escreva o primeiro lado do triângulo: ")
leia(l1)
escreva("Escreva o segundo lado do triângulo: ")
leia(l2)
escreva("Escreva o terceiro lado do triângulo: ")
leia(l3)

//Classificando o triângulo
se (l1+l2 <= l3) entao
   escreva("Não formam um triângulo")
senao
     se (l2+l3 <= l3) entao
        escreva("Não formam um triângulo")
     senao
          se(l1+l3 <= l2) entao
                   escreva("Não formam um triângulo")
          senao
               se((l1=l2) e (l2=l3)) entao
                        escreva("Equilátero")
               senao
                    se((l1=l2) ou (l1=l3) ou (l2=l3)) entao
                             escreva("Isósceles")
                    senao
                         escreva("Escaleno")
                    fimse
               fimse
          fimse
     fimse

fimse


Fimalgoritmo