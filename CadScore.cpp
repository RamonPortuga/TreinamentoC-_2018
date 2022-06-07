#include <iostream>
using namespace std;
int pontos,fases,aux;
main(){
	cin>>pontos;
	cin>>fases;
	for(int i=0;i<fases;i++){
		cin>>aux;
		pontos+=aux;
		if(pontos>100)
			pontos=100;
		if(pontos<0)
			pontos=0;
	}
	cout<<pontos;
}
