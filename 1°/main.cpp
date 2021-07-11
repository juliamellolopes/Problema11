#include "Disco.hpp"
#include "Page.hpp"
#include "Swap.hpp"
#include "Memoria.hpp"
#include <string.h>
#include <string>
#include<stdio.h>
#include<stdlib.h>
#define MAX 1024
#define N 10

int tokenizar(char *fileNamePages, int *t);
void openFile(char *fileNamePages, Disco *d, Swap *s,  bool aux);
int procurarNoDisco(Disco *d);
int procurarNoDisco(Disco *d, Memoria *m, int id, int pagina);

int main(int argc, char** argv) {
	Page p1, p2, p3;
	
	Disco d[N];
	Swap s[N];
	Memoria m[N];
	
	char disco[] = "arquivos_exemplo.txt";
	char processo[] = "processos_exemplo.txt";
	
	openFile(disco, d, s, true);
	cout << endl;
	openFile(processo, d, s, false);
	
//	exibe a matriz disco
	for(int i = 0; i < 4; i++) {
		cout << "A" << d[i].getId() << ": ";
		d[i].imprimePages();
		cout << endl;
	}
	cout << endl;

//	exibe a matriz de processos
	for(int i = 0; i < 4; i++) {
		cout << "P" << s[i].getId() << ": ";
		s[i].imprimeProcessos();
		cout << endl;
	}
	
//	realiza manutencao
	for(int i = 0; i < 4; i++) {
		procurarNoDisco(d, m, 2, 3);
//		s[i].imprimeProcessos();
	}
	
	return 0;
}

int procurarNoDisco(Disco *d, Memoria *m, int id, int pagina) {
	int p;
	
	for(int i = 0; i < 4; i++) {
		if(id == d[i].getId()) {
			p = d[i].buscarPage(pagina);
			
			if(p != -1) {
				cout << p;
				break;
			}
		}
	}
}

