#include <iostream>
using namespace std;
int n,l,c,quebra;
main(){
	cin>>n;
	quebra=0;
	for(int i=0;i<n;i++){
		cin>>l;
		cin>>c;
		if(l>c)
			quebra+=c;
	}
	cout<<quebra;
}
