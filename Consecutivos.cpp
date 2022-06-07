#include <iostream>
#define TAM 10001
using namespace std;
int n,v,aux,aux2,aux3;
main(){
	cin>>n;
	aux2=1;
	aux3=2;
	for (int i=0;i<n;i++){
		cin>>v;
		if(v==aux)
			aux2++;
		else{
			aux3=aux2;
			aux2=1;
		}
		aux=v;
	}
	if(aux2>aux3)
		aux3=aux2;
	cout<<aux3;
}
