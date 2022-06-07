//Fazer base do jogo em C++
//Criar um pequeno menu com:
//1- Ver o preenchimento da matriz após o random
//2- Esboço do campo minado completo
//3- Se posível fazer algo "jogável"
//OBS: Usar o system pra ficar limpo
#include <iostream>
#include <cstdlib>
#include <ctime>
#define TAM 100100
using namespace std;
int matriz[TAM][TAM],n,aux,qtd,matrizCampo[TAM][TAM],k,quantidade;
main(){
	cin>>n;
	qtd=0;
	k=0;
	while(k<10){
		srand((unsigned)time(NULL));
		int i = rand()%n;
		int j = rand()%n;
		if(matriz[i][j]==0)
			matriz[i][j]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<"\t";
		}
	}
	cout<<"\n\n\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>=1) {
				if(matriz[i-1][j]==1)
					qtd++;
				if(matriz[i-1][j+1]==1)
					qtd++;
			}
			if(i>=1&&j>=1) {
				if(matriz[i-1][j-1]==1)
					qtd++;
			}
			if(j>=1) {
				if(matriz[i][j-1]==1)
					qtd++;
				if(matriz[i+1][j-1]==1)
					qtd++;
			}
			if(matriz[i][j+1]==1)
				qtd++;
			if(matriz[i+1][j]==1)
				qtd++;
			if(matriz[i+1][j+1]==1)
				qtd++;
			matrizCampo[i][j]=qtd;
			qtd=0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrizCampo[i][j]<<"\t";
		}
	}
}
