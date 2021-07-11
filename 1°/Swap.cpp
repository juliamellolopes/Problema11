#include "Swap.hpp"

Swap::Swap() {
	setId(0);
}

void Swap::setId(int id) {
	this->id = id;
}

void Swap::setProcessos(Processo p) {
	this->processos.push_back(p);
}

int Swap::getId() {
	return this->id;
}

void Swap::imprimeProcessos() {
	for(int i=0; i < processos.size(); i++) {
		cout << " <" << processos[i].getId() << "-" << processos[i].getPage() << ">";
	}
}
