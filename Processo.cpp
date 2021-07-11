#include "Processo.hpp"

Processo::Processo() {
	setId(0);
	setPage(0);
	setValor(-1);
}
		
void Processo::setId(int id) {
	this->id = id;
}

void Processo::setPage(int page) {
	this->page = page;	
}

void Processo::setValor(int valor) {
	this->valor = valor;	
}

int Processo::getId() {
	return this->id;
}

int Processo::getPage() {
	return this->page;
}
int Processo::getValor() {
	return this->valor;
}
