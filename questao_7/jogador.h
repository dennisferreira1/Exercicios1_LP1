#ifndef JOGADOR_H
#define JOGADOR_H

#define MAX_CARTELAS 5

class Jogador
{
private:
	  stinrg m_nome;
	Cartela* m_cartelas[MAX_CARTELAS];
	Cartela* m_cartela_ganhadora;
	     int m_total_cartelas;

public:
	Jogador();
	~Jogador();

	void comprarCartelas(int qtde);
	
};


#endif						