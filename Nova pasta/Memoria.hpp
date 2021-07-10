#ifndef MEMORIA_H
#define MEMORIA_H

#include <iostream>
#include <vector>

#include "Processo.hpp"

using namespace std;

class Memoria {
	private:
		int id;
		vector<Processo> processos;
	public:
		Memoria();
		
		void setId(int id);
		void setProcessos(Processo p);
		
		int getId();
		int getValor();
};
#endif
