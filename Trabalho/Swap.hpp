#ifndef SWAP_H
#define SWAP_H

#include <iostream>
#include <vector>

#include "Processo.hpp"

using namespace std;

class Swap {
	private:
		int id;
		vector<Processo>processos;
	public:
		Swap();
		void setId(int id);
		void setProcessos(Processo p);
		int getId();
		vector<Processo> getProcessos();
		void imprimeProcessos();
};
#endif
