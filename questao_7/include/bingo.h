#ifndef BINGO_H
#define BINGO_H


#include "sorteadora.h"
#include "jogador.h"


#define MAX_JOGADORES 30
#define TOTAL_NUM_BINGO 99

class Bingo
{
private:
Sorteadora* m_sorteadora;
   Jogador* m_jogadores[MAX_JOGADORES];
        int m_total_jogadores;
   Jogador* m_vencedor[MAX_JOGADORES];
		int m_total_vencedores;
		int m_numeros_sorteados[TOTAL_NUM_BINGO];
		int m_total_numeros_sorteados;
   

public:
	Bingo();
	~Bingo();

	void adicionar_jogador(string nome_, int qtde_cartelas);
	void gerar_cartela(int qtde_cartelas, int posicao_jogador);
	void iniciar();
	void definir_vencedor();
	void print_vencedor();
};
#endif		