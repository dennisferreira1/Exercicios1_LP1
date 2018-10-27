#ifndef CARTELA_H
#define CARTELA_H

#include "sorteadora.h"

#define MAX_NUMEROS 15

class Cartela
{
private:
	int m_numeros[MAX_NUMEROS];
	int m_total_numeros;
	int m_total_acertos;

public:
	Cartela(Sorteadora* sorteadora);
	~Cartela();

	void verificar_numero(int numero);
	int get_acertos();

	void print_cartela();

};



#endif