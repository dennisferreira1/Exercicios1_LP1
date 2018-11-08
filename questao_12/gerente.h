#ifndef GERENTE_H
#define GERENTE_H

#include "funcionario.h"

class Gerente : public Funcionario
{
public:
	Gerente(string nome_,int idade_, int matricula_, double salario_);
	~Gerente();
	
};
#endif