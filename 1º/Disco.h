#ifndef DISCO_H
#define DISCO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

typedef struct Disc{
	char *name;
	vector<int>pages;	
}Disc;

typedef struct Processo{
	char *name;
	char *page;	
}Processo;

typedef struct Swap{
	char *name;
	vector<Processo>pages;	
}Swap;

typedef struct Token{
	char *name;
}Token;

class Disco
{
	private:
		vector<Disc>pg;
		vector<Swap>s;
	public:
		Disco();
		void imprimir();
		void imprimirSwap();
		void tokenizar(const char *fileNamePages, bool b);
		void tokenizarProcessos(const char *fileNamePages, bool b);
//		void recebimento();
};
#endif
