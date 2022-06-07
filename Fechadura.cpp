#include <iostream>
#define TAM 100
using namespace std;
int n,m,vetor[TAM],maior,menor;
main(){
	cin>>n>>m;
	for(int i = 0;i < n;i++){
		cin>>vetor[i];
	}
	for(int i = 0;i < n;i++){
		if(i == 0){
			maior = vetor[i];
			menor = vetor[i];
		}
		else{
			if(vetor[i]>maior)
				maior = vetor[i];
			else if (vetor[i]<menor)
				menor = vetor[i];
		}
	}
	cout << maior - menor;
}
