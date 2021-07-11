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

void Memoria::setProcessos(Processo p, int aux) {
	if(aux != 0) {
		contP1 = (aux == 1) ? contP1 += 1 : contP1;
		contP2 = (aux == 2) ? contP2 += 1 : contP2;
		contP3 = (aux == 3) ? contP3 += 1 : contP3;
		contP4 = (aux == 4) ? contP4 += 1 : contP4;
	}
	
	contA1 = (p.getId() == 1) ? contA1 += 1 : contA1;
	contA2 = (p.getId() == 2) ? contA2 += 1 : contA2;
	contA3 = (p.getId() == 3) ? contA3 += 1 : contA3;
	contA4 = (p.getId() == 4) ? contA4 += 1 : contA4;
	
	this->processos.push_back(p);
}

int Memoria::buscarPage(int id, int page) {
	int aux;
	
	for(int i=0; i < processos.size(); i++) {
		if(id == processos[i].getId()) {
			if(page == processos[i].getPage()) {
				aux = processos[i].getValor();
				processos[i].setValor(-1);
				return aux;
			}
		}
	}
	return -1;
}

void Memoria::imprimeMemoria() {
	for(int i=0; i < processos.size(); i++) {
		cout << " <" << processos[i].getId() << "-" << processos[i].getPage() << " : " << processos[i].getValor() << ">\t";
	}
}

void Memoria::liberarPrimeiroValor(Processo *p) {
	*p = processos[0];
	this->processos.erase(this->processos.begin(), this->processos.begin() + 1);
}

int Memoria::tamProcessos() {
	return this->processos.size();
}

vector<Processo> Memoria::getProcessos() {
	return this->processos;
}

void Memoria::liberarMemoria(Disco *d) {
	Processo p;
	
	for(int i=0; i < this->processos.size(); i++) {
		p = processos[i];
		
		for(int i=0; i < 4; i++) {
			d[i].retornaParaDisco(p.getId(), p.getPage(), p.getValor());
		}
	}
}

int Memoria::getContP1() {
	return contP1;
}

int Memoria::getContP2() {
	return contP2;
}

int Memoria::getContP3() {
	return contP3;
}

int Memoria::getContP4() {
	return contP4;
}

int Memoria::getContA1() {
	return contA1;
}

int Memoria::getContA2() {
	return contA2;
}

int Memoria::getContA3() {
	return contA3;
}

int Memoria::getContA4() {
	return contA4;
}
