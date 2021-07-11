#ifndef PROCESSO_H
#define PROCESSO_H
#include <iostream>

using namespace std;

class Processo{
	private:
		int id;
		int page;
		int valor;
	public:
		Processo();
		void setId(int id);
		void setPage(int page);
		void setValor(int valor);
		int getId();
		int getPage();
		int getValor();
};
#endif
