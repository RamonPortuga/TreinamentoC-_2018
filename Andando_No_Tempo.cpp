#include <iostream>
using namespace std;
int a,b,c;
main(){
	cin>>a;
	cin>>b;
	cin>>c;
	if((a==c)||(a==b)||(b==c))
		cout<<"S";
	else if((a+b)==c||(a+c)==b||(b+c)==a)
		cout<<"S";
	else
		cout<<"N";
}
