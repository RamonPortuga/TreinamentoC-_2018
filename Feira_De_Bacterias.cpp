#include<iostream>
#include <cmath>
using namespace std;
double n,d,c,result,pos,maior;
main(){
	cin>>n;
	maior=0;
	for(int i=0;i<n;i++){
		cin>>d;
		cin>>c;
		result=pow(d,c)/1000.0;
		if(maior<result){
			maior=result;
			pos=i;
		}
	}
	cout<<pos;
}
