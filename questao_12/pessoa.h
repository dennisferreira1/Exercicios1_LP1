#ifndef PESSOA_H
#define PESSOA_H


#include <string>
using namespace std;

class Pessoa
{
protected:
	string m_nome ;
	int m_idade ;

public:
	Pessoa(string nome_, int idade_): m_nome (nome_), m_idade(idade_){};
	~Pessoa(){};
	string getNome (){ return m_nome ; };
	int getIdade (){ return m_idade ; };

};

#endif