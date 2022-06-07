#include <iostream>
#define TAM 100005
using namespace std;
int a[TAM],n,soma,metade;
main(){
	cin>>n;
	soma=0;
	for (int i=0;i<n;i++){
		cin>>a[i];
		soma+=a[i];
	}
	for(int i=0;i<n;i++){
		metade+=a[i];
		if(metade==(soma/2))
			cout<<i+1;
	}
}
