#include<iostream>
using namespace std;
int n,t,tt,d;
main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;
		if(i==1)
			d=t;
		if(t>0)
			tt=t+10;
	}
	tt=tt-d;
	cout<<tt;
}
