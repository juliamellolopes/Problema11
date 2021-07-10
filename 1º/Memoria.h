#ifndef MEMORIA_H
#define MEMORIA_H
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <iostream>
#define TAM 5
using namespace std;

typedef struct Memori{
	char *name;
	int page;
//	Disc() = default;
//	Disc(char* name,std::vector<int>pages){
//          this->name = (char*)malloc(strlen(name)+1);
//          strcpy(this->name,name);
//          this->pages = pages;	
//    }
}Memori;

class Memoria
{
	private:
		//vector<Memori>programs;
		Memori m;
		int memoria[TAM];
		//vector<string>swap;
	public:
		int static contD;
		int static contM;
		int static contA1;
		int static contA2;
		int static contA3;
		int static contA4;
		int static contswap;
		Memoria(const char* fileNamePrograms);
		//void Processamento(int *pg);
		//void Contabilizacao();
		//void retorno();
};
#endif
