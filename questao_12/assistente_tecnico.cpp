#include "assistente_tecnico.h"


Assistente_Tecnico::Assistente_Tecnico(string nome_, int idade_, int matricula_, double salario_):
									Funcionario(nome_, idade_, matricula_,salario_),m_bonus_salarial(0){}

Assistente_Tecnico::~Assistente_Tecnico(){}

Funcionario Assistente_Tecnico::getSupervisor(){
	return m_supervisor;
}
double Assistente_Tecnico::getBonusSalarial(){
	return m_bonus_salarial;
}

void Assistente_Tecnico::atribuir_supervisor(Funcionario supervisor_){
	m_supervisor= supervisor_;
}

void Assistente_Tecnico::receber_bonus(double bonus_){
	m_bonus_salarial= bonus_;
	m_salario= m_salario + m_bonus_salarial;
}