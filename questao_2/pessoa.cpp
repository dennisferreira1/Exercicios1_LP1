#include "pessoa.h"

#include <iostream>
#include <string>
using namespace std;

Pessoa::Pessoa(string nome_, int idade_, float altura_):
	m_nome(nome_), m_idade(idade_), m_altura(altura_){}

Pessoa::~Pessoa(){};

string Pessoa::getNome(){
	return m_nome;
}

int Pessoa::getIdade(){
	return m_idade;
}

float Pessoa::getAtura(){
	return m_altura;
}

void Pessoa::setNome(string nome_){
	m_nome= nome_;
}
void Pessoa::setIdade(int idade_){
	m_idade= idade_;
}
void Pessoa::setAltura(float altura_){
	m_altura= altura_;
}

ostream& operator<< (ostream& o, Pessoa& pessoa){
	o<<pessoa.m_nome<<" - "<<pessoa.m_idade<<" anos de idade - "<<pessoa.m_altura<<" metros de altura"<<endl;

	return o;
}