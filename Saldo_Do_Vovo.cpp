#include <iostream>
using namespace std;
int n,s,ts,ms,aux,m;
main(){
	cin>>n;
	cin>>s;
	aux=1;
	ts=s;
	while(n>=aux){
		if(aux==1)
			ms=s;
		cin>>m;
		ts+=m;
		if(ms>ts)
			ms=ts;
		aux++;
	}
	cout<<ms;
}
