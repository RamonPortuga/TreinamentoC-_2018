#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string title(string F){
	for(int i = 0;i<F.size();i++){
		F[i] = tolower(F[i]);
	}
	F[0] = toupper(F[0]);
	for(int i = 0;i<F.size();i++){
		if(F[i] == ' ')
			F[i+1] = toupper(F[i+1]);
	}
	return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout<<title(F)<<"\n";
}

