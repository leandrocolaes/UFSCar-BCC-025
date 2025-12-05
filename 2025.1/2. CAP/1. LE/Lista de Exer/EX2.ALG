Algoritmo "Ex2"
// 
//  
// Descrição   : Calcular e mostrar a quantidade de gasolina(l) gasta em uma viagem
// Autor(a)    : Leandro Junio dos Santos Colaes)
// Data atual  : 4/2/2025
Var
tempoGasto : inteiro
velMedia, gasolinaGasto : real

Inicio
//Entrada de valores
escreva("Informe a velocidade média da viagem: ")
leia(velMedia)
escreva("Informe o tempo gasto: ")
leia(tempoGasto)

//Saída
gasolinaGasto <- (velMedia*tempoGasto)/12
escreva("A quantidade de gasolina gasta foi: ", gasolinaGasto:6:2)

Fimalgoritmo