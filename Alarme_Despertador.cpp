#include<iostream>
using namespace std;
int main(){
	int h1,m1,h2,m2;
	while(cin>>h1>>m1>>h2>>m2){
		if(h1==0&&m1==0&&m2==0&&h2==0){
			break;
		}
		h1*=60;
		h2*=60;
		if(h1+m1>h2+m2){
			cout<<(1440-(h1+m1)+h2+m2)<<endl;
		}else{
			cout<<h2+m2-h1-m1<<endl;
		}
	}
}
