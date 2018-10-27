#ifndef MENU_BIBLIOTECA_H
#define MENU_BIBLIOTECA_H

#include "biblioteca.h"

class Menu_Biblioteca
{
private:
	Biblioteca* m_minha_biblioteca;

public:
	Menu_Biblioteca();
	~Menu_Biblioteca();

	char menu_principal(string titulo);

	void adicionar_livro();

	void buscar_por_titulo();

	void buscar_por_isbn();
	
	void livroExiste();

	void verificar_qtde_disponivel();
	
};

#endif