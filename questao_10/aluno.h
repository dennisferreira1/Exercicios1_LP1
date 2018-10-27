#ifndef ALUNO_H
#define ALUNO_H



#include <string>
using namespace std;

class Aluno: public Pessoa
{
private:
	string m_matricula;
public:
	Aluno(string nome_, int idade_, string matricula_): Pessoa(nome_, idade_), m_matricula(matricula_){};
	~Aluno(){};

	string getMatricula(){ return m_matricula;};
	
};

#endif