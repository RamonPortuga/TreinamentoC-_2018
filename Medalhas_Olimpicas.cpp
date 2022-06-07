#include <iostream>
using namespace std;
int o1,p1,b1,o2,p2,b2;
main(){
	cin>>o1;
	cin>>p1;
	cin>>b1;
	cin>>o2;
	cin>>p2;
	cin>>b2;
	if(o1>o2)
		cout<<"A";
	else if (o2>o1)
		cout<<"B";
	else if (o1==o2){
		if(p1>p2)
			cout<<"A";
		else if (p2>p1){
			cout<<"B";
		}
		else if(p1==p2){
			if(b1>b2)
				cout<<"A";
			else if (b2>b1)
				cout<<"B";
		}
	}
}
