Algoritmo "Ex4"
//
//
// Descrição   : Verifica se é um número primo
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 16/04/2025
Var
n, i, divi: inteiro

Inicio
//Entrada de dados
escreva("Informe um número: ")
leia(n)
divi <- 0

//Numerando os divisores
para i de 1 até n faca
     se (n%i = 0) entao
        divi <- divi + 1
     fimse
fimpara

//Decidindo se é primo ou não de acordo com o divi
se (divi = 2)entao
   escreva("È primo")
senao
     escreva("Não é primo")
fimse


Fimalgoritmo