void openFile(char *fileNamePages, Disco *d, Swap *s, bool aux) {
	FILE *pfile = fopen(fileNamePages,"r");
	char *result;
	char *tk;
	char strfile[MAX];

	int tokens[MAX];
	int cont;
	
	Page p;
	Processo pc;
	
	int quantDisco = 0;
	int quantSwap  = 0;
	
	if(pfile == NULL){
		cout << "Erro ao abrir o arquivo!";
		exit(1);
	} 
	
	while(!feof(pfile)){ 
		result = fgets(strfile, MAX, pfile);
		
		if(result){
			cont = tokenizar(result, tokens);
			
			if(aux) {
				d[quantDisco].setId(tokens[0]);
				
				for(int i=1; i < cont; i++) {
					p.setPage(tokens[i]);
	#include "Disco.hpp"
#include "Page.hpp"
#include "Swap.hpp"
#include "Memoria.hpp"

#include <string.h>
#include <string>
#include<stdio.h>
#include<stdlib.h>

#define MAX 1024
#define N 10

int tokenizar(char *fileNamePages, int *t);
void openFile(char *fileNamePages, Disco *d, Swap *s,  bool aux);
int procurarNaMemoria(Memoria *m, int id, int pagina);
int procurarNoDisco(Disco *d, int id, int pagina);
void carregaMemoria(Disco *d, Memoria *m, Memoria *m2, Swap *s, int aux);
void retornarParaDisco(Disco *d, int id, int page);

int main(int argc, char** argv) {
	Page p1, p2, p3;
	
	Disco d[N];
	Swap s[N];
	Memoria m[N];
	
	char disco[] = "arquivos_exemplo.txt";
	char processo[] = "processos_exemplo.txt";
	
	openFile(disco, d, s, true);
	cout << endl;
	openFile(processo, d, s, false);
	
//	exibe a matriz disco inicial
	cout << "DISCO INICIAL" << endl << endl;
	for(int i = 0; i < 4; i++) {
		cout << "A" << d[i].getId() << ": ";
		d[i].imprimePages();
		cout << endl;
	}

//	exibe a matriz de processos
	cout << endl << "MATRIZ SWAP COM PROCESSOS" << endl << endl;
	for(int i = 0; i < 4; i++) {
		cout << "P" << s[i].getId() << ": ";
		s[i].imprimeProcessos();
		cout << endl;
	}
	
	for(int i = 0; i < 4; i++) {
		carregaMemoria(d, m, &m[i], &s[i], i+1);
	}
	
	//	exibe a matriz disco apoz a manutencao
	cout << endl << "DISCO APOZ A MANUTENCAO" << endl << endl;
	for(int i = 0; i < 4; i++) {
		cout << "A" << d[i].getId() << ": ";
		d[i].imprimePages();
		cout << endl;
	}
	cout << endl;
	
	// matriz memoria apoz manutencao
	cout << endl << "MEMORIA APOZ A MANUTENCAO" << endl << endl;
	for(int i = 0; i < 4; i++) {
		m[i].imprimeMemoria();
		cout << endl;
	}
	
	cout << "\nPAGE MISS: ";
	for(int i=0; i < 1; i++ ) {
		cout << "P1: " << m[i].getContP1() << " - P2: " << m[i].getContP2() << " - P3: " << m[i].getContP3() << " - P4: " << m[i].getContP4() << endl;
	}
	
	cout << "FILES REQUEST: ";
	for(int i=0; i < 1; i++ ) {
		cout << "A1: " << m[i].getContA1() << " - A2: " << m[i].getContA2() << " - A3: " << m[i].getContA3() << " - A4: " << m[i].getContA4() << endl;
	}
	
	for(int i=0; i < 4; i++ ) {
		m[i].liberarMemoria(d);
	}
	
	//	exibe a matriz disco apoz a liberacao da memoria
	cout << endl << "DISCO APOZ LIBERACAO DA MEMORIA" << endl << endl;
	for(int i = 0; i < 4; i++) {
		cout << "A" << d[i].getId() << ": ";
		d[i].imprimePages();
		cout << endl;
	}
	cout << endl;
}

void carregaMemoria(Disco *d, Memoria *m, Memoria *m2, Swap *s, int aux) {
	vector<Processo> proc = s->getProcessos();
	Processo p;
	
	int x, valor;

	for(int i = 0; i < proc.size(); i++) {
		if(m2->tamProcessos() == 5) {
			m->liberarPrimeiroValor(&p);
		}
			
		x = procurarNaMemoria(m, proc[i].getId(), proc[i].getPage());

		if(x == -1) {
			valor = procurarNoDisco(d, proc[i].getId(), proc[i].getPage());
			if(valor != -1) {
				proc[i].setValor(valor);
			}
		} else {
			proc[i].setValor(x);
			aux = 0;
		}
		m2->setProcessos(proc[i], aux);
	}
}

int procurarNaMemoria(Memoria *m, int id, int pagina) {
	int p;
	
	for(int i = 0; i < 4; i++) {
		p = m[i].buscarPage(id, pagina);
		
		if(p != -1) 
			return p;
	}
	return -1;
}

int procurarNoDisco(Disco *d, int id, int pagina) {
	int p;
	
	for(int i = 0; i < 4; i++) {
		if(id == d[i].getId()) {
			p = d[i].buscarPage(pagina);
			
			if(p != -1)
				return p;
		}
	}
	return -1;
}

void openFile(char *fileNamePages, Disco *d, Swap *s, bool aux) {
	FILE *pfile = fopen(fileNamePages,"r");
	char *result;
	char *tk;
	char strfile[MAX];

	int tokens[MAX];
	int cont;
	
	Page p;
	Processo pc;
	
	int quantDisco = 0;
	int quantSwap  = 0;
	
	if(pfile == NULL){
		cout << "Erro ao abrir o arquivo!";
		exit(1);
	} 
	
	while(!feof(pfile)){ 
		result = fgets(strfile, MAX, pfile);
		
		if(result){
			cont = tokenizar(result, tokens);
			
			if(aux) {
				d[quantDisco].setId(tokens[0]);
				
				for(int i=1; i < cont; i++) {
					p.setPage(tokens[i]);
					
					d[quantDisco].setPages(p);
				}
				quantDisco++;
			} else {
				s[quantSwap].setId(tokens[0]);
				
				for(int i=1; i < cont - 1; i+= 2) {
					pc.setId(tokens[i]);
					pc.setPage(tokens[i + 1]);
					
					s[quantSwap].setProcessos(pc);
				}
				quantSwap++;
			}
		}
	}
	fclose(pfile);
}

int tokenizar(char *strfile, int *t) {
  	const char sep[] = "PA<>, ' '";
	char *tokens;
	int cont = 0;
	
	tokens = strtok(strfile, sep);
	
	while(tokens != NULL) {
		t[cont++] = atoi(tokens);
		tokens = strtok(NULL, sep);
	}
	return cont;	
}				
					d[quantDisco].setPages(p);
				}
				quantDisco++;
			} else {
				s[quantSwap].setId(tokens[0]);
				
				for(int i=1; i < cont - 1; i+= 2) {
					pc.setId(tokens[i]);
					pc.setPage(tokens[i + 1]);
					
					s[quantSwap].setProcessos(pc);
				}
				quantSwap++;
			}
		}
	}
	fclose(pfile);
}

int tokenizar(char *strfile, int *t) {
  	const char sep[] = "PA<>, ' '";
	char *tokens;
	int cont = 0;
	
	tokens = strtok(strfile, sep);
	
	while(tokens != NULL) {
		t[cont++] = atoi(tokens);
		tokens = strtok(NULL, sep);
	}
	return cont;	
}
