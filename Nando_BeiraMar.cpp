#include<iostream>
using namespace std;
int vetor[10],a,i,c;
main(){
	for(int i=0;i<10;i++){
		cin>>vetor[i];
	}
	a=1;
	i=0;
	c=0;
	while(a!=0){
		if(vetor[i]!='\0')
			c++;
		if(vetor[i]=='\0'){
		    a=0;
		}
		i++;
	}
	cout<<c;
}
