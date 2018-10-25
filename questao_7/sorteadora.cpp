
#include "sorteadora.h"


Sorteadora::Sorteadora():rd(),
	 gen(rd()), dis(1,99){

	m_valor= std::round(dis(gen));
}

int Sorteadora::sortear(){
	m_valor= std::round(dis(gen));
	return m_valor;
}

int Sorteadora::getValor(){
	return m_valor;
}
