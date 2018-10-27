#ifndef LIVRO_H
#define LIVRO_H

#include <string>
#include <iostream>
using namespace std;

class Livro
{
private:
	string m_titulo;
	string m_autor;
	   int m_edicao;
	string m_editora;
	string m_isbn;
	   int m_ano;

public:
	Livro(string m_titulo, string m_autor, int m_edicao, string m_editora, string m_isbn, int m_ano);
	~Livro();

	//Métodos Getters

	string getTitulo();
	string getAutor();
	   int getEdicao();
	string getEditora();
	string getIsbn();
	   int getAno();

	friend ostream& operator<< (ostream& ostr, const Livro& l);
	
};



#endif