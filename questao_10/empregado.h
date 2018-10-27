#ifndef EMPREGADO_H
#define EMPREGADO_H


class Empregado: public Pessoa
{
private :
	 string m_matricula ;
	 double m_salario ;
public :
	 Empregado( string nome_, int idade_, string matricula_, double salario_):
		 Pessoa(nome_, idade_), m_matricula(matricula_), m_salario(salario_){};
	 ~ Empregado(){};
	 string getMatricula(){ return m_matricula ; };
	 double getSalario(){ return m_salario ; };
};

#endif