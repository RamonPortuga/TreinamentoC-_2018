#include <iostream>
using namespace std;
int a,b,c;
main(){
	cin>>a;
	cin>>b;
	cin>>c;
	if((a!=b)&&(a!=c))
		cout<<"A";
	else if((b!=c)&&(b!=a))
		cout<<"B";
	else if((c!=a)&&(c!=b))
		cout<<"C";
	else if((a==b)&&(a==c))
		cout<<"*";
}
