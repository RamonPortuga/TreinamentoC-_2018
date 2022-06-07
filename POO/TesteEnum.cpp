#include <iostream>
using namespace std;
class Produto{
	private: 
		int codigo;
		int quantidadeAtual;
//		Tipo tipo;
	//public:
	//	void setCodigo(int codigo);
	//	int getCodigo();
	//	void setQuantidadeAtual(int quantidadeAtual);
	//	int getQuantidadeAtual();
	public:
		void setCodigo(int codigo){
			this.codigo = codigo;
		}
		int getCodigo(){
			return codigo;
		}
		void setQuantidadeAtual(int quantidadeAtual){
			this.quantidadeAtual = quantidadeAtual;
		}
		int getQuantidadeAtual(){
			return quantidadeAtual;
		}
};
Produto::Produto(int codigo, int quantidadeAtual){
	setCodigo(codigo);
	setQuantidadeAtual(quantidadeAtual);
}
enum tipo{
	LEG ("Legume", 10,100, 3.00),
	VER ("Verdura",20,40, 2.00),
	FRU ("Fruta",30,60, 4.00);
};
main(){
	
}
