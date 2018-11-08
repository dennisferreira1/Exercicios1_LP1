#include "funcionario.h"

Funcionario::Funcionario(string nome_,int idade_, int matricula_, double salario_):
 				Pessoa(nome_, idade_),	m_matricula(matricula_), m_salario(salario_){}

Funcionario::~Funcionario(){}

int Funcionario::getMatricula(){
	return m_matricula;
}
double Funcionario::getSalario(){
	return m_salario;
}