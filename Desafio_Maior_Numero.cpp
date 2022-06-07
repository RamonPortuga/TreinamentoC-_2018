#include <iostream>
using namespace std;
int mn,n,aux;
main(){
	n=1;
	aux=1;
	while(n!=0){
		cin>>n;
		if((aux==1)&&(n!=0))
			mn=n;
		if((mn<n)&&(n!=0))
			mn=n;
		aux++;
	}
	cout<<mn;
}
