#include <iostream>
using namespace std;
int soma_num(int n,int soma),n;
main(){
	cin>>n;
	cout<<soma_num(n,0);
}
int soma_num(int n,int soma){
	if(n>0){
		soma+=n;
		n--;
		soma_num(n,soma);
	}
	else
		return soma;
}
