#include<iostream>
using namespace std;
double var1,var2,var3;
main(){
	cin>>var1;
	cin>>var2;
	var3=var1/var2;
	cout.precision(2); // indico a precis�o que eu quero na sa�da
	cout.setf(ios::fixed);
	cout<<var3;
}
