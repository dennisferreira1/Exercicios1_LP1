#include "assistente_adm.h"

Assistente_Adm::Assistente_Adm(string nome_, int idade_, int matricula_, double salario_, string turno_):
							Funcionario(nome_, idade_, matricula_,salario_),
							m_participacao_lucros(0), m_turno(turno_){}


Assistente_Adm::~Assistente_Adm(){}

string Assistente_Adm::getTurno(){
	return m_turno;
}

double Assistente_Adm::getParticipacao_Lucros(){
	return m_participacao_lucros;
}
	
void Assistente_Adm::setTurno(string turno_){
	m_turno= turno_;
}

void Assistente_Adm::receber_participacao(double participacao_){
	m_participacao_lucros= participacao_;
	m_salario= m_salario + m_participacao_lucros;
}