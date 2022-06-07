#include<bits/stdc++.h>

using namespace std;

int fatorial(int n){

    if(n == 1 || n == 0){

        return 1;

    }

    return n * fatorial(n - 1);
}

main(){

    int num;

    cin >> num;

    cout << fatorial(num);

}
