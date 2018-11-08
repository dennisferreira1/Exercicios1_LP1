#ifndef ASSISTENTE_ADM_H
#define ASSISTENTE_ADM_H

#include "funcionario.h"

class Assistente_Adm : public Funcionario
{
private:
	string m_turno;
	double m_participacao_lucros;
public:
	Assistente_Adm(string nome_,int idade_, int matricula_, double salario_, string turno_);
	~Assistente_Adm();

	string getTurno();
	double getParticipacao_Lucros();
	
	  void setTurno(string turno_);

	void receber_participacao(double participacao_)
	
};
#endif