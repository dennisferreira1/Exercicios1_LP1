#include "data.h"

#include <iostream>

using namespace std;


Data::Data(int dia_, int mes_, int ano_):m_dia(dia_), m_mes(mes_), m_ano(ano_)
{
	if(!isValid())
	{
		m_dia= 1;
		m_mes= 1;
		m_ano= 1900;
	}

}

Data::Data(){

	time(&timer);
	horarioLocal= localtime(&timer);

	m_dia= horarioLocal->tm_mday;
	m_mes= horarioLocal->tm_mon + 1;
	m_ano= horarioLocal->tm_year + 1900;
}
Data::~Data(){}

bool Data::isValid(){
	if (m_dia<=0 || m_mes<=0 || m_ano<=0 || m_mes>12 || m_dia>31) {
		return false;
	}
	if (m_dia ==31 && (m_mes==2 || m_mes==4 || m_mes==6 || m_mes==9 || m_mes==11)) {
		return false;
	}
	if ((m_dia==30 && m_mes==2)) {
		return false;
	}
	if ((m_dia==29) && m_mes==2 && !(m_ano%4==0)) {
		return false;
	}
	return true;
}


bool Data::isMes31(){
	if(m_mes==1 || m_mes==3 || m_mes==5 || m_mes==7 || m_mes==8 || m_mes==10 || m_mes==12){
		return true;
	}else{ return false; }
}
bool Data::isMes30(){
	if(m_mes==4 || m_mes==6 || m_mes==9 || m_mes==11){
		return true;
	}else{ return false; }
}

bool Data::isMes2(){
	if(m_mes==2){
		return true;
	}else{ return false; }

}

bool Data::isBissexto(){
	if (m_ano%4==0) {
		return true;
	}else{ return false; }
}

void Data::somarDias(int quantidade)
{
	int cont=1;
	while(cont <= quantidade){
		m_dia++;
		if(isMes31() && m_dia > 31){
			m_dia=1;
			somarMeses(1);
		}
		if(isMes30() && m_dia > 30){
			m_dia=1;
			somarMeses(1);
		}
		if(!isBissexto() && isMes2() && m_dia > 28){
			m_dia=1;
			somarMeses(1);
		}
		if(isBissexto() && isMes2() && m_dia > 29){
			m_dia=1;
			somarMeses(1);
		}

		cont++;
	}
	
}
void Data::somarMeses(int quantidade){
	int cont=1;
	while(cont <= quantidade){
		m_mes++;
		if(m_mes > 12){
			m_mes=1;
			somarAnos(1);
		}
		cont++;
	}
}
void Data::somarAnos(int quantidade){
	m_ano += quantidade;
}
void Data::proximoDia(){
	somarDias(1);
}

ostream& operator<< (ostream& ostr, const Data& data){
	ostr<<data.m_dia<<"/"<<data.m_mes<<"/"<<data.m_ano;
	return ostr;
}