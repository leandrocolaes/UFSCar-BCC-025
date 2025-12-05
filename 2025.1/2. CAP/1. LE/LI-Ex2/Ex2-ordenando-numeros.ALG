Algoritmo "Ex2-Ordenar-dois-numeros"
// 
//  
// Descrição   : Ordenar em ordem decrescente 3 números
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 4/8/2025
Var
l1, l2, l3, prov:inteiro

Inicio
//Entrada de dados
escreva("Informe o primeiro inteiro: ")
leia(l1)
escreva("Informe o seguno inteiro: ")
leia(l2)
escreva("Informe o terceiro inteiro: ")
leia(l3)

//Ordenando os números
se (l1>l2) entao
   prov <- l1
   l1 <- l2
   l2 <-prov
fimse
se (l1>l3) entao
   prov <- l1
   l1 <- l3
   l3 <- prov
fimse
se (l2>l3) entao
   prov <- l2
   l2 <- l3
   l3 <- prov
fimse


//Saída de dados
escreva(l3, " ", l2, " ", l1)


Fimalgoritmo