
#include <iostream>
#include "carro.h"

using namespace std;

Carro::Carro(string modelo_, int ano_, float capacidadeTanque_, float autonomia_):
	m_modelo(modelo_), m_ano(ano_), m_capacidadeTanque(capacidadeTanque_), m_autonomia(autonomia_),
	m_qtdeCombustivel(0), m_distanciaPercorrida(0){
		cout<<"Foi criado um "<<m_modelo<<", ano "<<m_ano<<". Suporta "
			<<m_capacidadeTanque<<" litros e consome "<<m_autonomia<<" km/l.\n";
	}

Carro::~Carro(){}

float Carro::getQtdeCombustivel(){
	return m_qtdeCombustivel;
}
	
float Carro::getAutonomia(){
	return m_autonomia * (m_qtdeCombustivel-1);
}
float Carro::getDistanciaPercorrida(){
	return m_distanciaPercorrida;
}

void Carro::mover(float distancia){

	if(m_qtdeCombustivel <= 1){
		cout<<"Combustivel insuficiente para mover."<<endl;
	}else{
		m_distanciaPercorrida += distancia;
		m_qtdeCombustivel = (m_qtdeCombustivel - (distancia/m_autonomia));
	}

}

void Carro::abastecer(float quantidade){

	if(quantidade > (m_capacidadeTanque - m_qtdeCombustivel)){
		
		cout<<"Quantidade de combustivel excedeu a capacidade do tanque. Foram abastecidos so "
			<< m_capacidadeTanque - m_qtdeCombustivel<<" litros.\n";

			m_qtdeCombustivel= m_capacidadeTanque;

	}else{
		m_qtdeCombustivel += quantidade;
	}

}
