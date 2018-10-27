#ifndef GERENTE_H
#define GERENTE_H



class Gerente : private Empregado{
private :
	string m_setor ;
	double m_desconto_nivel2 ;
public :
	 Gerente(string nome_, int idade_, string matricula_, double salario_, string setor_, double desconto_):
	 Empregado(nome_, idade_, matricula_, salario_), m_setor(setor_), m_desconto_nivel2(desconto_){};
	 
	 ~Gerente(){};

	 string getSetor(){ return m_setor ; };
	 
	 double getDescontoN2(){ return m_desconto_nivel2 ; };

	 void imprimeDados(){
	    cout << " Nome : " << m_nome << "\t"
			 << " Idade " << m_idade << "\t"
			 << " Matricula : " << getMatricula () << endl
			 << " Salario : " << getSalario () << "\t"
			 << " Setor : " << m_setor << endl
			 << " Desconto N2: " << m_desconto_nivel2
			 << endl ; 
	 };
};

#endif