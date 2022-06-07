#include <iostream>
using namespace std;
int n,p,q,resultado;
char c;
main(){
	cin>>n;
	cin>>p;
	cin>>c;
	cin>>q;
	if(c=='+')
		resultado=p+q;
	if(c=='*')
		resultado=p*q;
	if(resultado<=n)
		cout<<"OK";
	else
		cout<<"OVERFLOW";
}
