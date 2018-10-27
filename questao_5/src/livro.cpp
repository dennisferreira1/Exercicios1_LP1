#include "livro.h"


Livro::Livro(string titulo_, string autor_, int edicao_, string editora_, string isbn_, int ano_):
	m_titulo(titulo_), m_autor(autor_), m_edicao(edicao_), m_editora(editora_), m_isbn(isbn_), m_ano(ano_){}

Livro::~Livro(){}

string Livro::getTitulo(){
	return m_titulo;
}
string Livro::getAutor(){
	return m_autor;
}
int Livro::getEdicao(){
	return m_edicao;
}
string Livro::getEditora(){
	return m_editora;
}
string Livro::getIsbn(){
	return m_isbn;
}
int Livro::getAno(){
	return m_ano;
}

ostream& operator<< (ostream& ostr, const Livro& l){
	ostr<<"\n-----------------------"<<endl
		<<"DADOS DO LIVRO"<<endl
		<<"-----------------------"<<endl
		<<"Titulo: "<<l.m_titulo<<endl
		<<"Autor: "<<l.m_autor<<endl
		<<"Edicao: "<<l.m_edicao<<endl
		<<"Editora: "<<l.m_editora<<endl
		<<"ISBN: "<<l.m_isbn<<endl
		<<"Ano: "<<l.m_ano;

	return ostr;
}
