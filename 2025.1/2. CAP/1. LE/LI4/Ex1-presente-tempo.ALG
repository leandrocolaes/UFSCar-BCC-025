Algoritmo "Ex1"
// 
//  
// Descrição   : Decida se o duente irá fazer o presente dependendo do tempo
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 16/04/2025
Var
N, A, B:inteiro


Inicio
//Entrada de dados
escreva("Informe o tempo N: ")
leia(N)
escreva("Informe o tempo do primeiro presente: ")
leia(A)
escreva("Informe o tempo do segundo presente: ")
leia(B)

//Decisão e saída de dados
se (A+B > N) entao
   escreva("Deixa para amanhã")
senao
   escreva("Farei hoje")
fimse

Fimalgoritmo