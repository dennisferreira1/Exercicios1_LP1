#include <iostream>
using namespace std;

#include "tempo.h"

Tempo::Tempo(){}
Tempo::~Tempo(){}

void Tempo::lerTempo(){
	cout<<"\nDigite o tempo no formato (hh mm ss): ";
	cin>>hh>>mm>>ss;

}
int Tempo::converteEmSegundos(){

	return (hh*3600)+(mm*60)+(ss);;
}

void Tempo::mostraTempo(){
	cout<<hh<<":"<<mm<<":"<<ss<<" - "<<converteEmSegundos()<<" s."<<endl;
}
