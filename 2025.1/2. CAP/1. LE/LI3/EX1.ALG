Algoritmo "Ex1"
// 
//  
// Descrição   : Quantidades de anos até uma data população tenha mais habitantes que a outra
// Autor(a)    : Leandro Junio dos Santos Colaes
// Data atual  : 4/14/2025
Var
Ha, Hb: real
anos, Ta, Tb:real


Inicio
escreva("Ha")
leia(Ha)
escreva("Ta")
leia(Ta)
Ta <- Ta/100 + 1
escreva("Hb")
leia(Hb)
escreva("Tb")
leia(Tb)
Tb <- Tb/100 + 1

anos <- 0
enquanto (Hb > Ha) faca
         Ha <- Ha*Ta
         Hb <- Hb*Tb
         anos <- anos + 1
fimenquanto

escreva(anos)

Fimalgoritmo