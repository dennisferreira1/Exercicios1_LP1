#include "menu_biblioteca.h"


Menu_Biblioteca::Menu_Biblioteca(){

	m_minha_biblioteca= new Biblioteca();

	this->menu_principal("MENU PRINCIPAL");
}

Menu_Biblioteca::~Menu_Biblioteca(){}

char Menu_Biblioteca::menu_principal(string titulo){

	char opcao;
 
 	do {
 		cout << "\n========================\n";
		cout << titulo;
		cout << "\n========================";
		cout << "\n 1 - Adicionar Livro";
		cout << "\n 2 - Buscar Livro Por Titulo";
		cout << "\n 3 - Buscar Livro Por ISBN";
		cout << "\n 4 - Verificar Se Livro Existe";
		cout << "\n 5 - Verificar Quantidade De Exemplares";
		cout << "\n 6 - Sair";
		cout << "\n Opcao: ";
		// lendo a opcao
		cin>>opcao;
		// remove o enter para nao dar problemas com o getline
		cin.ignore(); 
		 
		switch(opcao)
		{
			case '1' : adicionar_livro();
					break;
			case '2' : buscar_por_titulo();
					break;
			case '3' : buscar_por_isbn();
					break;
			case '4' : livroExiste();
					break;
			case '5' : verificar_qtde_disponivel();
					break;
			case '6' : // nada a fazer, apenas sair
					break;
			// Qualquer outra opcao diferente de 1,2,3 ou 4 eh considerada invalida
			default : cout << "\n Opcao invalida!";
		}
		cout<<endl;
	} while (opcao!='6');
	return opcao;
}

void Menu_Biblioteca::adicionar_livro(){

	string titulo, autor, editora, isbn;
	int ano, qtde, edicao;

	cout<<"\nTitulo: ";
	getline(cin,titulo);
	cout<<"Autor: ";
	getline(cin, autor);
	cout<<"Edicao: ";
	cin>>edicao; cin.ignore();
	cout<<"Editora: ";
	getline(cin, editora);
	cout<<"ISBN: ";
	getline(cin, isbn);
	cout<<"Ano: ";
	cin>>ano; cin.ignore();
	cout<<"Quantidade: ";
	cin>>qtde; cin.ignore();

	m_minha_biblioteca->adicionar_livro(titulo, autor, edicao, editora, isbn, ano, qtde);

}

void Menu_Biblioteca::buscar_por_titulo(){
	string titulo;
	cout<<"Titulo do Livro: ";
	getline(cin, titulo);

	int posicao_do_livro= m_minha_biblioteca->buscar_por_titulo(titulo);
	if(posicao_do_livro == -1){
		cout<<"Livro nao encontrado!"<<endl;
	}else{
		cout<<*(m_minha_biblioteca->getLivro(posicao_do_livro))<<endl;
	}
}

void Menu_Biblioteca::buscar_por_isbn(){
	string isbn;
	cout<<"ISBN do Livro: ";
	getline(cin, isbn);

	int posicao_do_livro= m_minha_biblioteca->buscar_por_isbn(isbn);
	if(posicao_do_livro == -1){
		cout<<"Livro nao encontrado!"<<endl;
	}else{
		cout<<*(m_minha_biblioteca->getLivro(posicao_do_livro))<<endl;
	}

}

void Menu_Biblioteca::livroExiste(){
	string titulo;
	cout<<"Titulo do Livro: ";
	getline(cin, titulo);

	if(m_minha_biblioteca->livroExiste(titulo) != -1){
		cout<<"Livro existente na biblioteca!\n";
	}else{
		cout<<"Livro nao existente na biblioteca!\n";
	}
}

void Menu_Biblioteca::verificar_qtde_disponivel(){
	string titulo;
	cout<<"Titulo do Livro: ";
	getline(cin, titulo);

	if(m_minha_biblioteca->verificar_qtde_disponivel(titulo) != -1){

		cout<<m_minha_biblioteca->verificar_qtde_disponivel(titulo)<<" livros disponiveis!"<<endl;
	}else{
		cout<<"Livro inexistente!"<<endl;
	}
}
