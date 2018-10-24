#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "livro.h"

#define MAX_LIVROS 100

class Biblioteca
{
private:
	Livro* m_livros[MAX_LIVROS];
	   int m_qtde_livros[MAX_LIVROS];

public:
	Biblioteca();
	~Biblioteca();

	void adicionar_livro(Livro&);
	string buscar_por_titulo(string titulo_);
	string buscar_por_isbn(string isbn_);
	bool verificar_livro(string titulo_);
	int verificar_qtde_disponivel(string titulo_);

};



#endif