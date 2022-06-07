//Se a primeira casa da String for um número será um hidrocarboneto ramificado
//Para os hidrocarbonetos menores como de 3 pra baixo (=<3) comparar a primeira letra digitada pois os prefixos da qtd de C terão incio diferente das ramificadas
//São até 10C logo podem ser até 16 ramificações (acho eu), 
#include<iostream>
#include <string.h>
using namespace std;
char nome[50];
int c,a,b;
main(){
	cout<<"Entre com o nome do hidrocarboneto:\t";
	cin>>nome;
	a=1;
	b=0;
	c=0;
	while(a!=0){
		if(nome[b]!=0)
			c++;
		if(nome[b]==0){
		    a=0;
		}
		b++;
	}
	for(int i=0;i<c;i++){
		nome[i]=tolower(nome[i]);
	}
	if(nome[0]=='m'){
		c=1;
	}
	if(nome[0]=='e'){
		c=2;
	}
	if((nome[0]=='p')&&(nome[1]=='r')){
		c=3;
	}
	if(nome[0]=='b'){
		c=4;
	}
	if((nome[0]=='p')&&(nome[1]=='e')){
		c=5;
	}
	if((nome[0]=='h')&&(nome[2]=='x')){
		c=6;
	}
	if((nome[0]=='h')&&(nome[1]=='p')){
		c=7;
	}
	if(nome[0]=='o'){
		c=8;
	}
	if(nome[0]=='n'){
		c=9;
	}
	if(nome[0]=='d'){
		c=10;
	}
	cout<<c<<"\n";
	if(nome[c-3]=='a'){
		cout<<"Simples";
	}
	if((nome[c-3]=='e')&&(nome[c-5]!='d')){
		cout<<"1 Dupla";
	}
	if(nome[c-3]=='i'){
		cout<<"Tripla";
	}
	if((nome[c-3]=='e')&&(nome[c-5]=='d')){
		cout<<"2 Duplas";
	}
}
