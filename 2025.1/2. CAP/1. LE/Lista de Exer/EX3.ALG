Algoritmo "Ex3"
// 
//  
// Descrição   : Calculo de IMC
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 4/4/2025
Var
peso, altura, IMC : real


Inicio
escreva("Informe seu peso(kg): ")
leia(peso)
escreva("Informe sua altura(m): ")
leia(altura)

IMC <- peso / (altura*altura)
escreva("Seu IMC é: ", IMC:6:2)

Fimalgoritmo