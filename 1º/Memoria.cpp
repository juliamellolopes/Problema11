//#include "Memoria.h"
//#include <cstring>
//#include <cstdio>
//#include <cstdlib>
//#include <iostream>
//using namespace std;
//
//int Memoria::contD = 0;
//int Memoria::contM = 0;
//int Memoria::contA1 = 0;
//int Memoria::contA2 = 0;
//int Memoria::contA3 = 0;
//int Memoria::contA4 = 0;
//int Memoria::contswap = 0;
//
//Memoria::Memoria(const char* fileNamePrograms){
//  for(int i = 0; i < TAM; i++){
//  	memoria[i] = 0;
//  }	
//  swap.push_back(0);
//  FILE* pfile = fopen(fileNamePrograms,"r");
//  if(pfile){
//    char strfile[255];
//    const char *token = ",";
//    
//    while(!feof(pfile)){ 
//        fscanf(pfile,"%s\n",strfile);
//        Disc line;
//        line.pages.clear();  
//        char* tk = strtok(strfile,token);
//        line.name = (char*)malloc(strlen(tk)+1);
//        strcpy(line.name,tk);
//        while(tk = strtok(NULL,token)){
//          line.pages.push_back(atoi(tk));
//        }
//        this->programs.push_back(line);
//    }
//  }
//  fclose(pfile);
//}
//
//void Memoria::Processamento(int *pg){
//   vector<Disc>pg = pg;
//	int cont = 0;
//		for(int i = 0; i < programs.size(); i++){
//			for(int j = 0;  j< programs.at(i).pages.size();i++){
//				if(programs.at(i).pages.at(j) == memoria[i]){
//				if(cont < TAM){
//					memoria[cont] = ("%s,%d",programs.at(i).name,programs.at(i).pages.at(j));
//					cont ++;
//					contM++;
//					if(programs.at(i).name == "A1"){
//						contA1++;
//					}else if(programs.at(i).name == "A2"){
//						contA2++;
//					}else if(programs.at(i).name == "A3"){
//						contA3++;
//					}else{
//						contA4++;
//					}
//				}else{
//					swap.push_back({programs.at(i).name,programs.at(i).pages.at(j)});
//					contswap++;
//					if(programs.at(i).name == "A1"){
//						contA1++;
//					}else if(programs.at(i).name == "A2"){
//						contA2++;
//					}else if(programs.at(i).name == "A3"){
//						contA3++;
//					}else{
//						contA4++;
//					}
//				}	
//			    }else if(programs.at(i).pages.at(j) == pg.at(i).pages.at(j)){
//					memoria[cont] = ("%s,%d",programs.at(i).name,programs.at(i).pages.at(j));
//					contD++;
//					if(programs.at(i).name == "A1"){
//						contA1++;
//					}else if(programs.at(i).name == "A2"){
//						contA2++;
//					}else if(programs.at(i).name == "A3"){
//						contA3++;
//					}else{
//						contA4++;
//					}
//			    }
//			}   
//		}
//}
//void Memoria::Contabilizacao(){
//	cout << "Pego da Memoria: " << contM << endl;
//	cout << "Pedo do Disco: " <<contD << endl;
//	cout << "A1: " << contA1 << endl;
//	cout << "A2: " << contA2 << endl;
//	cout << "A3: " << contA3 << endl;
//	cout << "A4: " << contA4 << endl;
//	cout << "Usou a swap: " << contswap << endl;
//}
//void Memoria::retorno(){
//	vector<Disc>pg;
//	for(int i = 0; i < memoria[TAM]; i++){
//		pg.push_back(memoria[i]);
//		for(int k= 0; k < swap.size(); k++){
//			for(int j = TAM;j > 0; j--)
//		        memoria[j] = swap.at(k);
//		}	
//	}
//	//Disco d.recebimento(pg);
//}
