#include <iostream>
using namespace std;
int h,p,f,d,aux1,aux2;
main(){
	cin>>h;
	cin>>p;
	cin>>f;
	cin>>d;
	if(d==-1){
		aux1=f-h;
		aux2=p-h;
		if(aux1>aux2)
			cout<<"N";
		else
			cout<<"S";
	}
	else{
		aux1=(15-f)+h;
		aux2=(15-p)+h;
		if(aux1>aux2)
			cout<<"S";
		else
			cout<<"N";
	}
}
