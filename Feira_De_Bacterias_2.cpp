#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int maiorIndixe = 0;
    double maiorMutl = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        double d,c;
        cin >> d >> c;
        if(pow(d,c / 200.0) > maiorMutl){
            maiorMutl = pow(d,c / 200.0);
            maiorIndixe = i;
        }
    }
    cout << maiorIndixe;
    return 0;
}
