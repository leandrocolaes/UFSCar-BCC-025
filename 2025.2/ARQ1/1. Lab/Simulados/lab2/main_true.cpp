#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <sstream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include <experimental/random>

using namespace std;

struct func{ //mantive em string pois na conversão para int ele apagava os 0 a esquerda - G
    string name;
    string type;
    string op;
    string rd;
    string funct3;
    string rs1;
    string rs2;
    string funct7;
    string immm;
	string instrucao;
};

struct func newstruct(int num_linha){
    ifstream file("riscv.txt");

    string line;

    for(int i = 0; i <= num_linha; i++){
            getline(file, line);
    }

    struct func temp;

    temp.op.assign(line.begin() + 25, line.end());

    if(temp.op == "0110011"){
        if(temp.funct3.assign(line.begin() + 17, line.end() - 12) == "000")
            temp.name = "add";
        else temp.name = "xor";
        temp.type = "R-type";
        temp.rd.assign(line.begin() + 20, line.end() - 7);
        temp.funct3.assign(line.begin() + 17, line.end() - 12);
        temp.rs1.assign(line.begin() + 12, line.end() - 15);
        temp.rs2.assign(line.begin() + 7, line.end() - 20);
        temp.funct7.assign(line.begin(), line.end() - 25);
	temp.instrucao.assign(line);
    
    }else if(temp.op == "0010011" || temp.op == "0000011"){
        if(temp.op == "0000011" && temp.funct3.assign(line.begin() + 17, line.end() - 12) == "100")
            temp.name = "lbu";
        else if(temp.op == "0000011" && temp.funct3.assign(line.begin() + 17, line.end() - 12) == "010")
            temp.name = "lw";
        else if(temp.name.assign(line.begin(), line.end() - 7) == "0000000000000000000000000")
            temp.name = "nop";

        else if(temp.funct3.assign(line.begin() + 17, line.end() - 12) == "000")
            temp.name = "addi";

        else temp.name = "slli";

        temp.type = "I-type";
        temp.rd.assign(line.begin() + 20, line.end() - 7);
        temp.funct3.assign(line.begin() + 17, line.end() - 12);
        temp.rs1.assign(line.begin() + 12, line.end() - 15);
        temp.rs2.assign(line.begin() + 7, line.end() - 20);
        temp.funct7.assign(line.begin(), line.end() - 25);	
        temp.immm = temp.funct7 + temp.rs2;
	temp.instrucao.assign(line);

    }
    else if( temp.op.assign(line.begin() + 25, line.end()) == "0100011"){
        if(temp.funct3.assign(line.begin() + 17, line.end() - 12) == "010")
            temp.name = "sw";
        else temp.name = "sb";

        temp.type = "S-type";
        temp.rd.assign(line.begin() + 20, line.end() - 8);
        temp.funct3.assign(line.begin() + 17, line.end() - 12);
        temp.rs1.assign(line.begin() + 12, line.end() - 15);
        temp.rs2.assign(line.begin() + 7, line.end() - 20);
        temp.funct7.assign(line.begin(), line.end() - 25);
        temp.immm = "0" + temp.funct7 + temp.rd;        
	temp.instrucao.assign(line);

    }else if(temp.op.assign(line.begin() + 25, line.end()) == "1100011"){
        if(temp.funct3.assign(line.begin() + 17, line.end() - 12) == "001")
            temp.name = "bne";
        else temp.name = "beq";
        temp.type = "B-type";
        temp.rd.assign(line.begin() + 20, line.end() - 7);
        temp.funct3.assign(line.begin() + 17, line.end() - 12);
        temp.rs1.assign(line.begin() + 12, line.end() - 15);
        temp.rs2.assign(line.begin() + 7, line.end() - 20);
        temp.funct7.assign(line.begin() + 1, line.end() - 25);
        string temporario1;
        temp.immm = temporario1.assign(line.begin(), line.end() - 31)
        + temporario1.assign(line.begin() + 23, line.end() - 7) + temp.funct7 + temp.rd;
        
	temp.instrucao.assign(line);

    }else if(temp.op.assign(line.begin() + 25, line.end()) ==  "0110111" ){
        temp.name = "lui";
        temp.type =  "U-type";
        temp.rd.assign(line.begin() + 20, line.end() - 7);
        temp.funct3.assign(line.begin() + 17, line.end() - 12);
        temp.rs1.assign(line.begin() + 12, line.end() - 15);
        temp.rs2.assign(line.begin() + 7, line.end() - 20);
        temp.funct7.assign(line.begin(), line.end() - 25);
        temp.immm = temp.funct7 + temp.rs2 + temp.rs1 + temp.funct3;
	temp.instrucao.assign(line);
    }

