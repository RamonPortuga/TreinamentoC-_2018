#include <iostream>
using namespace std;
double var1,var2;
char op;
main(){
	cout.precision(2);
	cout.setf(ios::fixed);
	cin>>op;
	cin>>var1>>var2;
	if(op=='M')
		cout<<var1*var2;
	else if(op=='D')
		cout<<var1/var2;
}
