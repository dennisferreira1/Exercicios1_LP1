#include <iostream>

#include "cartela.h"
#include "sorteadora.h"

Cartela::Cartela(Sorteadora* sorteadora):m_total_numeros(0){

	while(m_total_numeros < MAX_NUMEROS){
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

void printCartela(){
	cout<<"\n------------------\n"
		<<"Numeros da Cartela\n"
		<<"------------------\n"	
	for(int index=0; index<m_total_numeros; index++){
		if(index == 5 || index == 10){
			cout<<endl<<endl;
		}
		cout<<m_numeros[index]<<"  ";
	}
}