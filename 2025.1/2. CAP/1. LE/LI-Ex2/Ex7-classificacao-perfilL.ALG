Algoritmo "Ex6-classificacao-perfil"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 4/9/2025
Var
ano, soma, temp, M, C, D, U:inteiro


Inicio
escreva("Informe o seu ano de nascimento: ")
leia(ano)
M <- ano\1000
temp <- ano%1000
C <- temp\100
temp <- temp%100
D <- temp\10
U <- temp%10

escolha soma%5
        caso 0
             escreva("Tímido")
        caso 1
             escreva("Sonhador")
        caso 2
             escreva("Paquerador")
        caso 3
             escreva("Atraente")
        caso 4
             escreva("Irresístivel")
fimescolha


Fimalgoritmo