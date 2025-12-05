Algoritmo "Ex6"
// 
//  
// Descrição   : Informa o quadrate da coordenada
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 4/16/2025
Var
x, y: inteiro

Inicio
//Entrada de dados
escreva("Informe o X: ")
leia(x)
escreva("Informe o Y: ")
leia(y)

enquanto ((x<>0) e (y<>0)) faca
//Decisão de quadrante
   se (x > 0) entao
      se (y > 0) entao
         escreval("Primeiro quadrante")
      senao
         escreval("Quarto quadrante")
      fimse
   senao
      se (y > 0) entao
         escreval("Segundo quadrante")
      senao
         escreval("Terceiro quadrante")
      fimse
   fimse
//Saída de dados
   escreva("Informe o X: ")
   leia(x)
   escreva("Informe o Y: ")
   leia(y)
fimenquanto
Fimalgoritmo