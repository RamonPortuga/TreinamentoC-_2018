#include <iostream>
using namespace std;
int n,qtd,vetor[51];
main(){
	cin>>n;
	qtd=0;
	for (int i=0;i<n;i++){
		cin>>vetor[i];
	}
	for (int i=0;i<n;i++){
		if(vetor[i]==1)
			qtd++;
		if(vetor[i-1]==1)
			qtd++;
		if(vetor[i+1]==1)
			qtd++;
		cout<<qtd;
		cout<<"\n";
		qtd=0;
	}
}
