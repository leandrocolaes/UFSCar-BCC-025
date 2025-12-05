Algoritmo "Ex4-Classificnado em Intervalos"
// 
//  
// Descrição   : Classificando os números nos intervalos
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 07/05/2025
Var
n:real


Inicio
//Entrada de dados
escreva("Informe um número: ")
leia(n)

//Decisões para classificar o número
se ((0 <= n) e (n <=25)) entao
   escreva("Intervalo [0, 25]")
senao
   se ((n>25)e (n < 50)) entao
      escreva("Intervalo (25,50]")
   senao
      se ((n>75)e (n <= 100)) entao
         escreva("Intervalo (75, 100]")
      senao
         escreva("Fora de intervalo")
      fimse
   fimse
fimse
Fimalgoritmo