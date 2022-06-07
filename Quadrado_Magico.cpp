#include <iostream>
#define TAM 11
using namespace std;
int m[TAM][TAM],n,sdp,sds,sl[TAM],sc[TAM],qtd1,qtd2;
main(){
	cin>>n;
	qtd1=0;
	qtd2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>m[i][j];
		}
	}
	for(int i=0;i<n;i++){
		sdp+=m[i][i];
		sds+=m[i][n-1-i];
		for(int j=0;j<n;j++){
			sl[i]+=m[j][i];
			sc[i]+=m[i][j];
		}
	}
	for(int i=0;i<n;i++){
		if(sl[i]==sdp)
			qtd1++;
		if(sc[i]==sdp)
			qtd2++;
	}
	if((sdp==sds)&&(qtd1==n)&&(qtd2==n))
		cout<<sdp;
	else
		cout<<"-1";
}
