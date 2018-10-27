#ifndef PESSOA_H
#define PESSOA_H


#include <iostream>

using namespace std;

class Pessoa
{
public:
	string m_nome ;
	int m_idade ;
public:
	Pessoa(string nome_, int idade_): m_nome (nome_), m_idade(idade_){};
	~Pessoa(){};
	string getNome (){ return m_nome ; };
	int getIdade (){ return m_idade ; };

};

#endif