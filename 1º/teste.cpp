#include "Disco.h"
// #include <iostream>
// #include <string>
// #include "Memoria.h"
// using namespace std;
#define TAM 5
mudanca


como criar uma maquina virtual - virtual box

torrent
ubuntu 20.04
mahou tsukai no yome

ijiranaide, nagatoro-san

int main(){
 //ao iniciar a execu��o deve preencher o disco
 // abrir o arquivo de processos para exxecutar: 
 // peenchr cada processo x, com 5 posi��es em memoria. retirando do disco as partes solicitadas
 // no fim libere a memoria item a item 
 //mostar a lista de processos na tela que foram atendidos 
 
 	// Memoria m;
 	Disco d("files/pages","files/programs");
	 char *memoria [TAM];

	 std::vector<string> swap;
	P2

	int mem_size = 0
	int count_mem = 1;
	int count_disk = 1;
	max_size = 2
	 memoria[
		 "a1,2",
		 "a2,3"
	 ]
	 
	 mem_size = 2
	max_size == mem_size? 
	swap[
		"a3,10",
		"a4,20"
	]

	 strcmp(memoria[i],"p.Ax,p.numero")
	 P2 
	 3
	 
	 strcmp(memoria[i],"A3,50")
	
	for(auto &&i:d.pg){
		for(auto &&j:i.pages){

		}
	}
	for(int i = 0 ;i < d.pg.size();i++){
		printf("%s",)
	}
	d.pg.at(0).pages.at(0) == 3
	asda


	return 0;
}
#pragma once
#include <vector>

struct cDisc{
	char *name;// A1,A2,A3,A4
	std::vector<int> pages;	// *,1,2,5,20
};

/*
A1,
3,1,2,3,8
cDisc
name = A1
pages[] = 3,1,2,3,8
*/

class Disco
{
	private:
		/
		std::vector<cDisc> programs;
		// cDisc* programs;
		// cDisc* pages;
		
	public:
		std::vector<cDisc> pg;
		int findPage(const char* A,int number);

		Disco(const char* fileNamePages,const char* fileNamePrograms);

};
// #endif
#include "Disco.h"
#include <cstring>
#include <cstdio>
#include <cstdlib>


Disco::Disco(const char * fileNamePages,const char* fileNamePrograms){
  FILE* pfile = fopen(fileNamePages,"r");
  if(pfile){

    char strfile[255];
    const char *token = ",";
    // while(fgets(strfile,255,pfile)){  //- 1 metodo
    
    while(!feof(pfile)){ // - 2 metodo
        fscanf(pfile,"%s\n",strfile);// - 2 metodo

        // printf("%s \n",strfile);
        cDisc line;
        line.pages.clear();
        
        //A1,3,1,2,3,8
        //trabalhando com a string
        char* tk = strtok(strfile,token);
        //A1 
        

        
        line.name = (char*)malloc(strlen(tk)+1);
        strcpy(line.name,tk);
        //line.name = A1

        while(tk = strtok(NULL,token)){
          // A1,3,1,2,3,8
          //3
          line.pages.push_back(atoi(tk));
        }
        this->pg.push_back(line);

        
        

      
    }
  }
  fclose(pfile);
}
