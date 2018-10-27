#ifndef  SORTEADORA_H
#define SORTEADORA_H

#include <random>


class Sorteadora
{
private:
	 int m_valor;
	
	 std::random_device rd;
	 std::default_random_engine gen;
	 std::uniform_int_distribution<> dis;
	 
public:
	Sorteadora();
	int sortear();
	int getValor();

};

#endif