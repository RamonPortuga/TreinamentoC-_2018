#include <iostream>
using namespace std;
int n,menor,aux;
main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>aux;
		if(aux>=0){
			if(i==0)
				menor=aux;
			if(menor>aux)
				menor=aux;
		}
	}
	cout<<menor;
}