    else if(temp.op.assign(line.begin() + 25, line.end()) == "1101111"){
        temp.name = "jal";
        temp.type = "J-type";
        temp.rd.assign(line.begin() + 20, line.end() - 7);
        temp.funct3.assign(line.begin() + 17, line.end() - 12);
        temp.rs1.assign(line.begin() + 12, line.end() - 15);
        temp.rs2.assign(line.begin() + 7, line.end() - 20);
        temp.funct7.assign(line.begin(), line.end() - 25);
        temp.immm = temp.funct7 + temp.rs2 + temp.rs1 + temp.funct3;
	temp.instrucao.assign(line);
    }
    
    file.close();
	
    return temp;
}

//Tela padrão do jogo: limpa a tela e mostra apenas o score atual
void limparTela(int score){ 	system("cls||clear");
	cout << "\e[0;34mPontos: " << score << endl;
}

void validarResposta(string resposta, int* score){
	string tentativa;
	cin >> tentativa;
	if (tentativa ==  resposta){
		*score = *score + 1;
		limparTela(*score);
		cout << "\e[0;32mResposta correta" << endl;
		sleep(1);

	} else {
		limparTela(*score);
		cout << "\e[0;32mResposta Incorreta" << endl;
		sleep(1);
	}	
}

void perguntaEspecifica(string pergunta, string resposta, string instrucao, int* score){
	cout << pergunta << endl << instrucao << endl << "R: ";
	validarResposta(resposta, score);
}

//Função para criar as perguntas de upcode de acordo com a linha
void perguntaUpcode(int num_linha, int* score){
	string tentativa;
	struct func novo = newstruct(num_linha);
	limparTela(*score);
	cout << "Fale o código binário do upcode: " << novo.name << endl;
	cout << "R: ";
	validarResposta(novo.op, score);

}

void perguntaFormato(int num_linha, int* score){ 
	string tentativa;
	limparTela(*score);
	struct func novo = newstruct(num_linha);

	//cout << "Leia a linguagem binária em RISCV-V: " << endl << novo.instrucao << endl i
	//
	cout << "Informe o formato da instrução" << endl;
	validarResposta(novo.type, score);
}

//Um anel para a todos governar. Uma função para todas as perguntas para não ter 1000 linhas de código
void perguntaGenerica(int num_linha, int pergunta, int* score){
	string tentativa;
	limparTela(*score);
	struct func novo = newstruct(num_linha);

	switch(pergunta){
		case 1:
			perguntaEspecifica("Fale o código binário do upcode " + novo.name, novo.op, "", score);
			break;
		case 2:
			perguntaEspecifica("Informe o formato da instrução: ", novo.type,  novo.instrucao, score);
			break;
		case 3:
			perguntaEspecifica( "Informe o rd da instrução: ", novo.rd,  novo.instrucao, score);
			break;
		case 4:
			perguntaEspecifica( "Informe a funct3 da instrução: ", novo.funct3,  novo.instrucao, score);
			break;
		case 5:
			perguntaEspecifica( "Informe o rs1 da instrução: " , novo.rs1,  novo.instrucao, score);
			break;
		case 6:
			perguntaEspecifica( "Informe o rs2 da instrução: " , novo.rs2,  novo.instrucao, score);
			break;
        case 7:
            perguntaEspecifica( "Informe o immm da instrução: ", novo.immm, novo.instrucao, score);
            break;
		case 8:
			perguntaEspecifica( "Informe a funct7 da instrução: " , novo.funct7,  novo.instrucao, score);
			break;
		case 9:
			cout << "Informe a funct2 da instrução: " << endl << novo.instrucao << endl << "R: ";
			validarResposta(novo.funct3, score);
			break;
	}
}

//para instruções do formato R essas devem ser as perguntas feitas
void instrucoesFormatoR(int num_linha, int* score) { 
    perguntaGenerica(num_linha, 3, score);
    perguntaGenerica(num_linha, 4, score);
    perguntaGenerica(num_linha, 5, score);
    perguntaGenerica(num_linha, 6, score);
    perguntaGenerica(num_linha, 8, score);
}

//para instruções do formato I essas devem ser as perguntas feitas
void instrucoesFormatoI(int num_linha, int* score) { 
    perguntaGenerica(num_linha, 3, score);
    perguntaGenerica(num_linha, 4, score);
    perguntaGenerica(num_linha, 5, score);
    perguntaGenerica(num_linha, 7, score);
}

int main(){

//Criação do número aleatório
srand(time(nullptr));
int random_num_linha = experimental::fundamentals_v2::randint(0,14); //Gerar número inteiro aleatório entre 0-14(código para acessar as linhas binárias)

int score = 0;

perguntaGenerica(random_num_linha, 1, &score);
perguntaGenerica(random_num_linha, 2, &score);
instrucoesFormatoR(random_num_linha, &score);


//perguntaUpcode(random_num_linha, &score);
//perguntaFormato(random_num_linha, &score);
	
}

