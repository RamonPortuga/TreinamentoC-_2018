#include <iostream>
using namespace std;
int aux,j,aux3,qtd;
string a,b,c;
main(){
	cin>>a;
	aux=a.size();
	j=0;
	qtd=0;
	for(int i=0;i<aux;i++){
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')){
			b+=a[i];
			j++;
		}
	}
	aux3=j;
	for(int i=0;i<aux3;i++){
		c+=b[j-1];
		j--;
	}
	if(b==c)
		cout<<"S";
	else
		cout<<"N";
}
