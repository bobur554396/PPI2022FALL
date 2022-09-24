#include <iostream>

using namespace std;

int main(){
    // prime numbers: 2, 3, 5, 7, 11, 
    // not prime: 10, 15, 20
    int n;
    cin >> n;
    
    bool ok = true;
    for(int i = 2; i < n; i++){ // i = 3, 5, n = 15
        if(n % i == 0){
            cout << "no" << endl;
            ok = false;
            break;
        }
    }
    if(ok)
        cout << "yes" << endl;

    return 0;
}