#include<iostream>
#define TAM 1000
using namespace std;
int m[TAM][TAM],n[TAM][TAM],aux[TAM][TAM],l,c,s;
main(){
	cin>>l>>c;
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			cin>>m[i][j];
		}
	}
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			cin>>n[i][j];
		}
	}
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			s=0;
			for(int k=0;k<l;k++){
				s+=m[i][k]*n[k][j];
			}
			aux[i][j]=s;
		}
	}
	cout<<"\n";
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			cout<<aux[i][j]<<"\n";
		}
	}
}
