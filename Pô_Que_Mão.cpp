#include <iostream>
#include <algorithm>
using namespace std;
int n,x[3],cont = 0;
main(){
	cin >> n;
	for(int i=0;i<3;i++){
		cin >> x[i];
	}
	sort(x,x+3);
	for (int i=0;i<3;i++){
		if(n-x[i]>=0){
			cont++;
			n-=x[i];
		}
	}
	cout << cont;
}
