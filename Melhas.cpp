#include <iostream>
using namespace std;
int t1,t2,t3;
main(){
	cin>>t1;
	cin>>t2;
	cin>>t3;
	if((t1>t2)&&(t2>t3))
		cout<<"1\n2\n3";
	if((t2>t1)&&(t1>t3))
		cout<<"2\n1\n3";
	if((t3>t1)&&(t1>t2))
		cout<<"3\n1\n2";
	if((t1>t2)&&(t3>t2))
		cout<<"1\n3\n2";
	if((t2>t1)&&(t3>t2))
		cout<<"3\n2\n1";
	if((t2>t3)&&(t3>t1))
		cout<<"2\n3\n1";
}
