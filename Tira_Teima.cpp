#include <iostream>
using namespace std;
int x,y;
main(){
	cin>>x;
	cin>>y;
	if((x>432)||(x<0)||(y>468)||(y<0))
		cout<<"fora";
	else
		cout<<"dentro";
}
