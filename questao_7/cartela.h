#ifndef CARTELA_H
#define CARTELA_H

#include "sorteadora.h"

#define MAX_NUMEROS 15

class Cartela
{
private:
	int m_numeros[MAX_NUMERO];
	int m_total_numeros;

public:
	Cartela(Sorteadora* sorteadora);
	~Cartela();

	printCartela();

};



#endif