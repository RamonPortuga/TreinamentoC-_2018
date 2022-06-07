//Faça um programa que leia uma matriz 5X3 e calcule a sua transposta
#include <iostream>
#define TAM 5
#define TAM2 3
using namespace std;
int matriz[TAM][TAM],aux[TAM][TAM2];
main(){
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM2;j++){
			cin>>matriz[i][j];
			aux[j][i]=matriz[i][j];
		}
	}
	for(int i=0;i<TAM2;i++){
		for(int j=0;j<TAM;j++){
			cout<<aux[i][j]<<"\t";	
		}
		cout<<"\n";
	}
}
