#include <iostream>
#include <cmath>
using namespace std;
double var1,var2,result;
main(){
	cin>>var1;
	cin>>var2;
	result=pow(var1,var2);
	cout.precision(4);
	cout.setf(ios::fixed);
	cout<<result;
}
