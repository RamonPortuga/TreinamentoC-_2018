#include <iostream>
using namespace std;
int aux,j,aux2,qtd;
string a,b,c;
main(){
	cin>>a;
	aux=a.size();
	j=0;
	qtd=0;
	aux2=aux;
	for(int i=0;i<aux;i++){
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')){
			b+=a[i];
		}
	}
	aux2=b.size();
	for(int i=0;i<aux2;i++){
		if(b[i]==b[j])
			qtd++;
		j--;
	}
	cout<<qtd;
	;
	if(qtd==j)
		cout<<"S";
	else
		cout<<"N";
}
