

#include "biblioteca.h"


Biblioteca::Biblioteca(){
	m_total_livros=0;

}
Biblioteca::~Biblioteca(){}

Livro* Biblioteca::getLivro(int posicao){
	return m_livros[posicao];
}

void Biblioteca::adicionar_livro(string titulo_, string autor_, int edicao_,
 	string editora_, string isbn_, int ano_, int qtde){
	if(m_total_livros < MAX_LIVROS){
		Livro* novo= new Livro(titulo_, autor_, edicao_, editora_, isbn_, ano_);
		m_livros[m_total_livros]= novo;
		m_qtde_livros[m_total_livros]= qtde;
		m_total_livros++;
		cout<<"Livro adicionado!"<<endl;
	}
	else{
		cout<<"Biblioteca cheia. Nao foi possivel adicionar."<<endl;
	}

}
int Biblioteca::buscar_por_titulo(string titulo_){

	for(int i=0; i<m_total_livros; i++){
		if(m_livros[i]->getTitulo() == titulo_){
			return i;
		}
	}
	return -1;
}

int Biblioteca::buscar_por_isbn(string isbn_){

	for(int i=0; i<m_total_livros; i++){
		if(m_livros[i]->getIsbn() == isbn_){
			return i;
		}
	}
	return -1;
}

int Biblioteca::livroExiste(string titulo_){

	for(int i=0; i<m_total_livros; i++){
		if(m_livros[i]->getTitulo() == titulo_){
			return i;
		}
	}
	return -1;
}

int Biblioteca::verificar_qtde_disponivel(string titulo_){

	int posicao_do_livro= livroExiste(titulo_);
	if(posicao_do_livro == -1){
		return -1;
	}else{
		return m_qtde_livros[posicao_do_livro];
	}

}