#ifndef VENDEDOR_H
#define VENDEDOR_H


class Vendedor : private Empregado{
private :
	double m_meta_mensal ;
	double m_desconto_nivel1 ;
public:
	 Vendedor (string nome_ , int idade_ , string matricula_ , double salario_ , double meta_ , double desconto_ ):
	 Empregado (nome_ , idade_ , matricula_ , salario_), m_meta_mensal(meta_), m_desconto_nivel1(desconto_) {};
	 ~ Vendedor () {};
	 double getMetaMensal (){ return m_meta_mensal ; };
	 double getDescontoN1 (){ return m_desconto_nivel1 ; };
};

#endif