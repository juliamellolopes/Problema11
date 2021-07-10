#include "Disco.h"


Disco::Disco(){
}
void Disco::tokenizar(const char *fileNamePages, bool b){
  FILE *pfile = fopen(fileNamePages,"r");
  if(pfile == NULL){
  	cout << "Erro ao abrir o arquivo!";
  	exit(1);
  } 
  char *result;
  char *tk;
  char strfile[255];
  const char *token = ", <>";
  Disc line;
    while(!feof(pfile)){ 
        result = fgets(strfile, 1000, pfile);
        if(result){
            line.pages.clear();  
	        tk = strtok(strfile,token);
	        line.name = (char*)malloc(strlen(tk)+1);
	        strcpy(line.name,tk);
 			while(tk = strtok(NULL,token)){
	            line.pages.push_back(atoi(tk));
	        	}
	       	this->pg.push_back(line);
		}	
    }
  fclose(pfile);
}
void Disco::tokenizarProcessos(const char *fileNamePages, bool b){
	FILE *pfile = fopen(fileNamePages,"r");
  if(pfile == NULL){
  	cout << "Erro ao abrir o arquivo!";
  	exit(1);
  } 
  char *result;
  char *tk;
  char strfile[1000];
  const char *token = ", <>";
  Processo p;
  Swap sp;
    while(!feof(pfile)){ 
        result = fgets(strfile, 1000, pfile);
        if(result){
           	sp.pages.clear();  
	       	tk = strtok(strfile,token);
	        p.name = (char*)malloc(strlen(tk)+1);
	        strcpy(p.name,tk);
	        while(tk = strtok(NULL,token)){					
			    p.page = (char*)malloc(strlen(tk)+1);
			 	sp.pages.push_back(p); 
			}
		}	
		this->s.push_back(sp);
	}
fclose(pfile);	
}	
    
void Disco::imprimir(){
	 for(int i = 0; i < pg.size();i++){
		for(int j = 0; j < pg[i].pages.size(); j++){
			cout << " " << pg[i].pages[j];
		}
		cout << endl;
	}
}
void Disco::imprimirSwap(){
	for(int i = 0; i < s.size(); i++){
		for(int j = 0; j < s[i].pages.size(); j++){
	       		cout << " " << s[i].pages[j].page;
		}
	cout << endl;
	}
}


