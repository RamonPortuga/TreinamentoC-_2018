#include <iostream>
#include <cstdlib>
#define TAM 100
using namespace std;
char v[100],aux[2];
main(){
	int a = 1,c = 0, cont = 0,quant = 0,i=0;
	cin >> v;
	while(a!=0){
		if(v[i]!='!')
			c=c+1;
		else if(v[i]=='!')
			quant++;
		else if(v[i]==0)
		    a=0;
		cont++;
		i++;
	}
	for(i = 0;i<c;i++){
		aux[i] = v[i];
	}
	int numero = atoi(aux);
	int aux2 = cont - c;
	cout << numero;
//	for(int i=0;i<aux;i++){
		
//	}
}
