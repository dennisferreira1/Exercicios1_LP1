#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "pessoa.h"

class Funcionario : Pessoa
{
protected:
	   int m_matricula;
	double m_salario;

public:
	Funcionario(string nome_,int idade_, int matricula_, double salario_);
	~Funcionario();

virtual int getMatricula() = 0;
	 double getSalario();

};

#endif