#include "Disco.hpp"

Disco::Disco(){
	id = 0;
}

Disco::Disco(int id, int page){
	setId(id);
}

int Disco::getId(){
	return this->id;	
}

void Disco::imprimePages(){
	
	for(int i=0; i < pages.size(); i++){
		cout << " " << pages[i].getPage();
	}
}

void Disco::setPages(Page p){
	this->pages.push_back(p);
}

void Disco::setId(int id){
	this->id = id;
}

int Disco::buscarPage(int page){
	int aux;
	
	for(int i=0; i < pages.size(); i++){
		if(page == i+1){
			aux = pages[i].getPage();
			pages[i].setPage(-1);
			return aux;
		}
	}
	return -1;
}

void Disco::retornaParaDisco(int id, int page, int valor){
	
	for(int i=0; i < this->pages.size(); i++){
		if(getId() == id){
			if(i+1 == page){
				if(valor != -1){
					this->pages[i].setPage(valor);
				}
			}
		}
	}
}
