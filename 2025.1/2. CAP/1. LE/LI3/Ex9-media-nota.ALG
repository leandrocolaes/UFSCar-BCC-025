Algoritmo "Ex9"
// 
//  
// Descrição   : Informa a média das notas válidas de uma prova
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 4/16/2025
Var
nota, media: real
cont: inteiro


Inicio
//Zerando os valores
cont <- 0
media <- 0
.
//Validando a nota e fazendo a média
enquanto (cont < 5) faca
   leia(nota)
   se ((nota >= 0) e (nota <= 10)) entao
      cont <- cont + 1
      media <- media + nota/5
   senao
      escreval("Nota é invalidada")
   fimse
fimenquanto
//Saída de dados
escreval("media é: ", media)

Fimalgoritmo