#include <iostream>

#include "data.h"

using namespace std;

int main(){
	Data d1(20, 10, 2018);
	Data d2;

	cout<<d1<<endl;
	cout<<d2<<endl<<endl;

	d1.proximoDia();
	cout<<d1<<endl;
	d2.proximoDia();
	cout<<d2<<endl;

	d1.somarDias(8);
	cout<<d1<<endl;
	d2.somarDias(8);
	cout<<d2<<endl;

	d1.somarMeses(3);
	cout<<d1<<endl;
	d2.somarMeses(3);
	cout<<d2<<endl;
	d2.somarAnos(9);
	cout<<d2<<endl;

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