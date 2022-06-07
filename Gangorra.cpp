#include <iostream>
using namespace std;
int p1,c1,p2,c2,var1,var2;
main(){
	cin>>p1;
	cin>>c1;
	cin>>p2;
	cin>>c2;
	var1=p1*c1;
	var2=p2*c2;
	if(var1==var2)
		cout<<"0";
	else if(var1>var2)
		cout<<"-1";
	else if(var2>var1)
		cout<<"1";
}
