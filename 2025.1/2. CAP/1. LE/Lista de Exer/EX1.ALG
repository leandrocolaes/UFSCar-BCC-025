Algoritmo "Ex1"
// 
//  
// Descrição   : Realizar uma média ponderada de 3 notas de um aluno
// Autor(a)    : Leandro Colaes
// Data atual  : 2/4/2025
Var
nota1, nota2, nota3, media : real

Inicio
// Entrada: obtendo os valores da nota
escreva("Informe sua primeira nota: ")
leia(nota1)

escreva("Informe sua segunda nota: ")
leia(nota2)

escreva("Informe sua terceira nota: ")
leia(nota3)

// Saida: fazendo a média e mostrando-a
media <- (nota1*2+nota2*3+nota3*5)/10
escreva("MEDIA = ", media:6:2)

Fimalgoritmo