#include <iostream>
template <class t>
class vetor //vetores de inteiros
{

public:
   vetor(int=10); 	//construtor. O parâmetro int define o tamanho do vetor
   ~vetor(); 		//destrutor
   t get_tamanho() const;	//retorna o tamanho do vetor
   bool SetValor(int pos, t val);	//altera o valor da posição "pos" para "val". 
   									//retorna "true" em caso de sucesso e falso em caso de insucesso
   bool GetValor(int pos, t& val) const; 	// em caso de sucesso, retorna "true" e o valor da posição "pos" em "val" (passada por referência). 
   void imprime() const; //método auxiliar para impressão do vetor na tela (console)

private:
   int tam;  			//tamanho do vetor
   t *ptrvalores;		//ponteiro para a primeira posição do vetor

   
};

template <class t>
vetor<t>::vetor(int T)
{
   if (T > 0) 
     tam = T;
   else
     tam = 10;                 

   ptrvalores = new t[tam];
}

template <class t>
vetor<t>::~vetor()
{
   delete [] ptrvalores;
}

template <class t>
t vetor<t>::get_tamanho() const{
    return tam;   
}

template <class t>
bool vetor<t>::SetValor(int pos, t val)
{
   if (pos >=0 && pos < tam)
      {
      ptrvalores[pos] = val; 
      return true;
      }
   else 
      return false;   
}

template <class t>
bool vetor<t>::GetValor(int pos, t& val) const
{
    if (pos >= 0 && pos < tam)
      {
         val =ptrvalores[pos];
         return true;
      }
    else
        return false;
}

template <class t>
void vetor<t>::imprime() const
{
     t valor;
     for (int i=0;i<get_tamanho();i++){
        GetValor(i, valor);
        std::cout << valor << " ";
        }
     std::cout << std::endl;
}


int main()
{
   	int tamanhoImpar;
   	std::cout << "O vetor par tera o tamanho padrao."<<std::endl;
   	std::cout << "Entre com o tamanho do vetor impar: ";
   	std::cin>> tamanhoImpar;

   
	vetor <int> Par;
	vetor <int> Impar(tamanhoImpar);

	int i=0;
    while(Par.SetValor(i,i*2))
        i++;


	i=0;
    while(Impar.SetValor(i,i*2+1))
    	i++;
	

    std::cout << "Vetor Par"<<std::endl;
    Par.imprime();
    std::cout << "Vetor Impar"<<std::endl;
    Impar.imprime();

    return 0;
}

