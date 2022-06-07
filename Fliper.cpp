#include <iostream>
using namespace std;
int p,r;
main(){
	cin>>p;
	cin>>r;
	if(p==1 and r==0){
		cout<<"B";
	}
	else if(p==0 and r==0){
		cout<<"C";
	}
	else if(p==0 and r==1){
		cout<<"A";
	}
	else if(p==1 and r==1){
		cout<<"C";
	}
}
