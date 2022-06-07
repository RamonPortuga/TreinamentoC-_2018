#include <iostream>
using namespace std;
int i,var1,qtd,primo;
main(){
	cin>>var1;
	qtd=0;
	primo=0;
	i=1;
	while((i<=var1)||(primo==0)){
		if(var1%i==0)
			qtd++;
		if(qtd>2)
			primo=1;
		i++;
	}
	if(primo==1)
		cout<<"N";
	else
		cout<<"S";
}
