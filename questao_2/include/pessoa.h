#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa
{
private:
	string m_nome;
	   int m_idade;
	 float m_altura;
public:
	Pessoa(string nome_, int idade_, float altura_);
	~Pessoa();

	string getNome();
	   int getIdade();
	 float getAtura();

	 void setNome(string nome_);
	 void setIdade(int idade_);
	 void setAltura(float altura_);

	 friend ostream& operator<< (ostream& o, Pessoa& pessoa);
	
};


#endif