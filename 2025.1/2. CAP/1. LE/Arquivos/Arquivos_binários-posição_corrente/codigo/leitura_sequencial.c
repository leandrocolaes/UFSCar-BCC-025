/*
  Este programa apresenta todos os registros contidos no arquivo
  de registro de vendas
  Input: os registros contidos no arquivo vendas.dat
  Output: os campos de cada registro (tela), juntamente com
	mensagens "didaticas" sobre o arquivo e as funcoes
	de manipulacao de arquivos em C

  Jander, 2020

  Cada registro guarda:
	- o codigo do produto (inteiro)
	- a quantidade vendida (inteiro)
	- o valor de venda (double)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <errno.h>

// definicao do registro
struct venda {
	int codigo;
	int quantidade;
	double valor;
};

#define NOME_ARQUIVO "vendas.dat"



//
// programa principal
//
int main(void){
	// acesso ao arquivo e verificacao de sucesso
	FILE *arquivo = fopen(NOME_ARQUIVO, "rb");
	if(arquivo == NULL)
		perror(NOME_ARQUIVO);
	else{
		printf("Arquivo aberto; posicao atual: %lu\n", ftell(arquivo));

		// varredura do arquivo completo
		struct venda item;
		size_t leituras;
		do{
			printf("\nPosicao atual: %lu\n", ftell(arquivo));
			leituras = fread(&item, sizeof item, 1, arquivo);
			if(leituras != 1)
				printf("Leitura nao realizada "
					"(fim de arquivo)\n");
			else
				printf("Registro lido: (%d, %d, %.2lf)\n",
					item.codigo, item.quantidade,
					item.valor);
		}while(leituras == 1);
		
		// encerramento
		fclose(arquivo);
	}
	
	return 0;
}
