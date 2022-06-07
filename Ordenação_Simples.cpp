#include <iostream>
#include <algorithm>
#define TAM 100100
using namespace std;
int n,vetor[TAM];
main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>vetor[i];
	}
	sort(vetor,vetor+n);
	for(int i=0;i<n;i++){
		cout<<vetor[i]<<" ";
	}
}
