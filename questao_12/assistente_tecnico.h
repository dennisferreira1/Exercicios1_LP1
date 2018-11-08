#ifndef ASSISTENTE_TECNICO_H
#define ASSISTENTE_TECNICO_H

#include "funcionario.h"

class Assistente_Tecnico : public Funcionario
{
private:
	Funcionario m_supervisor;
		 double m_bonus_salarial;

public:
	Assistente_Tecnico(string nome_, int idade_, int matricula_, double salario_);
	~Assistente_Tecnico();

	Funcionario getSupervisor();
		 double getBonusSalarial();

		   void atribuir_supervisor(Funcionario supervisor_);
		   void receber_bonus(double bonus_);

	
};



#endif