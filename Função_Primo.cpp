#include <iostream>

using namespace std;

bool eh_primo(int x){
	int i,qtd;
	qtd=0;
	for(i=1;i<x;i++){
		if(x%i==0){
			qtd++;
		}
	}
	if(qtd>1)
		return false;
	else
		return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout<<"S"<<"\n";
	}else{
		cout<<"N"<<"\n";
	}
}
