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
  Processo p;
  Swap sp;
  bool aux = false;
    while(!feof(pfile)){ 
        result = fgets(strfile, 1000, pfile);
        if(result){
            line.pages.clear();  
	        tk = strtok(strfile,token);
	        
	        if(b){
	        	line.name = (char*)malloc(strlen(tk)+1);
	            strcpy(line.name,tk);
			}else{
				sp.name = (char*)malloc(strlen(tk)+1);
				strcpy(sp.name,tk);
			}
	        if(b){
				while(tk = strtok(NULL,token)){
	            	line.pages.push_back(atoi(tk));
	        	}
	         	this->pg.push_back(line);	
			}else{
//				while(tk = strtok(NULL,token)){
//			    	if(aux){
//			    		p.page = atoi(tk);
//			    		aux = false;
//			    		sp.pages.push_back(p);
//					}else{
//						p.name = (char*)malloc(strlen(tk)+1);
//						strcpy(p.name,tk);
//						aux = true;
//					}	
//	        	}
				//s.push_back(sp);
			}
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
  //Disc line;
  Processo p;
  Swap sp;
  bool aux = false;
    while(!feof(pfile)){ 
        result = fgets(strfile, 1000, pfile);
        if(result){
           sp.pages.clear();  
	        tk = strtok(strfile,token);
	        
//	        if(b){
//	        	line.name = (char*)malloc(strlen(tk)+1);
//	            strcpy(line.name,tk);
//			}else{
				sp.name = (char*)malloc(strlen(tk)+1);
				strcpy(sp.name,tk);
//			}
//	        if(b){
//				while(tk = strtok(NULL,token)){
//	            	line.pages.push_back(atoi(tk));
//	        	}
//	         	this->pg.push_back(line);	
//			}else{
				//vector<Token>vet;
				while(tk = strtok(NULL,token)){
					
				//	cout << " " << stoi(tk);
				//	vet.push_back(tk);
					//cout << " " <<tk;
			    	if(aux){
			    		p.page = (char*)malloc(strlen(tk)+1);
						strcpy(p.page,tk);
			    		aux = false;
			    		cout << " " <<p.page;
			    		
			    		sp.pages.push_back(p);
					}else{
						p.name = (char*)malloc(strlen(tk)+1);
						strcpy(p.name,tk);
						aux = true;
					}	
	        	}
				s.push_back(sp);
//				for(int i = 0; i < vet.size(); i+=2){
//					//p.name = (char*)malloc(strlen(vet[i])+1);
//					strcpy(p.name,vet[i]);
//					p.page = atoi(vet[i]+1);
//				cout << " "<<p.name;
//				cout << " " <<p.page;
//				}
			}
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
	        	cout << " " << s[i].pages[j].name;
	       		cout << " " << s[i].pages[j].page;
		}
	cout << endl;
	}
}


