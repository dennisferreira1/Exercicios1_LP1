#include <iostream>

#include "data.h"

using namespace std;

int main(){
	Data d1(23, 10, 2018);
	cout<<d1<<endl;

	d1.proximoDia();
	cout<<d1<<endl;

	d1.somarDias(8);
	cout<<d1<<endl;

	d1.somarMeses(3);
	cout<<d1<<endl;

	d1.somarDias(27);
	cout<<d1<<endl;

	d1.proximoDia();
	cout<<d1<<endl;

	d1.somarMeses(9);
	cout<<d1<<endl;

	d1.somarDias(60);
	cout<<d1<<endl;

	d1.somarDias(2);
	cout<<d1<<endl;

	d1.somarDias(28);
	cout<<d1<<endl;

	d1.proximoDia();
	cout<<d1<<endl;

	d1.somarDias(365);
	cout<<d1<<endl;

	d1.somarAnos(9);
	cout<<d1<<endl;

	return 0;
}