#ifndef DISCO_H
#define DISCO_H
#include <vector>
#include <iostream>
#include <string>
#include "Page.hpp"

using namespace std;

class Disco{
	private:
		int id;
		vector<Page>pages;
	public:
		Disco();
		Disco(int id, int page);
		int getId();
		void imprimePages();
		int buscarPage(int page);
		void retornaParaDisco(int id, int page, int valor);
		void setPages(Page p);
		void setId(int id);
};
#endif
