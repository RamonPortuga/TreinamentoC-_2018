#include <iostream>
using namespace std;
float n1,n2,media;
main(){
	cin>>n1;
	cin>>n2;
	media=(n1+n2)/2;
	if(media>=7)
		cout<<"Aprovado";
	else if ((media<7) and (media>=4))
		cout<<"Recuperacao";
	else if(media<4)
		cout<<"Reprovado";
}
