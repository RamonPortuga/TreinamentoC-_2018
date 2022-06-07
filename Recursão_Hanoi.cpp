#include <iostream>
using namespace std;
int TowerOfHanoi(int disk)
{
    if(disk==1)
        return 1;
    else{
        return (1+2*TowerOfHanoi(disk-1));
    }
}
int main(){
    int n;
    int interation = 1;
    while (cin >> n){
        if (n == 0)
            break;
        cout <<"Teste "<<interation<<"\n";
        cout <<TowerOfHanoi(n)<<"\n";
        interation++;
    }
    return 0;
}
