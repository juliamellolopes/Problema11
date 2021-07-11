#include "Disco.hpp"

Disco::Disco() {
	id = 0;
}

Disco::Disco(int id, int page) {
	setId(id);
}

int Disco::getId() {
	return this->id;	
}

void Disco::imprimePages() {
	for(int i=0; i < pages.size(); i++) {
		cout << " " << pages[i].getPage();
	}
}

void Disco::setPages(Page p) {
	this->pages.push_back(p);
}

void Disco::setId(int id) {
	this->id = id;
}

int Disco::buscarPage(int page) {
	for(int i=0; i < pages.size(); i++) {
		if(page == i+1) {
			return pages[i].getPage();
		}
	}
	return -1;
}
