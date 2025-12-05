/*
  Este programa apresenta o conteudo de um registro em uma
  dada posicao 
  Input: uma sequencia de enderecos (em bytes) de registros
  Output: os campos do registro (na tela) referente aos
	enderecos especificados 

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

#ifndef __linux__
	#define FIM "Ctrl-Z+ENTER"
#else
	#define FIM "Ctrl-D"
#endif

//
// programa principal
//
int main(void){
	// acesso ao arquivo e verificacao de sucesso
	FILE *arquivo = fopen(NOME_ARQUIVO, "rb");
	if(arquivo == NULL)
		perror(NOME_ARQUIVO);
	else{
		printf("Registro (ou " FIM " para terminar): ");
		int leituras;
		do{
			int n;
			leituras = scanf("%d", &n);
			if(leituras == 1){
				// posicionamento
				fseek(arquivo, sizeof(struct venda), SEEK_SET);
				printf("Posicao alterada para %ld\n", ftell(arquivo));

				// leitura
				struct venda registro;
				if(fread(&registro, sizeof registro, 1, arquivo) == 0)
					printf("Erro de leitura\n");
				else
					printf("Em %lu: (%d, %d, %.2lf)\n",
						n*sizeof registro,
						registro.codigo,
						registro.quantidade,
						registro.valor);
				printf("Endereco (ou " FIM " para terminar): ");
			}
		}while(leituras == 1);

		// encerramento
		fclose(arquivo);
	}

	printf("\n");
	return 0;
}
