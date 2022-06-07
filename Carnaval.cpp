#include <iostream>
using namespace std;
float n[5],tot,maior,menor;
main(){
	for (int i=0;i<5;i++){
		cin>>n[i];
	}
	for (int i=0;i<5;i++){
		if(i==0){
			maior=n[i];
			menor=n[i];
		}
		if(maior<n[i])
			maior=n[i];
		if(menor>n[i])
			menor=n[i];
		tot+=n[i];
	}
	tot=tot-maior-menor;
	cout.precision(1);
	cout.setf(ios::fixed);
	cout<<tot;
}
