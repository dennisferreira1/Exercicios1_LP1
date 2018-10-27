#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>
using namespace std;

#include "cartela.h"

#define MAX_CARTELAS 5

class Jogador
{
private:
	  string m_nome;
	Cartela* m_cartelas[MAX_CARTELAS];
	     int m_total_cartelas;
	Cartela* m_cartela_ganhadora;
	    

public:
	Jogador(string nome_);
	~Jogador();

	string getNome();

	void comprar_cartelas(Cartela* nova);

	void marcar_cartela(int numero);

	bool verificar_cartelas();

	Cartela* getCartelaVencedora();
	
};


#endif						