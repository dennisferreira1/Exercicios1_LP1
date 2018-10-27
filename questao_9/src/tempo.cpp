#include <iostream>
using namespace std;

#include "tempo.h"

Tempo::Tempo(){}
Tempo::~Tempo(){}


int Tempo::converteEmSegundos(){

	return (hh*3600)+(mm*60)+(ss);;
}

ostream& operator<< (ostream& ostr, Tempo& t){
	ostr<<t.hh<<":"<<t.mm<<":"<<t.ss<<" - "<<t.converteEmSegundos()<<" s."<<endl;
	return ostr;
}

istream& operator>> (istream& istr, Tempo& t){
	cout<<"\nDigite o tempo no formato (hh mm ss): ";
	istr>>t.hh>>t.mm>>t.ss;
	return istr;
}