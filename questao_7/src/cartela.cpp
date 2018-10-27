#include <iostream>
using namespace std;

#include "cartela.h"
#include "sorteadora.h"

Cartela::Cartela(Sorteadora* sorteadora):m_total_numeros(0), m_total_acertos(0){

	while(m_total_numeros < MAX_NUMEROS)
	{

		int valor_sorteado= sorteadora->sortear();
		bool existe= false;

		for(int index=0; index<m_total_numeros; index++){
			if(m_numeros[index] == valor_sorteado){
				existe= true;
				break;
			}
		}
		if(!existe){
			m_numeros[m_total_numeros++]= valor_sorteado;
		}
	}
	
}

Cartela::~Cartela(){}

void Cartela::verificar_numero(int numero){

	for(int index=0; index < m_total_numeros; index++){
		if(m_numeros[index] == numero){
			m_total_acertos++;
		}
	}
}

int Cartela::get_acertos(){
	return m_total_acertos;
}

void Cartela::print_cartela(){
	cout<<"\n--------------------\n"
		<<"Numeros da Cartela\n"
		<<"--------------------\n";	
	for(int index=0; index<m_total_numeros; index++){
		if(index == 5 || index == 10){
			cout<<endl<<endl;
		}
		cout<<m_numeros[index]<<"  ";
	}
}