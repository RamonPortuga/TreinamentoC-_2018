#include <iostream>
using namespace std;
int n,qtd;
string a,b;
main(){
	cin>>n;
	qtd=0;
	cin>>a;
	cin>>b;
	for(int i=0;i<n;i++){
		if(a[i]==b[i])
			qtd++;
	}
	cout<<qtd;
}
