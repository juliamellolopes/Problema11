#include "Memoria.hpp"

Memoria::Memoria(){
	setId(0);
}

void Memoria::setId(int id){
	this->id = id;
}

int Memoria::getId(){
	return this->id;
}

void Memoria::setProcessos(Processo p) {
	this->processos.push_back(p);
}
