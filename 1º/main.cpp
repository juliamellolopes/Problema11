#include <iostream>
#include "Memoria.h"
#include "Disco.h"
using namespace std;

int main(){
//	Disco d;
	int cont =0;
// Memoria m("processos_exemplo.txt");
 Disco d; 
 d.tokenizar("arquivos_exemplo.txt",true);
 d.tokenizarProcessos("processos_exemplo.txt",false);
 cout << endl;
 d.imprimir();
 cout << endl;
 d.imprimirSwap();
return 0;
}
