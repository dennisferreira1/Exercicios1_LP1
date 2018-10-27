#include <iostream>
using namespace std;

#include "bingo.h"


Bingo::Bingo(): m_total_jogadores(0), m_total_vencedores(0), m_total_numeros_sorteados(0){
	m_sorteadora= new Sorteadora();
}

Bingo::~Bingo(){}

void Bingo::adicionar_jogador(string nome_, int qtde_cartelas){

	if(m_total_jogadores < MAX_JOGADORES && qtde_cartelas <= MAX_CARTELAS){
		Jogador* novo= new Jogador(nome_);
		m_jogadores[m_total_jogadores++]= novo;

		gerar_cartela(qtde_cartelas, m_total_jogadores-1);
		
	}else if(qtde_cartelas > MAX_CARTELAS){
		cout<<"\nJogador '"<<nome_<<"' nao adicionado. Cada jagador so pode comprar ate "<<MAX_CARTELAS<<" cartelas."<<endl;
	}else{
		cout<<"Bingo lotado!"<<endl;
	}
}

void Bingo::gerar_cartela(int qtde_cartelas, int posicao_jogador){

	for(int i= 0; i < qtde_cartelas; i++)
	{
		Cartela* nova= new Cartela(m_sorteadora);
		m_jogadores[posicao_jogador]->comprar_cartelas(nova);
	}

}

void Bingo::iniciar(){

	while(m_total_vencedores == 0){

		int valor_sorteado= m_sorteadora->sortear();

		bool existe= false;

		for(int index=0; index < m_total_numeros_sorteados; index++){
			if(m_numeros_sorteados[index] == valor_sorteado){
				existe= true;
				break;
			}
		}
		if(!existe)
		{
			m_numeros_sorteados[m_total_numeros_sorteados++]= valor_sorteado;

			for(int index=0; index < m_total_jogadores; index++){
				m_jogadores[index]->marcar_cartela(valor_sorteado);
			}

			if(m_total_numeros_sorteados > 14){
				definir_vencedor();
			}

		}

	}

	print_vencedor();

}

void Bingo::definir_vencedor(){
	for(int index=0; index < m_total_jogadores; index++)
	{
		if(m_jogadores[index]->verificar_cartelas()){
			m_vencedor[m_total_vencedores++]= m_jogadores[index];
		}	
	}
}

void Bingo::print_vencedor(){
	cout<<"\n======================"<<endl
		<<" GANHADORES DO BINGO"<<endl
		<<"======================"<<endl;
	for(int index=0; index < m_total_vencedores; index++){
		cout<<"\nGanhador(a): "<<m_vencedor[index]->getNome();
		m_vencedor[index]->getCartelaVencedora()->print_cartela();
		cout<<endl<<endl;
	}
}