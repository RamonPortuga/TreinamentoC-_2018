#include <iostream>
using namespace std;
int n;
main(){
	cin>>n;
	int aux = n;
	int aux2;
	int cont = 0;
	while(n!=0){
		if(n/100!=0){
			aux2 = n/100;
			cont += aux2;
			n = aux - (aux2*100);
		}
		else if(n/50!=0){
			aux2 = n/50;
			cont += aux2;
			n = aux - (aux2*50);
		}
		else if (n/25!=0){
			aux2 = n/25;
			cont += aux2;
			n = aux - (aux2*25);
		}
		else if (n/10!=0){
			aux2 = n/10;
			cont += aux2;
			n = aux - (aux2*10);
		}
		else if (n/5!=0){
			aux2 = n/5;
			cont += aux2;
			n = aux - (aux2*5);
		}
		else if (n/1!=0){
			aux2 = n/1;
			cont += aux2;
			n = aux - (aux2*1);
		}
		aux = n;
	}
	cout << cont;
}
