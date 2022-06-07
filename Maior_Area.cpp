#include <iostream>
using namespace std;
int l1,a1,l2,a2,area1,area2;
main(){
	cin>>l1;
	cin>>a1;
	cin>>l2;
	cin>>a2;
	area1=l1*a1;
	area2=l2*a2;
	if(area1>area2)
		cout<<"Primeiro";
	if(area1<area2)
		cout<<"Segundo";
	if(area1==area2)
		cout<<"Empate";
}
