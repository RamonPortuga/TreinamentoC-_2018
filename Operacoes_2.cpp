#include <iostream>

using namespace std;

int main(){
	double a, b;
	char letra;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	cin>>letra;
	cin>>a>>b;

		
	if(letra=='M'){
		cout<<a*b;
		
	}else if(letra=='D'){
		cout<<a/b;
	}
}
