#include <iostream>
#include<cmath>
#define TAM 10005
using namespace std;
double vetor[TAM];
int n;
main(){
	cin>>n;
	cout.precision(4);
	cout.setf(ios::fixed);
	for(int i=0;i<n;i++){
		cin>>vetor[i];
	}
	for(int i=0;i<n;i++){
		vetor[i]=sqrt(vetor[i]);
	}
	for(int i=0;i<n;i++){
		cout<<vetor[i];
	}
}
