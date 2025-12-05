Algoritmo "Ex10"
// 
//  
// Descrição   : Verificar se um data é valida
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 4/9/2025
Var
dia, mes, ano, dMax: inteiro
Inicio
escreva("Insira o dia")
leia(dia)
escreva("Insira o mes")
leia(mes)
escreva("Insira o ano")
leia(ano)

se ((ano<>0)e (mes > 0) e (mes < 13) e (dia > 0) e (dia < 32)) entao
   escolha mes
           caso 1, 3, 5, 7, 8, 10, 12
                dMax <- 31
           caso 4,6,9,11
                dMax <- 30
           caso 2
                se ((ano%4 = 0) e (ano%100<> 0) ou (ano%400 = 0))
                   dMax <- 29
                senao
                     dMax <- 28
                fimse
   fimescolha
   se (dia <= dMax) entao
      escreva("valido")
   senao
        escreva("inváido")

   fimse
senao
     escreva("invalido")
fimse

Fimalgoritmo