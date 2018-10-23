#ifndef  DATA_H
#define DATA_H

#include <iostream>
#include <ctime>
using namespace std;

class Data
{
private:
	int m_dia;
	int m_mes;
	int m_ano;
	struct tm* horarioLocal;
	time_t timer;

public:

	Data(int dia_, int mes_, int ano_);
	Data();
	~Data();

	bool isValid();
	bool isMes31();
	bool isMes30();
	bool isMes2();
	bool isBissexto();

	void somarDias(int quantidade);
	void somarMeses(int quantidade);
	void somarAnos(int quantidade);
	void proximoDia();

	friend ostream& operator<< (ostream& ostr, const Data& data);

};



#endif