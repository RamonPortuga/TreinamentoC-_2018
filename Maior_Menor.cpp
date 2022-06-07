#include <iostream>
#define TAM 10
using namespace std;
int vetor[TAM],maior,menor;
main(){
	for(int i=0;i<TAM;i++){
		cin>>vetor[i];
	}
	for(int i=0;i<TAM;i++){
		if(i==0){
			maior=vetor[i];
			menor=vetor[i];
		}
		if(maior<vetor[i])
			maior=vetor[i];
		if(menor>vetor[i])
			menor=vetor[i];
	}
	cout<<maior<<"\n"<<menor;
}
