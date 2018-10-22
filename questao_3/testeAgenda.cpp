#include "agenda.h"

#include <iostream>


int main(){

	Agenda* agenda1= new Agenda();

	agenda1->insereContato("Dennis", 30, 1.75);
	agenda1->insereContato("Dede", 30, 1.75);
	agenda1->insereContato("Didi", 30, 1.75);
	agenda1->insereContato("Ferreira", 30, 1.75);
	agenda1->insereContato("Silva", 30, 1.75);
	agenda1->insereContato("Joao", 25, 1.70);
	agenda1->insereContato("Maria", 20, 1.75);

	agenda1->listaContato('D');
	agenda1->listaContato(' ');
	
	cout<<"\n--------------------------------\n";
	cout<<"Impresao dos dados dos contatos\n";
	cout<<"--------------------------------\n";
	agenda1->imprimeContato(0);
	agenda1->imprimeContato(4);
	agenda1->imprimeContato(2);


	agenda1->removeContato("Dennis");

	agenda1->listaContato(' ');


	return 0;
}