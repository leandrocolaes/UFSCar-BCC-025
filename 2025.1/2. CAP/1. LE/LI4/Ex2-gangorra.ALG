Algoritmo "Ex2"
// 
//  
// Descrição   : Informe de qual lado a gangorra irá cair
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 16/04/2025
Var
P1, P2, C1, C2:inteiro

Inicio
//Entrada de dados
escreva("Informe o peso do P1: ")
leia(P1)
escreva("Informe o comprimento do C1: ")
leia(C1)
escreva("Informe o peso do P2: ")
leia(P2)
escreva("Informe o comprimento do C2: ")
leia(C2)

//Decisão de qual lado vai cair e saída de dados
se (P1*C1 > P2*C2) entao
   escreva(-1)
senao
   se (P2*C2 > P1*C1) entao
      escreva(1)
   senao
      escreva(0)
   fimse
fimse

Fimalgoritmo