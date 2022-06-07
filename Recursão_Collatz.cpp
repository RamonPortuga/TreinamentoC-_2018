#include <iostream>
using namespace std;
int collatz(int n,int quant),n;
main(){
	cin>>n;
	cout<<collatz(n,0);
}
int collatz(int n,int quant){
	if(n>1){
		if(n%2==0){
			n=n/2;
			quant++;
			collatz(n,quant);
		}
		else{
			n=(3*n)+1;
			quant++;
			collatz(n,quant);
		}
	}
	else
		return quant;
}
