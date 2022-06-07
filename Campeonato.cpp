#include <iostream>
using namespace std;
int cv,ce,cs,fv,fe,fs,pontosc,pontosf;
main(){
	cin>>cv;
	cin>>ce;
	cin>>cs;
	cin>>fv;
	cin>>fe;
	cin>>fs;
	pontosc=(cv*3)+ce;
	pontosf=(fv*3)+fe;
	if(pontosc>pontosf)
		cout<<"C";
	else if (pontosc<pontosf)
		cout<<"F";
	else if (pontosc==pontosf){
		if(cs>fs)
			cout<<"C";
		else if(fs>cs)
			cout<<"F";
		else if(fs==cs)
			cout<<"=";
	}
}
