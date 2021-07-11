#ifndef MEMORIA_H
#define MEMORIA_H
#include <iostream>
#include <vector>
#include "Processo.hpp"
#include "Disco.hpp"

using namespace std;

static int contP1 = 0;
static int contP2 = 0;
static int contP3 = 0;
static int contP4 = 0;

static int contA1 = 0;
static int contA2 = 0;
static int contA3 = 0;
static int contA4 = 0;

class Memoria {
	private:
		int id;
		vector<Processo>processos;
	public:
		Memoria();
		void setId(int id);
		void setProcessos(Processo p, int aux);
		int getId();
		vector<Processo>getProcessos();
		void imprimeMemoria();
		int buscarPage(int id, int page);
		void liberarPrimeiroValor(Processo *p);
		int tamProcessos();
		void liberarMemoria(Disco *d);
		int getContP1();
		int getContP2();
		int getContP3();
		int getContP4();
		int getContA1();
		int getContA2();
		int getContA3();
		int getContA4();
};
#endif
