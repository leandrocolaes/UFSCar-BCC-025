Algoritmo "Ex2-imc-condicao"
// 
//  
// Descrição   : Informe minha condição pelo valor calculado do IMC
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 07/04/2025
Var
peso, altura, imc: real


Inicio
//Entrada de dados
escreva("Informe seu peso: ")
leia(peso)
escreva("Informe sua altura: ")
leia(altura)
imc <- peso/(altura*altura)

//Criando vários "se"s para decidir a condição
se (imc < 18.5) entao
   escreva("Abaixo do peso")
senao
     se (imc <= 25) entao
        escreva("Peso normal")
     senao
          se (imc <= 30) entao
             escreva("Acima do peso")
          senao
               escreva("Obeso")
          fimse
     fimse
fimse


Fimalgoritmo