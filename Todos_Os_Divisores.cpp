#include <iostream>
using namespace std;
int x,i;
main(){
	cin>>x;
	i=1;
	while(i!=x+1){
		if((x%i)==0){
			cout<<i;
			cout<<" ";
		}
		i++;
	}
}
