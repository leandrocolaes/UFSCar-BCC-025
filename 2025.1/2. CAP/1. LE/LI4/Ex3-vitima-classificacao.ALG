Algoritmo "Ex3"
// 
//  
// Descrição   : Classificar uma pessoa sobre o crime
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 16/04/2025
Var
n:inteiro
res: caractere

Inicio
//Alterando o valor de n
pos <- 0
escreva("Telefonou para a vitíma?")
leia(res)
se (res = "sim") entao
   n <- n + 1
fimse
escreva("Esteve no local do crime?")
leia(res)
se (res = "sim") entao
   n <- n + 1
fimse
escreva("Mora perto da vítima?")
leia(res)
se (res = "sim") entao
   n <- n + 1
fimse
escreva("Devia para a vitíma?")
leia(res)
se (res = "sim") entao
   n <- n + 1
fimse
escreva("Já trabalhou para a vítima?")
leia(res)
se (res = "sim") entao
   n <- n + 1
fimse

//Classificando a pessoa pelo valor de n
escolha(n)
   caso 2
      escreva("Suspeito")
   caso 3, 4
      escreva("Cúmplice")
   caso 5
      escreva("Assassino")
   outrocaso
      escreva("Inocente")
fimescolha

Fimalgoritmo