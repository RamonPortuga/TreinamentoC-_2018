#include <iostream>
#define TAM 105
using namespace std;
int aux,n[TAM][TAM],a,matriz[TAM][TAM];
main(){
	cin>>a;
	aux=a*2;
	for(int i=0;i<aux;i++){
		for(int j=0;j<a;j++){
			cin>>n[i][j];
		}
	}
	for(int i=0;i<aux;i++){
		for(int j=0;j<a;j++){
			matriz[i][j]=n[i][j]+n[i+a][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cout<<matriz[i][j];
		}
	}
}
