
#include "jogador.h"


Jogador::Jogador(string nome_): m_nome(nome_), m_total_cartelas(0){

}

Jogador::~Jogador(){}

string Jogador::getNome(){
	return m_nome;
}

Cartela* Jogador::getCartelaVencedora(){
	return m_cartela_ganhadora;
}

void Jogador::comprar_cartelas(Cartela* nova){

	m_cartelas[m_total_cartelas++]= nova;

}

void Jogador::marcar_cartela(int numero){

	for(int index=0; index < m_total_cartelas; index++){

		m_cartelas[index]->verificar_numero(numero);
	}
}

bool Jogador::verificar_cartelas(){

	for(int index=0; index < m_total_cartelas; index++){
		if(m_cartelas[index]->get_acertos() == 15){
			m_cartela_ganhadora= m_cartelas[index];
			return true;
		}
	}

	return false;
}

