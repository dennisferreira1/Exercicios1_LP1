#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "livro.h"

#define MAX_LIVROS 100

class Biblioteca
{
private:
	Livro* m_livros[MAX_LIVROS];
	   int m_qtde_livros[MAX_LIVROS];
	   int m_total_livros;

public:
	Biblioteca();
	~Biblioteca();

	Livro* getLivro(int posicao);

	//Adiciona livros à biblioteca recebendo "titulo", "autor", "edicao", "editora", "isbn", 
 	//"ano" e a quantidade de exemplares ("qtde") como parâmetros. 
   void adicionar_livro(string titulo_, string autor_, int edicao_,
 					string editora_, string isbn_, int ano_, int qtde);

	//Busca um livro recebendo o titulo como parâmetro e retornando o livro buscado. 
	int buscar_por_titulo(string titulo_);

	//Busca um livro recebendo o isbn como parâmetro e retornando o livro buscado. 
	int buscar_por_isbn(string isbn_);

	//Verifica se um livro existe recebendo o título por parâmetro e retornando a posição que o livro se encontra
	int livroExiste(string titulo_);

	//Verifica a quantidade de exemplares disponível de um determinado livro recebendo o título por parãmetro 
	//e retornando a quantidade.
	int verificar_qtde_disponivel(string titulo_);

};



#endif