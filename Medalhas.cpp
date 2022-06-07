#include <iostream>
using namespace std;
int T1,T2,T3,ouro,prata,bronze;
main(){
	cin>>T1;
	cin>>T2;
	cin>>T3;
	if ( T1 < T2 && T2 < T3 ) { ouro = 1; prata = 2; bronze = 3; }
	if ( T1 < T3 && T3 < T2 ) { ouro = 1; prata = 3; bronze = 2; }
	if ( T2 < T1 && T1 < T3 ) { ouro = 2; prata = 1; bronze = 3; }
	if ( T2 < T3 && T3 < T1 ) { ouro = 2; prata = 3; bronze = 1; }
	if ( T3 < T1 && T1 < T2 ) { ouro = 3; prata = 1; bronze = 2; }
	if ( T3 < T2 && T2 < T1 ) { ouro = 3; prata = 2; bronze = 1; }
	cout<<ouro;
	cout<<prata;
	cout<<bronze;
}
