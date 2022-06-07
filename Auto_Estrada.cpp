#include <iostream>
#define TAM 1000005
using namespace std;
int result,c;
char vetor[TAM];
main(){
	cin>>c;
	result=0;
	for(int i=0;i<c;i++){
		cin>>vetor[i];
	}
	for(int i=0;i<c;i++){
		if(vetor[i]=='P')
			result+=2;
		if(vetor[i]=='C')
			result+=2;
		if(vetor[i]=='A')
			result+=1;
		if(vetor[i]=='D')
			result+=0;
	}
	cout<<result;[]
}
