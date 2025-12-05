Algoritmo "Ex10"
// 
//  
// Descrição   : Informar a estatística de Derby
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/16/2025
Var
conf, Vp, Vc, EE, Gp, Gc: inteiro

Inicio
//Inserindo os valores iniciais
conf <- 1
Vp <- 0
Vc <- 0
EE <- 0
Gp <- 0
Gc <- 0

//Inserindo os dados nas variaveis corretas
enquanto (conf = 1) faca
  escreva("Gols do Palmeiras: ")
  leia(Gp)
  escreva("Gols do Corinthias: ")
  leia(Gc)
  se (Gp > Gc) entao
     Vp <- Vp + 1
  senao
     se (Gp = Gc) entao
        EE <- EE + 1
     senao
          Vc <- Vc + 1
     fimse
  fimse
  escreva("Novo Derby (1-sim, 2-não)")
  leia(conf)
fimenquanto

//Saída de dados
escreval("Palmeiras: ", Vp)
escreval("Corinthians: ", Vc)
escreval("Empates: ", EE)
se (Vp > Vc) entao
   escreva("Palmeiras venceu mais")
senao
   se (Vp < Vc) entao
      escreva("Corinthians venceu mais")
   senao
      escreva("Não houve vencedor")
   fimse
fimse

Fimalgoritmo