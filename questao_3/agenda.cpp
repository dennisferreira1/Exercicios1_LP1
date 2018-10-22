#include "agenda.h"

#include <iostream>

Agenda::Agenda(){
	m_total_contatos=0;
}
Agenda::~Agenda(){}

void Agenda::insereContato ( string nome_ , int idade_ , float altura_ ){

	if(m_total_contatos < MAX_CONTATOS){
		Pessoa* novoContato= new Pessoa(nome_, idade_, altura_);
		m_contatos[m_total_contatos++]= novoContato;
	}else{
		cout<<"Agenda cheia!"<<endl;
	}

}
void Agenda::removeContato ( string nome_ ){
	int index= buscaContato(nome_);

	for(int i= index; i<m_total_contatos-1; i++){
		m_contatos[i]= m_contatos[i+1];
	}
	delete m_contatos[m_total_contatos];
	m_total_contatos--;

	cout<<"\nContato '"<<nome_<<"' removido!"<<endl;

}
int Agenda::buscaContato ( string nome_ ){
	for(int index=0; index < m_total_contatos; index++){
		if(m_contatos[index]->getNome() == nome_){
			return index;
		}
	}

	return -1;
}
void Agenda::listaContato ( char letra){
	if(letra == ' '){
		cout<<"\n-----------------"<<endl;
		cout<<"Todos os contatos"<<endl;
		cout<<"-----------------"<<endl;
		for(int index=0; index < m_total_contatos; index++){
			cout<<m_contatos[index]->getNome()<<endl;
		}
	}else{
		cout<<"\n-----------------------------"<<endl;
		cout<<"Contatos que iniciam com '"<<letra<<"'"<<endl;
		cout<<"-----------------------------"<<endl;
		for(int index=0; index < m_total_contatos; index++)
		{
			if(m_contatos[index]->getNome()[0] == letra){
				cout<<m_contatos[index]->getNome()<<endl;
			}
		}
	}

}
void Agenda::imprimeContato (int i){

	cout<<(*m_contatos[i]);

}