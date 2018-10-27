#ifndef TEMPO_H
#define TEMPO_H

#include <iostream>
using namespace std;

class Tempo
{
private:
	int hh, mm, ss;
public:
	Tempo();
	~Tempo();

	//Ler os dados do tempo apartir da entrada padrão
	void lerTempo();
	//Retorna o tempo em segundos
	int converteEmSegundos();
	//Imprime o tempo no formato HH:MM:SS e o seu total em segundos
	void mostraTempo();
		
};


			
#endif