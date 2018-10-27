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

	//Retorna o tempo em segundos
	int converteEmSegundos();
	
	//Sobrecarrega o operador de inserção para imprimir o tempo no formato HH:MM:SS e o seu total em segundos
	friend ostream& operator<< (ostream& ostr, Tempo& t);

	//Sobrecarrega o operador de extração para ler os dados do tempo apartir da entrada padrão
	friend istream& operator>> (istream& istr, Tempo& t);	
};


			
#endif