#ifndef CARRO_H
#define CARRO_H

#include <string>
using namespace std;

class Carro
{
private:
	string m_modelo;
	int m_ano;
	float m_capacidadeTanque;
	float m_autonomia;
	float m_qtdeCombustivel;
	float m_distanciaPercorrida;


public:
	Carro(string modelo_, int ano_, float capacidadeTanque_, float autonomia_);
	~Carro();

	float getQtdeCombustivel();
	float getAutonomia();
	float getDistanciaPercorrida();


	void mover(float distacia);
	void abastecer(float quantidade);

	
};




#endif