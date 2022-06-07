#include <iostream>
using namespace std;
int var1,qtd,primo;
main(){
	cin>>var1;
	qtd=0;
	primo=0;
	for(int i=1;i<=var1;i++){
		if((var1%i)==0)
			qtd++;
	}
	if(qtd>2)
		cout<<"N";
	else
		cout<<"S";
}
