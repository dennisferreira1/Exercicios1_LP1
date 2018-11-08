#ifndef OFICINA_H
#define OFICINA_H

#include "lista.h"
#include "funcionario.h"

class Oficina
{
private:
	Lista<Funcionario> m_funcionarios;
	 			double m_lucro;
public:
	Oficina();
	~Oficina();

	void adicionar_funcionario();
	void pagar_participacao();
	void pagar_bonus();
	
};
#endif		