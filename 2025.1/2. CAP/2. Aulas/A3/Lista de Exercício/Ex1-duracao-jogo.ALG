Algoritmo "Ex1-duração do jogo"
//
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Leandro
// Data atual  : 07/05/2025
Var
comeco, fim, duracao: inteiro


Inicio
//Entrada de dados
escreva("informe a hora de início")
leia(comeco)
escreva("informe a hora de término")
leia(fim)

//Decisão: se o hoje é no mesmo dia ou não
se (fim > comeco)entao
   duracao <- fim-comeco
senao
     duracao <- (24-comeco)+fim
fimse

//Saída de dados
escreva("O jogo durou", duracao, "horas")


Fimalgoritmo