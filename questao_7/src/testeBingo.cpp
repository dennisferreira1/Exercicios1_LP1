
#include "bingo.h"

int main()
{
	
	Bingo meu_bingo;

	meu_bingo.adicionar_jogador("Jose", 7);
	meu_bingo.adicionar_jogador("Dennis", 4);
	meu_bingo.adicionar_jogador("Jemima", 3);
	meu_bingo.adicionar_jogador("Samila", 2);
	meu_bingo.adicionar_jogador("Ian", 5);
	meu_bingo.adicionar_jogador("Ferreira", 1);
	meu_bingo.adicionar_jogador("Joao", 7);


	meu_bingo.iniciar();



	return 0;
}