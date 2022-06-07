#include <iostream>
using namespace std;
class Aviao{
	public:
		
	private:
		int vel;
		int velMax;
		string tipo;
		void ini(int tp);
		
};
void Aviao::ini(int tp){
	
}
main(){
	Aviao *avi = new Aviao();
	cout << avi->vel;
}
